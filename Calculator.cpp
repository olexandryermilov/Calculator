// Calculator.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <string>
#include <iostream>

int main()
{

	while (true)
	{
		std::cout << ">";
		std::string input;
		getline(std::cin, input);
		//parse(input);
		std::cout << input << std::endl;
	}
	return 0;
}

