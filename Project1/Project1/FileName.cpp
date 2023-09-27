#include <iostream>



enum class months {
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};


void output(int x) {
	if (x == static_cast<int>(months::January))
		std::cout << "Январь" << std::endl;
	else if (x == static_cast<int>(months::February))
		std::cout << "Февраль" << std::endl;
	else if (x == static_cast<int>(months::March))
		std::cout << "Март" << std::endl;
	else if (x == static_cast<int>(months::April))
		std::cout << "Апрель" << std::endl;
	else if (x == static_cast<int>(months::May))
		std::cout << "Май" << std::endl;
	else if (x == static_cast<int>(months::June))
		std::cout << "Июнь" << std::endl;
	else if (x == static_cast<int>(months::July))
		std::cout << "Июль" << std::endl;
	else if (x == static_cast<int>(months::August))
		std::cout << "Август" << std::endl;
	else if (x == static_cast<int>(months::September))
		std::cout << "Сентябрь" << std::endl;
	else if (x == static_cast<int>(months::October))
		std::cout << "Октябрь" << std::endl;
	else if (x == static_cast<int>(months::November))
		std::cout << "Ноябрь" << std::endl;
	else if (x == static_cast<int>(months::December))
		std::cout << "Декабрь" << std::endl;
}

bool input() {
	int x;
	std::cout << "Введите номер месяца:";
	std::cin >> x;

	if (x == 0) {
		std::cout << "До свидания" << std::endl;
		return false;
	}

	else {
		output(x);
		return true;
	}
}


int main() {

	setlocale(LC_ALL, "Russian");

	while (input()) {
	}

	return 0;
}