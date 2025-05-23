#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}


MateriaSource::MateriaSource(MateriaSource const &other) {
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
    *this = other;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const & other) {
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
		{
			if (this->materias[i])
			{
				delete this->materias[i];
				this->materias[i] = NULL;
			}
			if (other.materias[i])
				this->materias[i] = other.materias[i]->clone();
		}
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (materias[i])
            delete materias[i];
}

// 			######################################################

AMateria*	MateriaSource::getMateria(std::string const &other)
{
    for (int i = 0; i < 4; i++)
        if (materias[i] && materias[i]->getType() == other)
            return materias[i];
    return NULL;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return (void)(std::cout << "Can't learn Matria!" << std::endl);
    for (int i = 0; i < 4; i++)
        if (!materias[i])
        {
            materias[i] = m;
            // std::cout << "MateriaSource learned " << m->getType() << std::endl;
            return;
        }
    // std::cout << "MateriaSource can't learn " << m->getType() << std::endl;
}

AMateria*   MateriaSource::createMateria(std::string const& type) {
    for (int i = 0; i < 4; i++)
	{
        if (materias[i] && materias[i]->getType() == type)
            return materias[i]->clone(); 
	}
	std::cout << "Materia source can't create " << type << ". Not learned." << std::endl;
    return NULL;
}