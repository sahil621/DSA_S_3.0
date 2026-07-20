#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout<<"* ";
        }
        //spaces
        for (int k = 0; k < ((2*n) - 2 -(2*i)); k++)
        {
            cout<<"  ";
        }
        //stars
        for (int l = 0; l < i+1; l++)
        {
            cout<<"* ";
        }
        
        
        
        cout<<endl;
    }
    
    for (int p = 0; p < n; p++)
    {
        for (int e = 0; e < n-p; e++)
        {
            cout<<"* ";
        }
        //spaces
        for (int q = 0; q < 2*p; q++)
        {
            cout<<"  ";
        }
        // //stars
        for (int r = 0; r < n-p; r++)
        {
            cout<<"* ";
        }
        
        
        
        cout<<endl;
    }
    





}