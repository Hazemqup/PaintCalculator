// PaintCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function to calculate the amount of paint required
int calculatePaint(float surfaceArea, int children, int days)
{
	const double P = 0.004;
	const double W = 1.2;

	double amount = ((P * children * surfaceArea) + W)
		* (1.0 + 1.0 / days);
	
	int gallons = static_cast<int>(ceil(amount));
	//if the amount is a whole number, we need to add 1 to the gallons
	if (amount == floor(amount))
	{
		gallons++;
	}


	return gallons;
}

// Function to calculate the total cost of paint
double calculatePaint(int gallons, double pricePerGallon)
{
	return gallons * pricePerGallon;
}

int main()
{
	const double PRICE_PER_GALLON = 114.50;

	float surfaceArea;
	int children;
	int days;

	cout << "Welcome to the Paint Calculator!" << endl;
	cout << "------------------------------------" << endl;

	cout << "Please enter the surface area to be painted: ";
	cin >> surfaceArea;

	cout << "Please enter the number of children in the room: ";
	cin >> children;

	cout << "Please enter the number of days required: ";
	cin >> days;

	if (!cin || surfaceArea <= 0 || children < 0 || days <= 0)
	{
		cout << "Invalid input. Please enter a positive surface area "
			<< "and number of days, and a non-negative number of children."
			<< endl;
		return 1;
	}

	int gallons = calculatePaint(surfaceArea, children, days);

	double totalCost = calculatePaint(gallons, PRICE_PER_GALLON);

	cout << endl;
	cout << "-------------------------------------" << endl;
	cout << "  PAINT ESTIMATE" << endl;
	cout << "-------------------------------------" << endl;

	
	// Set the output format for floating-point numbers
	cout << "Surface area: " << surfaceArea << endl;
	cout << "Number of children: " << children << endl;
	cout << "Number of days: " << days << endl;

	cout << endl;
	cout << "Paint required: " << gallons << " gallons" << endl;
	cout << "Paint selected: Benjamin Moore Aura Interior Eggshell"
		<< endl;

	// Display prices with two decimal places
	cout << fixed << setprecision(2);

	cout << "Price per gallon: GBP "
		<< PRICE_PER_GALLON << endl;

	cout << "Estimated paint cost: GBP "
		<< totalCost << endl;

	cout << "----------------------------------------" << endl;

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
