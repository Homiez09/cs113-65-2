#include <iostream>

using namespace std;

int main() {
    int number;
    string name;
    // cin : Console Input
    cin >> number;
    cin >> name;

    cout << "Hello, " << name << "!" << endl;

    // cout : Console Output
    // << : Stream Insertion Operator
    cout << "Hello, World!" << 100 << endl;

    return 0;
}