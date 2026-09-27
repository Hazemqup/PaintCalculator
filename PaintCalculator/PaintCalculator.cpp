// PaintCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int calculatePaint(float surfaceArea, int children, int days)
{
	const double P = 0.004;
	const double W = 1.2;

	double amount = ((P * children * surfaceArea) + W)
		* (1.0 + 1.0 / days);
	
	int gallons = ceil(amount);

	if (amount == floor(amount))
	{
		gallons = (int)amount;
	}

	return gallons;
}

int main()
{
	float surfaceArea;
	int children;
	int days;

	cout << "Welcome to the Paint Calculator!" << endl;

	cout << "Please enter the surface area to be painted: ";
	cin >> surfaceArea;

	cout << "Please enter the number of children in the room: ";
	cin >> children;

	cout << "Please enter the number of days required: ";
	cin >> days;

	int gallons = calculatePaint(surfaceArea, children, days);

	cout << endl;
	cout << "Surface area: " << surfaceArea << endl;
	cout << "Number of children: " << children << endl;
	cout << "Number of days: " << days << endl;
	cout << "Paint required: " << gallons << " gallons" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
