#include <iostream>
using namespace std;

// สร้างคลาส Animal (คลาสแม่)
class Animal {
public:
    virtual void makeSound() {
        cout << "The animal makes a sound." << endl;
    }
};

// สร้างคลาส Dog ที่สืบทอดคุณสมบัติจากคลาส Animal
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "The dog barks." << endl;
    }
};

// สร้างคลาส Cat ที่สืบทอดคุณสมบัติจากคลาส Animal
class Cat : public Animal {
public:
    void makeSound() {
        cout << "The cat meows." << endl;
    }
};

// ฟังก์ชันที่สามารถใช้กับคลาสที่สืบทอดมาจากคลาส Animal
void animalSound(Animal* animal) {
    animal->makeSound();
}

int main() {
    Dog dog;
    Cat cat;

    // ใช้ความหลากหลายของรูปแบบ (Polymorphism)
    animalSound(&dog); // Output: The dog barks.
    animalSound(&cat); // Output: The cat meows.

    return 0;
}
