#include <iostream>

using namespace std;

int main()
{
    cout << "Obie's Carpet Cleaning Service" << endl
         << endl;
    const double COST_PER_ROOM{32.50};
    const double TAX_RATE{0.06};
    const int ESTIMATE_EXPIRY{30};

    cout << "Charges $" << COST_PER_ROOM << " per room" << endl;
    cout << "Sales tax rate is " << TAX_RATE * 100 << "%" << endl;
    cout << "Estimates are valid for 30 days" << endl;

    cout << "--------------------------------" << endl;
    cout << "Enter the number of rooms you would like cleaned: ";
    int number_of_rooms{0};
    cin >> number_of_rooms;
    cout << "Estimate for carpet cleaning service:" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << COST_PER_ROOM << endl;
    int cost_of_rooms = COST_PER_ROOM * number_of_rooms;
    cout << "Cost: $" << cost_of_rooms << endl;
    cout << "Tax: $" << TAX_RATE * cost_of_rooms << endl;
    cout << "--------------------------------" << endl;
    double cost_with_tax = (cost_of_rooms * TAX_RATE) + cost_of_rooms;
    cout << "Total estimate: $" << cost_with_tax << endl;
    cout << "This estimate is valid for " << ESTIMATE_EXPIRY << " days" << endl;
}