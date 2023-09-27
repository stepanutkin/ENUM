#include <iostream>
#include <string>


struct Information {

	int number_of_account;
	std::string name;
	double amount_of_money;

};

void new_inform(Information& p, double x) {
	p.amount_of_money = x;
	std::cout << "¬аш счЄт: ";
	std::cout << p.name << ", " << p.number_of_account << ", " << p.amount_of_money;
}


int main() {

	setlocale(LC_ALL, "Russian");
	Information  client;
	double new_money;

	std::cout << "¬ведите номер счЄта:";
	std::cin >> client.number_of_account;

	std::cout << "¬ведите им€ владельца:";
	std::cin >> client.name;

	std::cout << "¬ведите баланс:";
	std::cin >> client.amount_of_money;

	std::cout << "¬ведите новый баланс:";
	std::cin >> new_money;

	new_inform(client, new_money);

	return 0;
}