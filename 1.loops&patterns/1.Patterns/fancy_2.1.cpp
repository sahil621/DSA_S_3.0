#include <iostream>
using namespace std;
int main(){

    int n; // for n number of rows and columns depending on user input  x
    cin>>n;

    // Fancy Pattern 2.1
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++) //here

        {
            cout<<i+1;
            if (j!= i+1-1)   // ' i ' comes from inner loop -1
            // we can put ' < ' sign to rather then ' != '
            {
                cout<<"*";
            }
            

        }
        
        cout<<endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++) //here
        {
            cout<<n-row;
            if (col != n-row-1) // ' n -row-1 ' comes from inner loop -1
            // we can put ' < ' sign to rather then ' != '
            {
                cout<<"*";
            }            
        }
        cout<<endl;
    }
    



    // Different approach and pattern


    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout<< n-i;
    //         if(j!= n - i - 1)
    //         {
    //              cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    
}