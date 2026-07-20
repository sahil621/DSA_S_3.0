#include<iostream>
using namespace std;
int main(){
    int ext[7]={10,20,30,40,50,60,70};
    int size = 7;
    int start = 0;
    int end = size - 1;

    // while loop 

    // while (true)
    // {
    //     if (start > end)
    //     {
    //         break;
    //     }
    //     if (start == end)
    //     {
    //         cout<<ext[start]<<" ";
    //     }
    //     else{
    //         cout<<ext[start]<<" ";
    //         cout<<ext[end]<<" ";
    //     }
    // start ++;
    // end--;
        
    // }
    
    
    // For loop

    for (int i = 0; i < size; i++)
    {
        if (start > end)
        {
            break;
        }
        if (start == end)
        {
            cout<<ext[start]<<" ";
        }
        else{
            cout<<ext[start]<<" ";
            cout<<ext[end]<<" ";
        }
        start ++;
        end --;
    }
    
}