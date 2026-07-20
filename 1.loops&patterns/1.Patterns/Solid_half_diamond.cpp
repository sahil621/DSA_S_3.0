#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // Solid Half Diamond Pattern
    
    for (int i = 0; i < n + 1; i++){
        for (int j = 0; j < i+1; j++)
        {
            cout<<"* ";
        }            
        cout<<endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {

            cout<<"* ";
        }
        cout<<endl;
    }
    

}
