#include <iostream>
using namespace std;
int main(){

    
    // solid diamond pattern (both full and inverted pyramid pattern together)


    // full pyramid pattern
    int n;
    cin>>n;
    // for(int row = 0; row<n; row+=1)
    // {
    //     // spaces
    //     for (int i = 0; i <n-row-1; i+=1)
    //     {
    //         cout<<" ";
    //     }
    // for (int j = 0; j< row+ 1 ; j++)
    //     {
    //         cout<<"* ";

    //     }
    //     cout<<endl;
    // }
    


    // inverted full pyramid pattern
    // for (int row = 0; row < n; row++)
    // {   // spaces
    //     for (int i = 0; i < row; i++)
    //     {
    //         cout <<" ";
    //     }
    //     // stars
    //     for (int j = 0; j < n-row; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }



    // Hollow Full Pyramid Pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<"  ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            if (k==0 || k==2*i || i==n-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        
        cout<<endl;
    }
    
    

    


}