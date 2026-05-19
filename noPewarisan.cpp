#include <iostream>
using namespace std;

class baseClass final
{
public:
    virtual void perkenalan()
    {
        cout << "Hallo saya function dari base Class.";
    }
};

class baseClass1
{
public:
    virtual void perkenalan()
    {
        cout << "Hallo saya function dari base Class.";
    }
};

class derivedClass : public baseClass1
{
public:
    void perkenalan()
    {
        cout << "Hallo saya function dari derived Class.";
    }
};