// написать программу высчитывающую по расходу топлива ммашины и остатку топлива в баке сколько километров можно проехать (путь)?

#include <iostream>
//using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	float fuelConsumption = 0;
	int fuel = 0;
	int way = 0;

	std::cout << "Введите расход топлива (сколько литров топлива требуется чтобы проехать 100 км):" << std:: endl;
	std::cin >> fuelConsumption;
	std::cout << "Введите остаток топлива в баке на данный момент:" << std::endl;
	std::cin >> fuel;	
	std::cout << "Вы можете проехать: " << (way = (fuel / fuelConsumption)*100) << " км" << std::endl;

	return 0;
}