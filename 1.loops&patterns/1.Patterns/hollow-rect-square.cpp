#include <iostream>
using namespace std;
int main(){

    int rowCount,colCount; // for n number of rows and columns depending on user input  x
    cin>>rowCount;
    // cin>>colCount;

// Hollow Rectangle Pattern
    // for (int row = 0; row < rowCount; row+=1)
    // {
    //     // fist and last row print stars
    //     if(row==0 || row==rowCount-1){
    //         for (int col = 0; col < colCount; col+=1)
    //         {
    //             cout<<"* ";
    //         }
    //     }
    //     else{
    //         // remaining middle rows
    //         // first star
    //         cout<<"* ";
    //         for (int i = 0; i < colCount-2; i+=1)
    //         {
    //         // Spaces
    //             cout<<"  ";
    //         }
    //         // last star
    //         cout<<"* ";
    //         }
    //     cout<<endl;

    // }



    // Hollow square pattern
    for (int row = 0; row < rowCount; row+=1)
    {
        // fist and last row print stars
        if(row==0 || row==rowCount-1){
            for (int col = 0; col < rowCount; col+=1)
            {
                cout<<"* ";
            }
        }
        else{
            // remaining middle rows

            // first star
            cout<<"* ";
            // Spaces
            for (int i = 0; i < rowCount-2; i+=1)
            {
   
                cout<<"  ";
            }

            // last star
            cout<<"* ";
            }
        cout<<endl;

    }










}



