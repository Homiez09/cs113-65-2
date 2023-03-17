#include <iostream>
using namespace std;

class Transportation {
    public :
        virtual float fare() = 0;
};

class Taxi : public Transportation {
    private:
        float distance;
        float farePerKm;
    public:
        Taxi() {
            this->distance = 0;
            this->farePerKm = 35;
        }

        void setDistance(double distance) {
            this->distance = distance;
        }

        float fare() {
            return this->farePerKm += this->distance * 2;
        }
};


int main()
{
    int tc;
    cin >> tc;
    if (tc == 1) {
        double distance;
        cin >> distance;
        Taxi taxi;
        taxi.setDistance(distance);
        cout << "Taxi fare: "
             << taxi.fare() << endl;
    } else if(tc == 2) {
        double distance;
        cin >> distance;
        Taxi taxi;
        taxi.setDistance(distance);
        Transportation *transport = &taxi;
        cout << "Transporataion fare: "
             << transport->fare() << endl;
    }
}