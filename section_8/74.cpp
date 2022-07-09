#include <iostream>

using namespace std;

int main()
{
	// provide change for the user based on an amount in cents.
	// dollars, quarters, dimes, nickels, pennies
	
	int cents{0};
	cout << "Enter an amount in cents : ";
	cin >> cents;
	
	int dollars{0};
	int quarters{0};
	int dimes{0};
	int nickels{0};
	int pennies{0};
	if (cents >= 100) 
	{
		dollars = cents / 100;
		cents -= dollars * 100;
	}
	if (cents >= 25) 
	{
		quarters = cents / 25;
		cents -= quarters * 25;
	}
	if (cents >= 10)
	{
		dimes = cents / 10;
		cents -= dimes * 10;
	}
	if (cents >= 5)
	{
		nickels = cents / 5;
		cents -= nickels * 5;
	}
	if (cents >= 1)
	{
		pennies = cents;
	}
	cout << "You can provide change for this as follows : " << endl;
	cout << "Dollars: " << dollars << endl;
	cout << "Quarters: " << quarters << endl;
	cout << "Dimes: " << dimes << endl;
	cout << "Nickels: " << nickels << endl;
	cout << "Pennies: " << pennies << endl;
	return 0;
}
