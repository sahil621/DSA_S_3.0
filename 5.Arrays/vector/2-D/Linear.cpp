#include <iostream>
using namespace std;

// Linear search in 2-D Array 

bool lin(int arr[][3],int row, int col,int key)
{
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
               return true;
            }
            
        }
        
    }
    return false;
}

int main(){

    // int arr[3][3] = {{1,2,3},{5,6,0},{7,8,7}};
    int arr[3][3];
    int row = 3;
    int col = 3;
    cout<<"Give elements in array of size 3 by 3 "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            
            cin>>arr[i][j];
            
        }
        
    }

    // input to find key (linear Search) 

    int key;
    cout<<"Give Key "<<endl;
    cin>>key;

    // if statement to give true or false other wise 0 is false and 1 is true 
    if(lin(arr,row,col,key)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"false"<<endl;

    }



}