#include <iostream>
using namespace std;

// Minimum in an 2-D array 

// we can also use " void " too for printing 

int sum2(int arr[][3],int row, int col)
{
    int mini = INT_MAX;
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]<mini)
            {
                mini = arr[i][j];
            }
            
        }
        
    }
    // 
    return mini;
}

// Max in an 2-D array 

// we can also use " void " too for printing 
int sum(int arr[][3],int row, int col)
{
    int max = INT_MIN;
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]>max)
            {
                max = arr[i][j];
            }
            
        }
        
    }
    // 
    return max;
}

int main(){
    int brr[3][3] = {
    {1,2,3},
    {5,6,0},
    {7,8,7}};
    int arr[3][3];
    int row = 3;
    int col = 3;

    cout<<"Give elements in array of size 3 by 3 "<<endl;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            cin>>arr[i][j];
            
        }
        
    }
    




    // sum(arr,row,col);     // function call (not gonna give output just internally return max value)
    cout<<sum(arr,row,col)<<endl;  // this is how to get print "int" function  (max)
    cout<<sum2(arr,row,col)<<endl; // and also called function too (min)

}