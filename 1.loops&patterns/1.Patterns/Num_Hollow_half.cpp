#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    // Numeric Half Hollow Pyramid Pattern

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         if (j==0 || i==1 || j==i || i==n-1)
    //         {
    //             cout<<j+1<<" ";
    //         }
            
    //         else
    //         {
    //             cout<<"  ";
    //         }
    //     }
    //    cout<<endl; 
    // }


    // Inverted Numeric Half Hollow Pyramid Pattern
    
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (i==0 ) // here ' n-i-1 ' comes from inner loop -1
            {
                cout<<j+1<<" ";
            }
            else if (j==0 )
            {
                cout<<i+1<<" ";
            }
            else if (j==n-i-1 ){
                cout<<5<<" ";
            }
            else{
                cout<<"  ";
            }

        }
        cout<<endl;
    }
    
    







}