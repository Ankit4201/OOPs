//default constructor

#include<iostream>

using namespace std;

class constructorDemo{
    public:
    constructorDemo(){
        cout<<"This is from a Constructor";
    }
};

int main()
{
    constructorDemo obj;
    return 0;
}