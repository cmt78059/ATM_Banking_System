#include <iostream>
#include "Functions.h"

int menu()
{
	int c = 0;
	std::cout<<"ATM Banking System Menu"<<std::endl;
	std::cout << "1.)Account Summary" << std::endl;
	std::cout << "2.)Deposit" << std::endl;
	std::cout << "3.)Withdraw" << std::endl;
	std::cout << "4.)Exit" << std::endl;
	std::cout << "Enter the Number Corresponding to your choice below" << std::endl;
	std::cout << "Choice:";
	std::cin >> c;
	
	return c;
}