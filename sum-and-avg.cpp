#include<iostream>

using namespace std;

int main()
{
    int sum,a,b,c;
    float avg;

    cout << "Enter your three numbers" << endl;
    cin >> a >> b>> c;
    
    sum = a + b + c;
    avg = sum / 3;
    cout << "Avg is: " << avg << "\n" ;
    return 0;

}