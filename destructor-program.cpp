/*
when does a destructor get called?

A destructor is called when 
1) A program has finished execution.
2) When the scope (the {} parathesis) containing local variable ends.
*/


#include<iostream>

using namespace std;

class HelloWorld
{
    public:
    //contructor
    HelloWorld(){
        cout<<"Constructor is called"<<endl;
    }

    //destructor
    ~HelloWorld(){
        cout<<"Destructor is Called"<<endl;
    }

    //member function
    void display(){
        cout<<"Hello World from member function"<<endl;
    }

};

int main()
{
    HelloWorld obj; //object Created
    obj.display();

    return 0;
}