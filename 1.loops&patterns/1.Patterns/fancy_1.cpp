#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ((2*n)-i-2); j++)
        {
            cout<<"*";
        }
        for (int row = 0; row < i+1; row++)
        {
            cout<<i+1;
            if (row != i)
            {
                cout<<"*";
            }
            
        }
        for (int j = 0; j < ((2*n)-i-2); j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    






}