#include<iostream>
using namespace std;
int main(){

    // 2-D Intialization 
    int ar[2][2] = {
        {1,2},
        {23,11}
    }; // square 
    int bbr[2][3]; // Rectangle 
    cout<<ar[1][1]<<endl; //printing manually
    
    // printing 5 rows and 5 columns of " -8 "

    vector<vector<int> >arr(5,vector<int>(5,-8));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<arr[2][3]<<" "; // for specific element to find out 

    
}