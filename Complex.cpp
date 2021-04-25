#include "Complex.h"

#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <sstream>
using namespace std;
Complex::Complex()
{
	x1 = 0;
	x2 = 0;
	y1 = 0;
	y2 = 0;
}
Complex::Complex(double x1, double x2, double y1, double y2)
{
	SetRe1(x1); SetRe2(x2); SetIm1(y1); SetIm2(y2);
}
Complex::Complex(const Complex& l)
{
	*this = l;
}
istream& operator >>(istream& in, Complex& a)
{
	cout << "vvedit re1:"; in >> a.x1;
	cout << "vvedit im1:"; in >> a.y1;
	cout << "vvedit re2:"; in >> a.x2;
	cout << "vvedit im2:"; in >> a.y2;
	if (a.x2 == 0 && a.y2 == 0)
		throw bad_exception();
	if (a.x1 == a.x2)
		throw invalid_argument("Error! - x1=x2 (pry vidnimanni otrymaemo 0 v realnii chastyni)");
	if (a.y1 == a.y2)
		throw "Error! - y1=y2 (pry vidnimanny otrymaemo 0 v mnymii chastyni)";
	if (a.y1 == 0 && a.y2 == 1)
		throw BadException("Error! - y1=0 && y2=1");
	return in;
}
ostream& operator <<(ostream& out, const Complex& a)
{
	out << string(a) << endl;
	return out;
}
Complex::operator string() const
{
	stringstream sout;
	sout << "re1: " << x1 << endl;
	sout << "im1: " << y1 << endl;
	sout << "re2: " << x2 << endl;
	sout << "im2: " << y2 << endl;
	return sout.str();
}
Complex& Complex::operator ++()
{
	++x1;
	return *this;
}
Complex& Complex::operator --()
{
	--x1;
	return *this;
}
Complex Complex::operator ++(int)
{
	y1++;
	return *this;
}
Complex Complex::operator --(int)
{
	y1--;
	return *this;
}
void Complex::Sub()
{
	cout << "vidnimannia: " << (x1 - x2, y1 - y2) << endl;
}
void Complex::Div()
{
	cout << "dilennia: " << (x1 * x2 + y1 * y2, x2 * y1 - x1 * y2) / (x2 * x2 + y2 * y2) << endl;
}
void Complex::Conj1()
{
	cout << "1-she spriazhene chyslo: " << (x1, -y1) << endl;
}
void Complex::Conj2()
{
	cout << "2-he spriazhene chyslo: " << (x2, -y2) << endl;
}
