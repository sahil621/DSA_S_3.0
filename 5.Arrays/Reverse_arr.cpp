#include<iostream>
using namespace std; 

// reverse the array

int main(){
    //static array (continuity)
    int rev[8]={10,20,30,40,50,60,70,80};
    int size = 8;
    int start = 0;
    int end = size - 1;
    while (start<=end)
    {
        swap(rev[start],rev[end]);
        start ++;
        end --;
    }

    // printing 

    for (int i = 0; i < size; i++)
    {
        cout<<rev[i]<<" ";
    }
    
}