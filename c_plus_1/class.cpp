#include <iostream>

using namespace std;

class user {
public:
    int id;
    string name;
    int balance;

    void Deposit(int amount) {
        balance += amount;
    }

    void Withdraw(int amount) {
        balance -= amount;
    }
};

int main() {
    user phum;
    phum.id = 1;
    phum.name = "Phum";
    phum.balance = 0;
    phum.Deposit(1000);
    printf("User %s balance %d", phum.name.c_str(), phum.balance);

}