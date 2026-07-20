#include <iostream>
using namespace std;
int main(){

    // Numeric Palindrome Pattern

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
   
        for (int j = 0; j < n-(i+1); j++)
        {
            cout<<"  ";
        }
        for (int row = 0; row < i+1; row++)
        {
            cout<<row+1<<" ";
        }
        for(int row = i; row>=1; row--)  // reverse counting
            {
                cout<<row<<" ";
        
            }
        
        cout<<endl;
    }


    








}