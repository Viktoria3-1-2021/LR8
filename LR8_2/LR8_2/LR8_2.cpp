//Напишите программу, которая позволяет пользователю ввести в консоли латинскую букву нижнего регистра, переводит её в верхний регистр и результат выводит в консоль.
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char a;
	cout << "Введите строчную букву:" << endl;
	cin >> a;
	a = toupper(a); //функция перевода регистра;
	cout << "Вывод заглавной буквы:" << endl << a << endl;
	system("pause");
	return 0;
}
