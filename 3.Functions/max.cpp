#include<iostream>
using namespace std;


int t_max(int x,int y,int z){
    if (x>y && x>z)
    {
        return x;
    }
    else if (y>z)
    {
        return y;
    }
    else{
        return z;
    }
    

}
int main(){
    int a,b,c;
    cout << "Enter your 3 numbers is ";
    cin>>a>>b>>c;
    int final_max = t_max(a,b,c);
    cout << "Max value is "<<final_max;
}