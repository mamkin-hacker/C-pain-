// переполнение переменной типа данных int

#include <iostream>
int main()
{
	setlocale(LC_ALL, "RU");
	int maxInteger = 0;
	maxInteger = 2147483647 + 2;
	std::cout << maxInteger;

	return 0;
}