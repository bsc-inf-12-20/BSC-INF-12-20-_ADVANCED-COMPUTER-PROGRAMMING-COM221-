#pragma once

#include <string>

using namespace std;

class Person{
    public:
    Person();
    Person(float newWeight, string newFirstName, int newAge);

    Person(float newWeight);

    ~Person();
    //Overload the add operator
    float operator + (const Person& otherPerson);

    bool operator == (const Person& otherPerson) const;

    bool operator != (const Person& otherPerson) const;

    bool operator < (const Person& otherPerson) const;

    bool operator > (const Person& otherPerson) const;

    operator int();

    operator string();

    operator float();
    
    private:
    float mWeight;
    string mFirstName;
    int mAge;
};