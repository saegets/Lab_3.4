// Lab_03_4.cpp
// ������������ ������
// ����������� ������ No 3.4
// ������������, ������ ������� �������.
// ������ 3

#include <iostream>
using namespace std;

int main()
{
	double R;
	double x; // ������� ��������
	double y; // ������� ��������

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// ������������ � ����� ����
	if (y <= R && y >= -R && // ����� �
		x <= R && x >= -R && // ����� �
		R != (-(x * x + y * y)) / (2 * x - 2 * y) && R != (-(x * x + y * y)) / (2 * y - 2 * x)) // ����� ���� �� ����� �� ������ �������� ��

		cout << "yes" << endl;

	else
		cout << "no" << endl;

	cin.get();

	return 0;
}