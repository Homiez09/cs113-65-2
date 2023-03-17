#include <iostream>
using namespace std;

class Transportation {
public:
    virtual float fare() = 0;
};

class BmtaBus : public Transportation {
private:
    float farePerKm;
public:
    BmtaBus() {
        this->farePerKm = 6.5;
    }

    float fare() {
        return this->farePerKm;
    }
};

int main()
{
    int tc;
    cin >> tc;
    if (tc == 1) {
        BmtaBus bus;
        cout << "BMTA Bus fare: "
             << bus.fare() << endl;
    } else if(tc == 2) {
        BmtaBus bus;
        Transportation *transport = &bus;
        cout << "Transporataion fare: "
             << transport->fare() << endl;
    }
}