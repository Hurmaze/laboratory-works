#include<iostream>
#include<math.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "Ukrainian");
	double eps, n, x, sum, s0, s;
	eps = 0.000001;
	n = 1;
	sum = 0;
	s0 = 1;
	cout << "Введiть значення х" << " "; cin >> x;
	if (x > -1 && x < 1) // перевіряємо чи буде зведений ряд
	{
		while (abs(sum - s0) >= eps) // виконується доки різниця теперішньої суми та попередньої за модулем більше eps
		{
			s0 = sum;
			s = (pow((-1), (n + 1)) * pow(x, (n - 1)) / n);
			sum = s0 + s;
			n++;
			cout << "Значення модуля рiзницi: " << setw(20) << fixed << setprecision(17) << abs(sum - s0) << endl;
		}
		cout << "Сума дорiвнює: " << setw(20) << fixed << setprecision(17) << sum << endl;
		cout << "Вираз за цiєi точностi дорiвнює: " << setw(20) << fixed << setprecision(17) << s << endl;
	}
	else { 
		printf("Ряд не зведений");
	}
}
