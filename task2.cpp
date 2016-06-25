#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x, y = 7, cycle = 1, total = 1;

	cout << "вычисляем значение x в степенях от 1 до 7" "\n"
		"введите число х";
	cin >> x;

	if (y <= 0 || x == 0)
	{
		cout << "неверные данные, проверте число \n";
		return 1;
	}

	while (cycle <= y)
	{
		total = total*x;
		cout << x << " в степени " << cycle << " = " << total << endl;
		cycle++;
	}
	return 0;
}


//: Написать программу, которая по выбору пользователя возводит введенное 
// им число в степень от нулевой до седьмой включительно
