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
public:
	static int evaluate(const std::string &expression);
};