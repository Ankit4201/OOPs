//Classes and objects

//syntax for class
/*
 class class_name
 {

 }
*/
#include<iostream>

using namespace std;

class car
{
   char color[10];
   

   public:
   int speed;
   void getdata(int distance, int fuel)
   {
      cout<< "The car has covered "<< distance<< " km and has consumed "<< fuel<< "L fuel\n";
   }

   void mileage(float distance, float fuel);

   void carspeed()
   {
       cout<<"The car speed is "<< speed <<"\n";
   }

} audi;

void car :: mileage(float d, float f)
{
    float carmileage = d/f;
    cout << "The car mileage is " << carmileage<< endl;
}

int main()
{
    car swift; // swift is a object
    // swift.getdata(130, 7);  //swift obj can acess the public contents of the class.
    // audi.getdata(150, 90);
    // swift.mileage(130, 7);
    swift.speed = 90;
    swift.carspeed();
    return 0;
}