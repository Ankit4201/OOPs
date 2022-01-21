//Polymorphism part 2.
//This is a example of function overriding and runtime polymorphism.

#include<iostream>

using namespace std;

class A{
    public:
        void display()
        {
            cout<<"This is a super/parent class function"<<endl;
        }

};

class B: public A{
    public:
        void display()
        {
            cout<<"This is base/child class function"<<endl;
        }
};

int main()
{
    A obj;
    obj.display();

    B obj2;
    obj2.display();

    return 0;
}