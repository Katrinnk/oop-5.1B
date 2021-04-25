#include "Complex.h"
#include <iostream>
#include <exception>;
#include <stdexcept>;
using namespace std;

int main()
{
	Complex l;
	bool result;
	do
	{
		try
		{
			result = true;
			cin >> l;
		}
		catch (const char* str)
		{
			result = false;
			cerr << str << endl;
		}
		catch (invalid_argument e)
		{
			result = false;
			cerr << e.what() << endl;
		}
		catch (bad_exception& e)
	{
		result = false;
		cerr << e.what() << endl;
	}
		catch (BadException e)
		{
			cerr << e.what() << endl;
			result = false;
		}
	} while (!result);
	cout << l;
	l.Sub();
	l.Div();
	l.Conj1();
	l.Conj2();
	cout << endl;
	cout << "inkrement(prefiksna forma)" << endl;
	++l; 
	cout << l;;
	cout << endl;
	cout << "dykryment(prefiksna forma)" << endl;
	--l; 
	cout << l;
	cout << endl;
	cout << "inkryment(postfiksna forma)" << endl;
	l++; 
	cout << l;
	cout << endl;
	cout << "dykrement(postfiksna forma)" << endl;
	l--; 
	cout << l;
	return 0;
}