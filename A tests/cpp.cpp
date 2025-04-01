#include<iostream>

int main() {

	std::string str("2022-03-16,41133.08");

	std::cout << str << std::endl;

	std::cout << str[str.find(',')] << std::endl;
	str.resize(',',1); // what does resize do exactly ?
	str.shrink_to_fit(); // what does resize do exactly ?
	std::cout << str[12] << std::endl;
}