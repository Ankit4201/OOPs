
//  Polymorphism is a feature of oops that allows the object to behave differently in different conditions.
// 1. Compile Time polymorphism - This is also known as static polymorphism.
// 2. Run Time polymorphism - This is also known as dynamic (or late) binding polymorphism.
//This is also a example for function overloading.

// Function overloading is where two or more functions have the same name but different parameters.

//this is the example for compile time polymorphism.

#include<iostream>

using namespace std;

class Add{
    public:
    int sum(int num1, int num2){
        return num1+num2;
    }
     int sum(int num1, int num2, int num3){
        return num1+num2+num3;
    }

};

int main()
{
    Add obj;

    cout<<"Output: "<<obj.sum(10,20)<<endl;
    cout<<"Output: "<<obj.sum(10,20,30)<<endl;  
    return 0;
}