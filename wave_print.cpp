#include <iostream>
#include <vector>

using namespace std;

void wavePrint_matrix(vector<vector<int>> x){
    int r = x.size(); // rows
    int c = x[0].size(); //columns

    for (int i = 0; i < c; i++) // rows (change to r when left to right)
    {
        // for even columns, 
        if ((i & 1)==0)
        {
            // print top to bottom

            for (int j = 0; j < r; j++) 
            {
                cout<<x[j][i]<<" ";
            }
            // left - right

            // for (int j = 0; j < c; j++) 
            // {
            //     cout<<x[i][j]<<" ";
            // }
            
        }
        else{
            // for odd columns , print bottom to top (change to (c-1) & [i][j] when top - bottom )
            for (int j = r-1; j >= 0; j--) // (row - 1)
            {
                cout<<x[j][i]<<" "; // [i] is -> for rows [j] -> for columns
            }
            
        }
        
    }
}

int main(){
    vector<vector<int>> v{ // vector of vector
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}

    };
    wavePrint_matrix(v);
    return 0;



}