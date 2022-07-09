#include <iostream>

using namespace std;

int main()
{
	int lower{10};
	int upper{20};
	int num{0};
	cout << boolalpha;
	
	cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
	cin >> num;
	
	bool outside_bounds{false};
	outside_bounds = (num < lower || num > upper);
	cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << endl;
}
