#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	float result;
	setlocale(LC_ALL, "Russian");
	cout << "Введiть значення а: ";
	cin >> a;
	cout << "Введiть значення b: ";
	cin >> b;
	cout << "Введiть значення c: ";
	cin >> c;
	cout << "Введiть значення d: ";
	cin >> d;
	if ((a == b) || (a == -b)) {
		printf("Дiлення на 0");
	}
	else if (sin(c) == 0) {
		cout << "Дiлення на 0";
	}
	else if (d < 0) {
		printf("Логарифм не iснує");
	}
	else {
		result = log(d) / (abs(a * a - b * b) * sin(c));
		printf("Область визначення:(0;+infinity)\n");
		printf("Значення функцii:%f", result);
	}
}
	
