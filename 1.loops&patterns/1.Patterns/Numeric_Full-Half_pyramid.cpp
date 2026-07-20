#include<iostream>
using namespace std;
int main(){

    // // Numeric Full Diamond Pattern

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        // spaces

        int start = i+1;
        for (int col = 0; col < (n-(i+1)); col++)
        {
            cout<<"  ";
            
        }

        // numbers 
        for (int col_1 = 0; col_1 < i+1; col_1++)
        {
            cout<<start<<" ";
            start++;
        }
        // cout<<"C "<<start; // for checking the value of start after first loop it will show one more cause we are incrementing before exitiing the loop

        // reverse counting
        for (int col_2= 0; col_2 < i; col_2++)
        {
            cout<<start-2<<" ";
            start--;
        }
        
        
        
        cout<<endl;
    }



    // Numeric hollow pyramid pattern

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int row_1 = 0; row_1 < n-i-1; row_1++)
        {
            cout<<"  ";
        }


        // pyramid
        int start = 1;
        for (int row_2 = 0; row_2 < 2*i+1; row_2++)
        {
            // hollow condition first row and last row
            
            if (i == 0 || i == n-1)
            {
                if(row_2%2 == 0){
                    cout<<start<<" ";
                    start ++;
                }
                else{
                    cout<<"  ";
                }
            }
            // hollow condition for middle rows
            else{
                if(row_2 == 0){
                    cout<<1;
                }
                else if(row_2 == 2*i){
                    cout<<i+1;
                }
                else{
                    cout<<"  ";
                }
            }

            
        }
        
        cout<<endl;
    }
    
    


}