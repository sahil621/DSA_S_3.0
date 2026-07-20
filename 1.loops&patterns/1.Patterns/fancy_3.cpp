#include<iostream>
using namespace std;
int main(){
    
    //Fancy Pattern 3


    int n;
    cin>>n;
    cout<<"* "<<endl;
    for (int i = 0; i < n+1; i++){
        cout<<"* ";

        // Growing phase

        int cond = i <= n/2 ? 2*i : 2*(n-i-1); // condition to determine the number of characters in each row
        for (int j = 0; j <= cond; j++) 
        {
            if(j<=cond/2){
                cout<<j+1<<" ";
            }
            else{
                cout<<cond-j+1<<" "; // to print the numbers in reverse order after reaching the midpoint
            }
            
        }
        if (i==n) // check if it's the last row of the growing phase
        {
         cout<<" ";
        }
        else{
            cout<<"* ";
        }  
        cout<<endl;
    }    
}