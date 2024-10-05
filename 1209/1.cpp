#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
    string name;
    string color;
    int age;

public:
    Pet(string petName, string petColor, int petAge) : name(petName), color(petColor), age(petAge) {}
    virtual void displayInfo() const {
        cout << "���: " << name << ", ����: " << color << ", �������: " << age << " ���" << endl;
    }
};

//Dog
class Dog : public Pet {
private:
    string breed;

public:
    Dog(string dogName, string dogColor, int dogAge, string dogBreed) : Pet(dogName, dogColor, dogAge), breed(dogBreed) {}

    void displayInfo() const override {
        cout << "������ - ";
        Pet::displayInfo();
        cout << "������: " << breed << endl;
    }
};

//Cat
class Cat : public Pet {
private:
    bool isIndoor;

public:
    Cat(string catName, string catColor, int catAge, bool catIsIndoor) : Pet(catName, catColor, catAge), isIndoor(catIsIndoor) {}

    void displayInfo() const override {
        cout << "����� - ";
        Pet::displayInfo();
        cout << (isIndoor ? "�������� �����" : "������� �����") << endl;
    }
};

//Parrot
class Parrot : public Pet {
private:
    string species;

public:
    Parrot(string parrotName, string parrotColor, int parrotAge, string parrotSpecies) : Pet(parrotName, parrotColor, parrotAge), species(parrotSpecies) {}

    void displayInfo() const override {
        cout << "������� - ";
        Pet::displayInfo();
        cout << "���: " << species << endl;
    }
};

int main() {
    Dog dog("�����", "����������", 5, "�������");
    Cat cat("�����", "������", 3, true);
    Parrot parrot("����", "�������", 2, "���");

    dog.displayInfo();
    cat.displayInfo();
    parrot.displayInfo();

    return 0;
}
