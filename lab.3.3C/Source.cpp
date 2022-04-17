#include"Money.h"
#include<iostream>

using namespace std;

int main()
{

	Money a(1, 2), b, c, d, f;
	double dr;

	cout << a++ << endl;
	cout << a-- << endl;
	cout << ++a << endl;
	cout << --a << endl;
	
	Money q(a);
	cout << "number of objects = " << Money::Count() << endl;

	cout << "Input suma :" << endl;
	cin >> a;
	cout << endl;
	cin >> b;
	cout << "suma = " << Add(a, b) << endl;
	cout << endl;


	cout << "Div :" << endl;
	cout << "Div = " << Div(a, b) << endl;

	cout << "drib ="; cin >> dr;
	cout << "DivD :" << endl;
	cout << "DivD = " << DivD(a, dr) << endl;

	cout <<"number of objects = " << Money::Count() << endl;
	return 0;
}