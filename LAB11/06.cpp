#include <iostream>
using namespace std;

class Animal
{
protected:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

class Bird : public Animal {
    public:
        Bird(int, int, int);
        void fly(int);
        void sing();
};

class Pet {
    protected:
        string name;
    public:
        Pet(string);
        string getName();
        void setName(string);
};

class OwnedBird : public Bird, public Pet {
    public:
        OwnedBird(string, int, int, int);
};

Animal::Animal(int happiness, int energy, int fullness) {
    this->happiness = happiness;
    this->energy = energy;
    this->fullness = fullness;
}

void Animal::limitStat() {
    if (this->happiness > this->MAX_HAPPINESS) {
        this->happiness = this->MAX_HAPPINESS;
    }
    if (this->energy > this->MAX_ENERGY) {
        this->energy = this->MAX_ENERGY;
    }
    if (this->fullness > this->MAX_FULLNESS) {
        this->fullness = this->MAX_FULLNESS;
    }
    if (this->happiness < 0) {
        this->happiness = 0;
    }
    if (this->energy < 0) {
        this->energy = 0;
    }
    if (this->fullness < 0) {
        this->fullness = 0;
    }
}

int Animal::getHappiness() {
    this->limitStat();
    return this->happiness;
}

int Animal::getEnergy() {
    this->limitStat();
    return this->energy;
}

int Animal::getFullness() {
    this->limitStat();
    return this->fullness;
}

void Animal::eat(int food) {
    if (food < 0) return;
    this->fullness += food;
    (this->fullness > MAX_FULLNESS) ? this->happiness -= 10 : 0;
}

void Animal::play(int hour) {
    if (this->energy <= 0 || this->fullness <= 0) return;
    for (int i = 0; i < hour; i++) {
        this->happiness += 5;
        this->energy -= 10;
        this->fullness -= 20;
    }
}

void Animal::sleep(int hour) {
    if (hour <= 0 || this->energy >= 100) return;
    this->energy += 10*hour;
    this->fullness -= 10*hour;
}

Bird::Bird(int happiness, int energy, int fullness) : Animal(happiness, energy, fullness) {}

void Bird::fly(int hour) {
    if (hour <= 0) return;
    this->energy -= 5*hour;
}

void Bird::sing() {
    this->happiness += 5;
}

Pet::Pet(string name) {
    this->name = name;
}

void Pet::setName(string name) {
    this->name = name;
}

string Pet::getName() {
    return this->name;
}

OwnedBird::OwnedBird(string name, int happiness, int energy, int fullness) : Bird(happiness, energy, fullness), Pet(name){}

int main(void) {
    char action;
    int hour;
    int happiness, energy, fullness;
    cin >> happiness >> energy >> fullness;
    OwnedBird animal("Dobby", happiness, energy, fullness);
    while (1) {
        cin >> action;
        if (action == 'q') break;
        cin >> hour;
        switch (action) {
            case 'e':
                animal.eat(hour);
                break;
            case 'p':
                animal.play(hour);
                break;
            case 's':
                animal.sleep(hour);
                break;
            case 'f':
                animal.fly(hour);
                break;
            case 'i':
                for (int i = 0; i < hour; i++)
                    animal.sing();
                break;
            case 'n':
                if (hour < 5)
                    animal.setName("Debby");
                else
                    animal.setName("Shogun");
                break;
        }
    }
}