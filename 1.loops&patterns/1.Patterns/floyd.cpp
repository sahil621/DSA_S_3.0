#include<iostream>
using namespace std;
int main(){

    //   Floyd's Traingle Pattern
    int x;
    cin>>x;

    int count = 1;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<count<<" ";
            count++;
        }
        
        cout<<endl;
    }
    
    
    
}