// Lab_3.4.cpp
// < ������ ������>
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 30
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double �; // ������� ��������
	double b; // ������� ��������
	double R;
	double x;
	double y;

	cout << "input b = "; cin >> b;
	cout << "input � = "; cin >> �;
	cout << "input R = "; cin >> R;
	cout << "input x = "; cin >> x;
	cout << "input y = "; cin >> y;

	// ������������ � ����� ����
	if (((� * b) - (pow(x, 2) + pow(y, 2)) <= R * R) ||
		((pow(x, 2) + pow(y, 2)) <= (x > 0 && x < �) && (y > 0 && y < b)))

		cout << "yes" << endl;
	else

		cout << "no" << endl;

	cin.get();
	return 0;
}