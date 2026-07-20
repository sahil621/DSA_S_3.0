#include<iostream>
using namespace std;

bool num(int n){
    if (n%2==0)
    {
        return true;
    }
    else{
        return false;
    }    
}

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    bool check = num(n);
    if (check == true)
    {
        cout<<"Number is Even ";
    }
    else{
        cout<<"Number is odd ";
    }

}

