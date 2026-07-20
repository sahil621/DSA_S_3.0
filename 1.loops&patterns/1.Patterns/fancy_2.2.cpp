#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num = 1;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i+1; j++)
        {
            if (j==i)
            {
                cout<<num<<" ";
            }
            else{
                cout<<num<<"*";
            }
            num++;
        }
        cout<<endl;
    }

    // cout<<"num "<<num<<endl;
    
    
    // Shrinking phase

    int start = num - n; // calculate the starting number for the last row of the growing phase
    for (int row = 0; row < n; row++)
    {

        int num1 = start; // initialize num1 to the starting number of the current row
        for (int col = 0; col < n-row; col++)
        {

            if(col==n-row-1) // check if it's the last column of the current row
            {
                cout<<num1<<" ";
            }
            else{
                cout<<num1<<"*";
            }
            num1++;
        }
        start = start - (n - row - 1); // update start for next row
        cout<<endl;
    }
    
    





}