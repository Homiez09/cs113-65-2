#include <iostream>

using namespace std;

class Animal {
private:
    string name;
    int age;
    string owner;
public:
    Animal(string, string, int);
    Animal();
    string getName() { return this->name; };
    int getAge() { return this->age; };
    string getOwner(){ return this->owner; };
    void setName(string name) ;
    void setAge(int age);
    void setOwner(string owner);
};

class Dog: public Animal {
private:
    string breed;
public:
    Dog(string, string, int, string);
    string getBreed() { return this->breed; };
};

Animal::Animal(string name, string owner, int age) {
    this->name = name;
    this->owner = owner;
    this->age = age;
}

Animal::Animal() {
    this->name = "none";
    this->owner = "none";
    this->age = 0;
}

Dog::Dog(string name, string owner, int age, string breed) : Animal(name, owner, age) {
    this->breed = breed;
}

int main(void) {
    //Animal dog("dog", "John", 3);
    Dog dog("dog", "John", 3, "Poodle");
    cout << "Name: " << dog.getName() << endl;
    cout << "Age: " << dog.getAge() << endl;
    cout << "Owner: " << dog.getOwner() << endl;
    cout << "Breed: " << dog.getBreed() << endl;
    return 0;
}