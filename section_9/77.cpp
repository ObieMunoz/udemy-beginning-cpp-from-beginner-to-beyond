#include <iostream>

using namespace std;

int main()
{
	const int min{10};
	const int max{100};
	int input{0};
	cout << "Please enter a number between " << min << " and " << max << " : ";
	cin >> input;
	
	if (input >= min) 
	{
		cout << "\n=============== If statement 1 ===============" << endl;
		cout << input << " is greater than or equal to " << min << endl;
		int diff {input - min};
		cout << input << " is " << diff << " greater than " << min << endl;
	}	
	
	if (input <= max)
	{
		cout << "\n=============== If statement 2 ===============" << endl;
		cout << input << " is less than or equal to " << min << endl;
		int diff {max - input};
		cout << input << " is " << diff << " less than " << min << endl;
	}
	
	if (input >= min && input <= max)
	{
		cout << "\n=============== If statement 3 ===============" << endl;
		cout << input << " is within the bounds of " << min << " and " << max << endl;
		cout << "This means statements 1 and 2 must also have been displayed." << endl;
	}
	
	if (input == min || input == max)
	{
		cout << "\n=============== If statement 4 ===============" << endl;
		cout << input << " is on a boundary!" << endl;
		cout << "This means statements 1, 2, and 3 must also have been displayed." << endl;
	}
	cout << endl;
	return 0;
}
