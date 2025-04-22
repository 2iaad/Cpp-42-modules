#include "RPN.hpp"

int RPN::evaluate(const std::string &expression)
{
	std::stack<int>	stack;
	std::istringstream iss(expression);
	std::string element;

	while (iss >> element)
	{
		if (std::isdigit(element[0]) && element.size() == 1)
		{
			stack.push(element[0] - '0');
		}
		else if (element == "+" || element == "-" || element == "*" || element == "/")
		{
			if (stack.size() < 2)
				throw std::invalid_argument("Error");

			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();

			if (element == "+")
				stack.push(a + b);
			else if (element == "-")
				stack.push(a - b);
			else if (element == "*")
				stack.push(a * b);
			else if (element == "/")
			{
				if (b == 0)
					throw std::invalid_argument("Error: Division by zero");
				stack.push(a / b);
			}
		}
		else
		{
			throw std::invalid_argument("Error");
		}
	}

	if (stack.size() != 1)
		throw std::invalid_argument("Error");

	return stack.top();
}
