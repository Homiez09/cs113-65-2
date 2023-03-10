#include <iostream>
#include <cmath>
#include <string>

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
        string timeStr;
        timeStr += (this->hour > 9) ? to_string(this->hour) + ":" : "0" + to_string(this->hour) + ":";
        timeStr += (this->minute > 9) ? to_string(this->minute) + ":" : "0" + to_string(this->minute) + ":";
        timeStr += (this->second > 9) ? to_string(this->second) : "0" + to_string(this->second);
        return timeStr;
    }
};


int main()
{
    Time x(12,45,12);
    cout << x.toString() << endl; 
}
