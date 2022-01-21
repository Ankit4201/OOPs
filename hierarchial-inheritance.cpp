
//class B and C inherits from class A

#include<iostream>

using namespace std;

class A{
    public:
    A(){
        cout<<"Constructor A is called"<<endl;
    }

};

class B : public A {
    public:
    B(){
        cout<<"Constructor B is called"<<endl;
    }

};

class C : public A{
    public:
    C(){
        cout<<"Constructor C is called"<<endl;
    }

};

int main(){
    B obj;
    C object;
    return 0;
}