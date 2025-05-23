#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <stdexcept>

#define ARG_ERR "Insert expression."

class RPN
{
private:
	std::stack<int> stack;
	void	DoOperation(char operation);
public:
	RPN();
	RPN(const RPN &other);
	RPN &operator=(const RPN &other);
	~RPN();

	int	Evaluate(const std::string &expression);
};