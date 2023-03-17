#include <iostream>
using namespace std;

class Transportation {
public:
    virtual float fare() = 0;
};

class BTS : public Transportation {
private:
    float station;
    float farePerKm;
public:
    BTS() {
        this->station = 0;
        this->farePerKm = 15;
    }

    void setStation(float station) {
        this->station = station;
    }

    float fare() {
        return this->farePerKm += this->station * 5;
    }
};

int main()
{
    int tc;
    cin >> tc;
    if (tc == 1) {
        int station;
        cin >> station;
        BTS bts;
        bts.setStation(station);
        cout << "BTS fare: "
             << bts.fare() << endl;
    } else if(tc == 2) {
        int station;
        cin >> station;
        BTS bts;
        bts.setStation(station);
        Transportation *transport = &bts;
        cout << "Transporataion fare: "
             << transport->fare() << endl;
    }
}