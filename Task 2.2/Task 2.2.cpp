// Task 2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

struct bank {
	int account_number;
	std::string name;
	double balance;
};
double get_new_balance(bank& user_bank, double new_balance) {
	user_bank.balance = new_balance;
	return user_bank.balance;
}

int main() {

	setlocale(LC_ALL, "Russian");

	bank user_bank;

	std::cout << "Введите номер счёта: ";
	std::cin >> user_bank.account_number;
	std::cout << '\n';

	std::cout << "Введите имя владельца: ";
	std::cin >> user_bank.name;
	std::cout << '\n';

	std::cout << "Введите баланс: ";
	std::cin >> user_bank.balance;
	std::cout << '\n';

	double new_balance;
	std::cout << "Введите новый баланс: ";
	std::cin >> new_balance;

	std::cout << "Ваш счёт: " << user_bank.name << ", " << user_bank.account_number << ", " << get_new_balance(user_bank, new_balance);






	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
