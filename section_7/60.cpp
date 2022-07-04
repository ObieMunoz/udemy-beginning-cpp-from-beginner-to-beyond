#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1;
    vector<int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Vector1 at index 0: " << vector1.at(0) << endl;
    cout << "Vector1 at index 1: " << vector1.at(1) << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Vector2 at index 0: " << vector2.at(0) << endl;
    cout << "Vector2 at index 1: " << vector2.at(1) << endl;

    vector<vector<int>> vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    cout << "Vector2d at index 0: " << vector2d.at(0).at(1) << endl;
    cout << "Vector2d at index 1: " << vector2d.at(1).at(0) << endl;
    return 0;
}