#include <iostream>

using namespace std;

int main()
{
    // int num1{200};
    // int num2{100};

    // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    // int result{0};

    // result = num1 + num2;
    // cout << num1 << " + " << num2 << " = " << result << endl;
    // result = num1 - num2;
    // cout << num1 << " - " << num2 << " = " << result << endl;
    // result = num1 * num2;
    // cout << num1 << " * " << num2 << " = " << result << endl;
    // result = num1 / num2;
    // cout << num1 << " / " << num2 << " = " << result << endl;
    // result = num2 / num1;
    // cout << num2 << " / " << num1 << " = " << result << endl; // Integer division

    // 1.19 Dollars Per Euro
    const double USD_PER_EUR{1.19};
    double euros{0.0};
    double dollars{0.0};

    cout << "Welcome to the EUR to USD converter." << endl;
    cout << "Please enter a value in EUR: ";
    cin >> euros;
    dollars = euros * USD_PER_EUR;
    cout << euros << " euros is equivalent to " << dollars << " dollars." << endl;

    return 0;
}