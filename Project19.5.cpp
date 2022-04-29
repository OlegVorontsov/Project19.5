#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    virtual void Voice()
    {
        cout << "Звук!" << endl;
    }
};

class Dog : public Animal
{
public:
    void Voice() override
    {
        cout << "Гав!" << endl;
    }
};

class Cat : public Animal
{
public:
    void Voice() override
    {
        cout << "Мяу!" << endl;
    }
};

class Pig : public Animal
{
public:
    void Voice() override
    {
        cout << "Хрю!" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    Dog A, B;
    Cat C, D;
    Pig X;

    int const size = 5;

    Animal* Farm[size]{ &A, &C, &X, &D, &B };

    for (int i = 0; i < size; i++)
    {
        Farm[i]->Voice();
    }

    return 0;
}