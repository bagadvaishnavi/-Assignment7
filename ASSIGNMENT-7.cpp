#include <iostream>
using namespace std;

// 1. FUNCTION OVERLOADING
class Calculator
{
public:
    // Adds two integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Adds three integers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // Adds two floating-point numbers
    float add(float a, float b)
    {
        return a + b;
    }
};

// 2. OPERATOR OVERLOADING
class Complex
{
public:
    int real;
    int imag;

    Complex()
    {
        real = 0;
        imag = 0;
    }

    void input()
    {
        cin >> real >> imag;
    }

    // Overload the + operator
    Complex operator+(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

// 3. RUNTIME POLYMORPHISM
class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog says: Bhow Bhow" << endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat says: Meow Meow" << endl;
    }
};

int main()
{
    // FUNCTION OVERLOADING
    cout << "===== FUNCTION OVERLOADING =====" << endl;

    Calculator calc;

    cout << "add(2, 3) = "
         << calc.add(2, 3) << endl;

    cout << "add(1, 2, 3) = "
         << calc.add(1, 2, 3) << endl;

    cout << "add(1.5, 2.5) = "
         << calc.add(1.5f, 2.5f) << endl;


    // OPERATOR OVERLOADING
    cout << "\n===== OPERATOR OVERLOADING =====" << endl;

    Complex c1, c2, c3;

    cout << "Enter real and imaginary parts of first number: ";
    c1.input();

    cout << "Enter real and imaginary parts of second number: ";
    c2.input();

    c3 = c1 + c2;

    cout << "Sum = ";
    c3.display();


    // RUNTIME POLYMORPHISM
    cout << "\n===== VIRTUAL FUNCTIONS =====" << endl;

    Animal *ptr;

    Dog d;
    Cat c;

    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();

    cout << "\nProgram executed successfully." << endl;

    return 0;
}
