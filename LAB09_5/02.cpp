#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
    char name[20];
    float salary, extra = 0;
    cin >> name;
    cin >> salary;
    for (int i = 0; i < 12; i++) {
        float temp;
        cin >> temp;
        extra += temp * 0.15;
    }
    char output[100];
    float totalSalary = (salary * 12) + extra;
    sprintf(output, "%s %.2f", name, totalSalary);
    cout << output << endl;
    return 0;
}