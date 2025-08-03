#include <iostream>
using namespace std;

class MyClass
{
private:
    int myData; // private. so getter fn reqd.

public:
    int myPublicData; // public. so no getter reqd.

    MyClass();  // constructor
    ~MyClass(); // destructor

    int getMyDataSROP(); // getter using scope resolutio

    int getMyData() // normal getter
    {
        return this->myData;
    }
};

/**
 * constructor variable initialization
 */
MyClass::MyClass()
{
    myData = 10;
    myPublicData = 15;
}

MyClass::~MyClass()
{
}

/**
 * getter using scope resolution operator
 */
int MyClass::getMyDataSROP()
{
    return myData;
}

int main(int argc, char const *argv[])
{
    MyClass *mc = new MyClass();

    cout << mc->myPublicData << "\n";
    cout << mc->getMyData() << "\n";
    cout << mc->getMyDataSROP();

    return 0;
}
