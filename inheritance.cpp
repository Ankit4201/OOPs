// Single level inheritance

#include<iostream>

using namespace std;

class Teacher{
    public: 
    Teacher()
    {
        cout<<"Hey I am a Teacher"<<endl;
    } 
    string collegeName = "SRM University";
};

class MathTeacher: public Teacher{
    public:
    MathTeacher(){
        cout<<"I am a Math Teacher"<<endl;
    }
};

int main()
{
   MathTeacher obj;
   cout<<"College Name is: "<<obj.collegeName<<endl;
   return 0;
}