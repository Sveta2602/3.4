// Лаб 3.4.cpp 
// <Яшиної Світлани>
// Лабораторна робота №3.4
// Варіант 24

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; //вхідний аргумент
	double y; //вхідний аргумент
	double R; //вхідний аргумент

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if ( y >= 0 && y <= sqrt(R * R - x * x)||
		( y <= x && x <= 0 && x >=-R && y >= -R ))

		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	cin.get();
	return 0;
}






