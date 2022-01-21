
#include<iostream>

using namespace std;

class xyz{
    private:
       char ch = 'A';
       int num = 11;
    public:
       friend class abc;
       

};

class abc{
    public:
    void disp(xyz object){
        cout<<object.ch<<endl;
        cout<<object.num<<endl;
    }
};

int main()
{
    abc obj;
    xyz obj2;
    obj.disp(obj2);
    return 0;
}