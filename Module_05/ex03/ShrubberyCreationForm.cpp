#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &_target) : AForm("ShrubberyCreationForm", 145, 137), target(_target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    (void)other;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (!this->getSigned()) // check that the form is signed
        throw AForm::NotSignedException();
    else if (executor.getGrade() > this->getEGrade()) // check that bureaucrat's grade is high enough
        throw AForm::GradeTooLowException();
	
	std::ofstream outfile(this->target + "_shrubbery");
    outfile << "                      ___" << std::endl;
    outfile << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    outfile << "             ,-'          __,,-- \\" << std::endl;
    outfile << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
    outfile << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    outfile << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
    outfile << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    outfile << "     (     ,-'                  `." << std::endl;
    outfile << "      `._,'     _   _             ;" << std::endl;
    outfile << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    outfile << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    outfile << "        `--\'   \"Hb  HH  dF\"" << std::endl;
    outfile << "                \"Hb HH dF" << std::endl;
    outfile << "                 \"HbHHdF" << std::endl;
    outfile << "                  |HHHF" << std::endl;
    outfile << "                  |HHH|" << std::endl;
    outfile << "                  |HHH|" << std::endl;
    outfile << "                  |HHH|" << std::endl;
    outfile << "                  |HHH|" << std::endl;
    outfile << "                  dHHHb" << std::endl;
    outfile << "                .dFd|bHb.               o" << std::endl;
    outfile << "      o       .dHFdH|HbTHb.          o /" << std::endl;
    outfile << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    outfile << "##########################################" << std::endl;
    outfile.close();	
}
