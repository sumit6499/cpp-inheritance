#include <iostream>
using namespace std;

class Parent
{
public:
    int a{0};
    void display() { cout << a << "," << b << "," << c << endl; }

protected:
    int b{0};

private:
    int c{0};
};

class Child : public Parent
{
    // Now relation in derived class

    // variable a wil be public
    // variable b will be protected
    // variable c not have access in child class

public:
    void access_base_member()
    {
        a = 100; // ok
        b = 200; // ok
        // c=300;  //compiler error (Not accessible)
    }
};

int main()
{
    cout << "== Base Member access from base object ======" << endl;
    Parent parent;
    parent.a = 100; // public member
    // parent.b = 200;      //protected member
    // parent.c = 300;      //private member
    parent.display();

    cout << "== Derived Member access from derived object ======" << endl;
    Child child;
    child.access_base_member();
    child.display();
    // child.child_display();
}
