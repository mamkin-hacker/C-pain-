// �������� ��������� ������������� �� ������� ������� ������� � ������� ������� � ���� ������� ���������� ����� �������� (����)?

#include <iostream>
//using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	float fuelConsumption = 0;
	int fuel = 0;
	int way = 0;

	std::cout << "������� ������ ������� (������� ������ ������� ��������� ����� �������� 100 ��):" << std:: endl;
	std::cin >> fuelConsumption;
	std::cout << "������� ������� ������� � ���� �� ������ ������:" << std::endl;
	std::cin >> fuel;	
	std::cout << "�� ������ ��������: " << (way = (fuel / fuelConsumption)*100) << " ��" << std::endl;

	return 0;
}