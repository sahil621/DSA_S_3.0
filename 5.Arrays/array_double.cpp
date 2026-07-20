#include <iostream>
using namespace std;
int main(){
    // for static array 
    int arr[500];
    int n;
    cout<<"enter the numbers add in an array  "<<endl;
    cin>>n;
    // printing the array
    cout<<"enter the elements of array "<<endl;
    for(int index = 0; index < n; index++){
        cin>>arr[index]; ;
    }
    // Double the array
    for(int index = 0; index < n; index++){
        cout<<arr[index] * 2 <<" ";
    }
}