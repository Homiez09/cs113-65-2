#include <iostream>
using namespace std;

class Transportation {
public:
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

        float fare() override {
            return this->farePerKm += this->distance * 2;
        }
};

class BmtaBus : public Transportation {
private:
    float farePerKm;
public:
    BmtaBus() {
        this->farePerKm = 6.5;
    }

    float fare() override {
        return this->farePerKm;
    }
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

    float fare() override {
        return this->farePerKm += this->station * 5;
    }
};

class Passenger {
private:
    double totalFare;
public:
    Passenger() {
        this->totalFare = 0;
    }
    
    double getTotalFare() {
        return this->totalFare;
    }

    void addTransportation(Transportation &transportation) {
        this->totalFare += transportation.fare();
    }
}; 

int main(void) {
    Passenger passenger;
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A') {
            Taxi *taxi = new Taxi();
            double distance;
            cin >> distance;
            taxi->setDistance(distance);
            passenger.addTransportation(*taxi);
        } else if (transportType == 'B') {
            BmtaBus *bus = new BmtaBus();
            passenger.addTransportation(*bus);
        } else if (transportType == 'C') {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            bts->setStation(station);
            passenger.addTransportation(*bts);
        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}