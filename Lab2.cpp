#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	float result;
	setlocale(LC_ALL, "Russian");
	cout << "����i�� �������� �: ";
	cin >> a;
	cout << "����i�� �������� b: ";
	cin >> b;
	cout << "����i�� �������� c: ";
	cin >> c;
	cout << "����i�� �������� d: ";
	cin >> d;
	if ((a == b) || (a == -b)) {
		printf("�i����� �� 0");
	}
	else if (sin(c) == 0) {
		cout << "�i����� �� 0";
	}
	else if (d < 0) {
		printf("�������� �� i���");
	}
	else {
		result = log(d) / (abs(a * a - b * b) * sin(c));
		printf("������� ����������:(0;+infinity)\n");
		printf("�������� �����ii:%f", result);
	}
}
	
