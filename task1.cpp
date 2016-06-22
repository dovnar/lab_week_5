#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	char color[10] = "color ";
	int fon;
	int shrift;
	cout << "0 = Черный		8 = Серый\n"
			"1 = Синий		9 = Светло-синий\n"
			"2 = Зеленый	a = Светло-зеленый\n"
			"3 = Голубой	b = Светло-голубой\n"
			"4 = Красный	c = Светло-красный\n"
			"5 = Лиловый	d = Cветло-лиловый\n"
			"6 = Желтый		e = Светло-желтый\n"
			"7 = Белый		f = Ярко белый\n"
		"Введите цвет фона ";
	cin >> color[6];

	if ((color[6]<'0' || color[6]>'9') && (color[6] < 'a' || color[6] > 'f'))
	{
		cout << "error!\n";
		return 1;
	}

	cout << "Введите цвет шрифта ";
	cin >> color[7];

	if ((color[7]<'0' || color[7]>'9') && (color[7] < 'a' || color[7] > 'f'))
	{
		cout << "error!\n";
		return 1;
	}
	if (color[6] == color[7])
	{
		cout << "Цвета недолжны совподать\n";
		return 1;
	}
	system(color);
	return 0;
}