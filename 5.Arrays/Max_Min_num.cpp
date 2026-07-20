#include<iostream>
#include<limits>
using namespace std;

// Maximum and Minimum in an array

int main (){
    // For MAxi 

    // int Max[]={2,4,75,66,77,8,12};
    // int size = 7;
    // int maxi = INT_MIN;
    // for (int i = 0; i < size; i++)
    // {
    //     if (Max[i]>maxi)
    //     {
    //         maxi = Max[i];
    //     }
        
    // }
    // cout<<"Maximum Number in the array is : "<<maxi<<" ";
    

    // For Mini
    
    int Min[]={2,4,75,66,77,8,12};
    int size = 7;
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (Min[i]<mini)
        {
            mini = Min[i];
        }
        
    }
    cout<<"Maximum Number in the array is : "<<mini<<" ";
    
    


}