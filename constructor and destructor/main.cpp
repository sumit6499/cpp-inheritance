#include <iostream>
using namespace std;

class Base
{
private:
    int value;

public:
    Base();
    Base(int val);
    ~Base();
};

class Derived : public Base
{
private:
    int doubled_value{};

public:
    Derived();
    Derived(int val);
    ~Derived();
};
Base::Base()
    : value{0}
{
    cout << "Base no-arg constructor called " << endl;
}
Base::Base(int val)
    : value{val}
{
    cout << "Base class 1-arg constructor called" << endl;
}
Base::~Base()
{
    cout << "Base class destructor called" << endl;
}

Derived::Derived()
    : doubled_value{0}
{
    cout << "Dervied class no-arg constructor called " << endl;
}

Derived::Derived(int val)
    : doubled_value{val * 2}
{
    cout << "Derived class 1-arg constructor called" << endl;
}
Derived::~Derived()
{
    cout << "Derived class destructor called" << endl;
}
int main()
{
    // Base parent{20};
    Derived child{100};
}