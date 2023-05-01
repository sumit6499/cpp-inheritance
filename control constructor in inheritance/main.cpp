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
    int doubled_val;

public:
    Derived();
    Derived(int x);
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
    : Base{}, doubled_val{0}
{
    cout << "Derived class no-arg constructor called" << endl;
}
Derived::Derived(int x)
    : Base{x}, doubled_val{x * 2}
{
    cout << "Derived class 1-arg constructor called" << endl;
}

Derived::~Derived()
{
    cout << "derived class destructor called" << endl;
}

int main()
{
    Derived d{100};
}