#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, y, x;
	double e = 2.71;
	cout << "Введите числа (a, b, x, y) : ";
	cin >> a >> b >> x >> y;

	if (x <= 0 || x < b)
		cout<<"Ответ: " << a* (x * x) + b * (y * y) + log10(abs((a / b) * pow(pow(sin(x), 2) + pow(y, 3), 1 / 3)));
	else if (x <= b && x < a)
		cout << "Ответ: " << (pow(e, a + 1)) / tan(b * x);
	else if (x >= a)
		cout << "Ответ: " << pow((y - x), 2) + 2 / 3 * log10(abs(cos(a * x - b * y)));
	

	

	}
	




