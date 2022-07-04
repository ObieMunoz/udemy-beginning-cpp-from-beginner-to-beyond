#include <iostream>

int main()
{
    int favorite_number;
    std::cout << "Please enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Awesome! " << favorite_number << " is my favorite number also." << std::endl;
    return 0;
}