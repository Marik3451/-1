#pragma once
class ZavdClass
{
	double x;
	double y;
	double z;
public:
	double Fn_b(); // ���������� ������� b[x,y,z]
	double Fn_a(); // ���������� ������� a[x,y,z,b]
	ZavdClass(double x, double y, double z) { this->x = x, this->y = y, this->z = z; }
	double getx() { return x; }
	double gety() { return y; }
	double getz() { return z; }

};
