

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double s(double , double , int&);
double y(double );

int main()
{
	int test=3;
	int n = 1;
	double a = 0.8;
	double b = 1.8;
	double h = (b - a) / 10;
	double eps = 0.0001;
	cout << setw(8) << "x" << setw(15) << "y(x)" << setw(15) << "summa" << setw(15) << endl;
	double x;
	for (x = a; x < b + h / 2; x += h)
	{

		cout << setw(8) << x << setw(15) << y(x) << setw(15) << s(x, eps, n) << setw(15);
		cout << n << endl;
	}

	system("pause");
	return 0;
}
double y(double x)
{
	return log(x);
}
double s(double x, double eps, int& n)
{
	double q, s;
	q = 1; s = 0;
	n = 1;
	while (fabs(q) > eps)
	{
		q *= -(x - 1);
		s += q/n;
		n++;
	}
	return -s;
}