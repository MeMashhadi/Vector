// Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double x1, y1, z1, x2, y2, z2;
	cout << "Insert vector 1 components (with space as seperator): ";
	cin >> x1 >> y1 >> z1;
	cout << "Insert vector 2 components (with space as seperator): ";
	cin >> x2 >> y2 >> z2;

	cout << "cross of 2 vector is : (" << y1 * z2 - z1 * y2 << " , " << z1 * x2 - z2 * x1 << " , " << x1 * y2 - x2 * y1 << ")" << endl;
	getchar();
	getchar();


    return 0;
}

