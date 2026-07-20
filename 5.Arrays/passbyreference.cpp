#include <iostream>
using namespace std;

void print(int a[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" "; // here we are printing the original array after inc function is called to see the changes in the original array
    }
    cout<<endl;
}
void inc(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] + 10; // here we are changing the original array because we are passing the array by reference
    }
    print (arr,size); // here we are printing the array after inc function is called to see the changes in the original array 
}
void fun(int a[], int size){
    for (int i = 0; i < size; i++)
    {
        a[0]=10;
        a[1]=20;
        a[2]=30;
        a[3]=40;
        a[4]=50; 
    }
    print(a,size);
}
int main(){
    // int arr[3] = {1,2,3};
    // int size = 3;
    // inc(arr,size);        // here we are calling the inc function to change the original array and then we are calling the print function to see the changes in the original array
    // print(arr,size);      // here we are calling the print function to see the changes in the original array after inc function is called

    int a[]={1,2,3,4,5};
    int size = 5;
    fun(a,size);
    print(a,size);
}