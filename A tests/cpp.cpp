#include<iostream>
#include<limits>

void	spliter(std::string &buf)
{
	size_t		old_ret = 0;
	size_t		ret = 0;
	short int	index = 0;
	std::string	date[3];

	while ((ret = buf.find('-', ret)) != std::string::npos)  //  2022-03-25
	{
		printf("old_ret:{%ld}\n", old_ret);
		printf("ret:{%ld}\n", ret);
		date[index] = buf.substr(old_ret, ret - old_ret);
		printf("------------------->{%c}\n", buf[ret]);

		printf("date[index]:{%s}\n\n", date[index].c_str());

		old_ret = ret + 1;
		index++;
		ret++;
	}
	printf("old_ret:{%ld}\n", old_ret);
	printf("ret:{%ld}\n", ret);
	date[index] = buf.substr(old_ret, ret);
	printf("------------------->{%c}\n", buf[ret]);

	printf("date[index]:{%s}\n\n", date[index].c_str());
}

#include <stdio.h>
int main() {

}