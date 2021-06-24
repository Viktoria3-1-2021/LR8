//Написать функцию, подсчитывающую среднее арифметическое целого массива.Предварительно объявив и, при необходимости, инициализировав переменные.
#include <iostream>
using namespace std;
const int M = 5;
int avg(int a[M])
{
	int sum = 0, avg = 0;
	for (int i = 0; i < M; i++)
	{		//ф-я поиска среднего арифметического в массиве;                     
		sum = sum + a[i];

	}
	avg = sum / M;
	return avg;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int b[M] = { 20,7,3,4,6 }; //один из вариантов заполнения массива;
	cout << "Среднее арифметическое массива=" << avg(b) << endl; //вызов ф-ии;
	system("pause");
	return 0;
}
