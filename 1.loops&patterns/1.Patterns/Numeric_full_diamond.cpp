#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int start = i+1;
        for (int col = 0; col < (n-(i+1)); col++)
        {
            cout<<"  ";
            
        }
        for (int col_1 = 0; col_1 < i+1; col_1++)
        {
            cout<<start<<" ";
            start++;
        }
        // cout<<"C "<<start;
        for (int col_2= 0; col_2 < i; col_2++)
        {
            cout<<start-2<<" ";
            start--;
        }
        
        
        
        cout<<endl;
    }
    





}