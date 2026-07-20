#include<iostream>
#include<limits>
using namespace std;

// row sum
// void col_sum(int arr[][3],int row, int col)
// {
//      for (int i = 0; i < row; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             sum = sum + arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }


// column sum 

// void col_sum(int arr[][3],int row, int col)
// {
//      for (int i = 0; i < row; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             sum = sum + arr[j][i];
//         }
//         cout<<sum<<endl;
//     }
// }


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
    cout<<'\n';
    
    // Row wise Printing 

    // cout<<"Row_Wise"<<" "<<endl;
    // cout<<endl;         
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
            
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // printing Column wise 
    
    cout<<"Col_Wise"<<" "<<endl;
    cout<<endl;         
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[j][i]<<" "; // replace i with j 
        }
        cout<<endl;
    }
    cout<<endl;


}
