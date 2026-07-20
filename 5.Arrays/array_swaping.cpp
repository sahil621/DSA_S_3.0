#include <iostream>
using namespace std;
int main(){
    // for static array 
    
    // int arr[500];
    // cout<<"enter the elements of array "<<endl;
    // int n;
    // cin>>n;

    // // taking the array (input from user)

    // for(int index = 0; index < n; index++){
    //     cin>>arr[index];
    // }


    // // swapping the array to all '1'

    // cout<<"swapping the elements of array to all '1' "<<endl;
    // for(int index = 0; index < n; index++){
    //     cout<<arr[index] * 0 + 1 <<" ";
    // }

    // giving only the first 2 elements then what could be the other elements of the array
    int brr[5] = {1,2,5};
    for(int i = 0; i < 5; i++){
        cout<<brr[i]<<" "; // all will zero except the first 2 elements because we have given the value of first 2 elements 
        //and rest of the elements will be zero by default
    }
    cout<<endl;

    // for all zero array
    int crr[5] = {0};
    for(int i = 0; i < 5; i++){
        cout<<crr[i]<<" "; 
    }
    cout<<endl;


    // for all 1's array (use memset) 
    int drr[5] = {3};
    // This does NOT set every element to 1.
    // memset works byte-by-byte, so each byte of every int becomes 0x01.
    // On most systems an int becomes 0x01010101 (16843009), not 1.
    memset(drr,1,sizeof(drr)); 

    std::fill(drr, drr + 5, 1); // This will set all elements to 1, which is the value we want for each element of the array.
    // We can change it to any value we want, in this case we want to set it to 1 so we can change it to 1 instead of 3.

    // printing the all 1 -> std::fill(drr, drr + 5, 1)  and also another way to set all the elements of the array to 1
    for (int i = 0; i < 5; i++) {
    // drr[i] = 1; // set each element to 1 (another way to set all the elements of the array to 1)
    cout << drr[i] << " "; // all will be 1 because we have set all the elements to 1 using memset
    }
    cout<<endl;
}