#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/**
 * what is deep copy and shallow copy
 * 
 */

int main()
{
	const Animal* meta = new Animal();

	meta->makeSound();

	return 0;
}

/*

const std::string & Brain::get_idea(size_t idx) const {
    if (idx >= m_ideas_cnt) {
        throw std::domain_error("Brain::get_idea(): idx is out of range.");
    }
    return m_ideas[idx];
}

void Brain::add_idea(const std::string & idea) {
    std::size_t i = m_ideas_cnt;

    // Shifting ideas to the right.
    if (i >= m_IDEAS_SIZE) {
        i = m_IDEAS_SIZE - 1;
    }
    while (i > 0) {
        m_ideas[i] = m_ideas[i - 1];
        i--;
    }
    *m_ideas = idea;
    if (m_ideas_cnt < m_IDEAS_SIZE) {
        m_ideas_cnt++;
    }
}


*/