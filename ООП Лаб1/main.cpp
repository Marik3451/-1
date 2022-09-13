#include "ZavdClass.h"
#include "stdafx.h"
using namespace std;

double ZavdClass::Fn_b()
{
	double b1 = pow(cos(atan(pow(x, 2))), 2);
	double b2 = y / (z + 1) + x / z * exp(3 * x + y);
	return b1 + b2;
}
// Обчислення функції a[x,y,z,b]
double ZavdClass::Fn_a()
{
	double a1 = 1 + (sqrt(sin(pow(abs(x + y), 0.4))));
	double a2 = 2 + pow(Fn_b(), 2) + pow(sin((y - z)), 2);
	double a3 = tan(3 * x / z);
	return a1 / a2 + a3;
}
int main()
{
	setlocale(LC_ALL, "ukr");
	double x = 0;
	double y = 0.47 * 6;
	double z = -1.32 * 6;
	double j = 0.2;
	ZavdClass a = ZavdClass(x, y, z);
	cout << "Bираз A: " << a.Fn_a() << "\t" << "Bираз B: " << a.Fn_b() << endl;
	cout << "\n" << endl;
	for (double i = -1; i <= 1; i += j)
	{
		ZavdClass a = ZavdClass(x + i, y, z);
		cout << "Bираз A: " << a.Fn_a() << "\t" << "Bираз B: " << a.Fn_b() << endl;
	}

}
