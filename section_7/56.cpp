#include <iostream>

using namespace std;

int main()
{
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    double hi_temps[]{98.1, 89.8, 77.5, 81.6};

    cout << "The first high temperature is: " << hi_temps[0] << endl;
    hi_temps[0] = 100.7;
    cout << "The first high temperature is: " << hi_temps[0] << endl;

    int test_scores[5]{10, 20, 30, 40, 50};
    cout << "Score at index 0: " << test_scores[0] << endl;
    cout << "Score at index 1: " << test_scores[1] << endl;
    cout << "Score at index 2: " << test_scores[2] << endl;
    cout << "Score at index 3: " << test_scores[3] << endl;
    cout << "Score at index 4: " << test_scores[4] << endl;

    cout << "Enter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "Score at index 0: " << test_scores[0] << endl;
    cout << "Score at index 1: " << test_scores[1] << endl;
    cout << "Score at index 2: " << test_scores[2] << endl;
    cout << "Score at index 3: " << test_scores[3] << endl;
    cout << "Score at index 4: " << test_scores[4] << endl;

    cout << "Notice what the value of the array name is : " << test_scores << endl; // name is the memory location
}