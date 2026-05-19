#include <iostream>
using namespace std;

class seseorang
{
public:
    //virtual void pesan() = 0;
    virtual void perkenalan()
    {
        cout << "Saya adalah seseorang." << endl;
    }
};

class joko : public seseorang
{
    
};