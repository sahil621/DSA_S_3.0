#include<iostream>
using namespace std;

float area(float x)
{
    float num = 0;
    num = 3.14159 * (x * x);
    return num;
}
int main(){
    float n;
    cout<<"Enter the radius of the circle ";
    cin>>n;
    float result = area(n);
    cout<<"Area of the cicle is "<<result<<endl;
}