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

	dollars = cents / 100;
	cents -= dollars * 100;
	
	quarters = cents / 25;
	cents -= quarters * 25;
	
	dimes = cents / 10;
	cents -= dimes * 10;
	
	nickels = cents / 5;
	cents -= nickels * 5;
	
	pennies = cents;
	cout << "You can provide change for this as follows : " << endl;
	cout << "Dollars: " << dollars << endl;
	cout << "Quarters: " << quarters << endl;
	cout << "Dimes: " << dimes << endl;
	cout << "Nickels: " << nickels << endl;
	cout << "Pennies: " << pennies << endl;
	return 0;
}
