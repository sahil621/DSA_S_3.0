#include <iostream>
using namespace std;
 

// Finding o/p of given key 

bool find_key(int a[], int key,int size){
    for (int i = 0; i < size; i++)
    {
        if(a[i] == key){
            return true;
        }
    }
    return false;
}
int main(){
    // one way 
    // int a[] = {1,2,3,4,5};
    // int size = 5;
    // int key;
    // cout<<"Enter the key : ";
    // cin>>key;
    // bool f_key = find_key(a,key,size);
    // if(f_key == true){
    //     cout<<"key is found in the array "<<endl;
    // }
    // else{
    //     cout<<"key is not found in the array "<<endl;
    // }


    // second way
    int a[] = {1,2,3,4,5};
    int size = 5;
    int key;
    cout<<"Enter the key : ";
    cin>>key;  
    bool flag = 0;
    for (int i = 0; i < size; i++)
    {
        if(a[i] == key){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout<<"Key is Present in the array "<<endl;
    }
    else{
        cout<<"Key is not Present in the array "<<endl;
    } 
}