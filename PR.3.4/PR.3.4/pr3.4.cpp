// Lab_03_4.cpp
// Клімашевський Максим
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 3

#include <iostream>
using namespace std;

int main()
{
	double R;
	double x; // вхідний аргумент
	double y; // вхідний параметр

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if (y <= R && y >= -R && // умова у
		x <= R && x >= -R && // умова х
		R != (-(x * x + y * y)) / (2 * x - 2 * y) && R != (-(x * x + y * y)) / (2 * y - 2 * x)) // умова того що точки не лежать всередині кіл

		cout << "yes" << endl;

	else
		cout << "no" << endl;

	cin.get();

	return 0;
}