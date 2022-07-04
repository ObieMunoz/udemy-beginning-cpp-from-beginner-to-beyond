#include <iostream>

using namespace std;

int main()
{
    const double COST_PER_SMALL_ROOM{25.0};
    const double COST_PER_LARGE_ROOM{35.0};
    const double TAX_RATE{0.06};
    const int EXPIRY_TIME{30};

    cout << "Hello, welcome to Obie's Carpet Cleaning Service" << endl;
    cout << endl;
    int number_of_small_rooms{0};
    cout << "How many small rooms would you like cleaned? ";
    cin >> number_of_small_rooms;
    int number_of_large_rooms{0};
    cout << "How many large rooms would you like cleaned? ";
    cin >> number_of_large_rooms;
    cout << endl;
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: $" << COST_PER_SMALL_ROOM << endl;
    cout << "Price per large room: $" << COST_PER_LARGE_ROOM << endl;
    double total_cost_of_rooms{number_of_small_rooms * COST_PER_SMALL_ROOM + number_of_large_rooms * COST_PER_LARGE_ROOM};
    cout << "Cost : $" << total_cost_of_rooms << endl;
    double total_tax{total_cost_of_rooms * TAX_RATE};
    cout << "Tax: $" << total_tax << endl;
    cout << "================================" << endl;
    cout << "Total estimate: $" << total_cost_of_rooms + total_tax << endl;
    cout << "This estimate is valid for " << EXPIRY_TIME << " days" << endl;
    return 0;
}