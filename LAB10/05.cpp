#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;
public:
    Time (int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
        if (hour >= 24) {
            this->hour = this->hour % 24;
        }
    }

    Time (int duration) {
        this->hour = duration / 3600;
        this->minute = (duration % 3600) / 60;
        this->second = duration % 60;
        if (hour >= 24) {
            this->hour = this->hour % 24;
        }
    }

    int getHour() { return this->hour; }

    int getMinute() { return this->minute; }

    int getSecond() { return this->second; }

    int getDuration () {
        return (this->hour*3600) + (this->minute*60) + this->second;
    }

    Time add(Time other) {
        return Time(getDuration() + other.getDuration());
    }

    int subtract(Time other) {
        int duration = getDuration() - other.getDuration();
        return (duration >= 0) ? duration : 86400 + duration;
    }

    int equals(Time other) {
        return (getDuration() == other.getDuration()) ? 1 : 0;
    }

    string toString() {
        stringstream ss;
        // 00:00:00
        ss  << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second;  
        return ss.str();
    }
};

int main(void) {
    Time x(87000), y(3661), z(2,2,2);
    Time b(1,1,1), a(2,2,2);
    cout << x.getHour() << x.getMinute() << x.getSecond() << endl;
    cout << y.getHour() << y.getMinute() << y.getSecond() << endl;
    cout << z.getHour() << z.getMinute() << z.getSecond() << endl;
    cout << a.subtract(b) << endl;
    cout << b.subtract(a) << endl;
    cout << x.toString() << endl;
    return 0;
}