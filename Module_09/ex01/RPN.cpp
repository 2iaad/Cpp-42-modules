#include "RPN.hpp"

RPN::RPN() {
	// std::cout << "RPN Default Constructor called" << std::endl;
}

RPN::RPN(const RPN &other) : stack(other.stack) {
	// std::cout << "RPN Copy Constructor called" << std::endl;
}

RPN	&RPN::operator=(const RPN &other) {
    if (this != &other)
		stack = other.stack;
	// std::cout << "RPN Copy Assignment Operator called" << std::endl;
    return *this;
}

RPN::~RPN() {
	// std::cout << "RPN Destructor called" << std::endl;
}

/*	|#------------------------------------------------------#|
	|#			 		 Member functions    				#|
	|#------------------------------------------------------#|
*/

void	RPN::DoOperation(char operation)
{
	int b = stack.top();
	stack.pop();
	int a = stack.top();
	stack.pop();

	switch (operation)
	{
		case '+':	return stack.push(a + b);
		case '-':	return stack.push(a - b);
		case '*':	return stack.push(a * b);
		case '/': 	if (b == 0)	throw std::invalid_argument("Error: Division by zero");
					return stack.push(a / b);
	}
}

int	RPN::Evaluate(const std::string &expression)
{
	std::istringstream iss(expression);
	std::string element;

	while (iss >> element)
	{
		if (std::isdigit(element[0]) && element.size() == 1)
			stack.push(element[0] - '0');

		else if (element == "+" || element == "-" || element == "*" || element == "/")
		{
			if (stack.size() < 2)
				throw std::invalid_argument("Error");

			DoOperation(element[0]);
		}
		else
			throw std::invalid_argument("Error");
	}
	if (stack.size() != 1)
		throw std::invalid_argument("Error");
	return stack.top();
}
