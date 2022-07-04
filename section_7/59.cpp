#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector<int> test_scores{100, 95, 99, 87, 88};
    // cout << "Score at index 0: " << test_scores.at(0) << endl;
    // cout << "Score at index 1: " << test_scores.at(1) << endl;
    // cout << "Score at index 2: " << test_scores.at(2) << endl;
    // cout << "Score at index 3: " << test_scores.at(3) << endl;
    // cout << "Score at index 4: " << test_scores.at(4) << endl;

    // cout << "Enter 5 test scores: ";
    // cin >> test_scores.at(0);
    // cin >> test_scores.at(1);
    // cin >> test_scores.at(2);
    // cin >> test_scores.at(3);
    // cin >> test_scores.at(4);

    // cout << "Score at index 0: " << test_scores.at(0) << endl;
    // cout << "Score at index 1: " << test_scores.at(1) << endl;
    // cout << "Score at index 2: " << test_scores.at(2) << endl;
    // cout << "Score at index 3: " << test_scores.at(3) << endl;
    // cout << "Score at index 4: " << test_scores.at(4) << endl;

    // test_scores.push_back(80);
    // test_scores.push_back(90);

    // cout << "Score at index 5: " << test_scores.at(5) << endl;
    // cout << "Score at index 6: " << test_scores.at(6) << endl;

    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    vector<int> test_scores{100, 98, 89};
    cout << "\nTest scores using array syntax:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nTest scores using vector syntax:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

    return 0;
}