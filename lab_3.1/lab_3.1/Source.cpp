// Lab_3.1.cpp
// < ������ ������ ��������� >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 30
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������

	cout << "x = "; cin >> x;

	A = (x * x) * cos(x / 2);

	// ����� 1: ������������ � ��������� ����
	if (x < -5)
		B = x / 5 - exp(fabs(x));
	if (-1 < x && x < 1)
		B = (x * x * x) / 4 + 1;
	if (x >= 1)
		B = (1 / tan(log(x)));

	y = A + B;

	cout << endl;

	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
	if (x < -5)
		B = x / 5 - exp(fabs(x));
	else
		if (-1 < x && x < 1)
			B = (x * x * x) / 4 + 1;
		else
			B = (1 / tan(log(x)));

	y = A + B;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}