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
		std::cout << "������" << std::endl;
	else if (x == static_cast<int>(months::February))
		std::cout << "�������" << std::endl;
	else if (x == static_cast<int>(months::March))
		std::cout << "����" << std::endl;
	else if (x == static_cast<int>(months::April))
		std::cout << "������" << std::endl;
	else if (x == static_cast<int>(months::May))
		std::cout << "���" << std::endl;
	else if (x == static_cast<int>(months::June))
		std::cout << "����" << std::endl;
	else if (x == static_cast<int>(months::July))
		std::cout << "����" << std::endl;
	else if (x == static_cast<int>(months::August))
		std::cout << "������" << std::endl;
	else if (x == static_cast<int>(months::September))
		std::cout << "��������" << std::endl;
	else if (x == static_cast<int>(months::October))
		std::cout << "�������" << std::endl;
	else if (x == static_cast<int>(months::November))
		std::cout << "������" << std::endl;
	else if (x == static_cast<int>(months::December))
		std::cout << "�������" << std::endl;
}

bool input() {
	int x;
	std::cout << "������� ����� ������:";
	std::cin >> x;

	if (x == 0) {
		std::cout << "�� ��������" << std::endl;
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