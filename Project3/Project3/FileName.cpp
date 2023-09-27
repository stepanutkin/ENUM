#include <iostream>
#include <string>


struct Address {
	std::string name_city;
	std::string name_street;
	int number_of_house, number_of_flat, index;
};

void output(Address& p) {
	std::cout << "�����: " << p.name_city << std::endl;
	std::cout << "�����: " << p.name_street << std::endl;
	std::cout << "����� ����: " << p.number_of_house << std::endl;
	std::cout << "����� ��������: " << p.number_of_flat << std::endl;
	std::cout << "������: " << p.index << std::endl;
}



int main() {

	setlocale(LC_ALL, "Russian");

	Address city = { "Moscow","Arbat",12,8,123456 };
	output(city);


	return 0;
}