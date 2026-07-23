#include <iostream>
using namespace std;
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>mxn;
        int m = matrix.size();
        int n = matrix[0].size();
        int total_elements = m*n;

        int startingr = 0 ; // starting row 
        int endingr = m - 1; // ending row
        int startingc = 0 ; // starting column 
        int endingc = n - 1; // ending column

        int count = 0;

        while(count<total_elements){

            // for starting_row 
            for(int i = startingc; i<=endingc && count<total_elements; i++){
                mxn.push_back(matrix[startingr][i]); // mxn -> vector joh humko return karna hai (YAAD)
                count++;
            }
            startingr++;

            // for ending_col 
            for(int i = startingr; i<=endingr && count<total_elements; i++){
                mxn.push_back(matrix[i][endingc]); // mxn -> vector joh humko return karna hai (YAAD)
                count++;
            }
            endingc--;

            // for ending_row
            for(int i = endingc; i>=startingc && count<total_elements; i--){
                mxn.push_back(matrix[endingr][i]); // mxn -> vector joh humko return karna hai (YAAD)
                count++;
            }
            endingr--;

            // for starting col
            for(int i = endingr; i>=startingr && count<total_elements; i--){
                mxn.push_back(matrix[i][startingc]); // mxn -> vector joh humko return karna hai (YAAD)
                count++;
            }
            startingc++;
        }
        return mxn;
        
    }

int main(){
    // // Remember this delaration
    
    vector <vector<int>> mat = { // we can't use array cause in function call it is (Vector OF Vector)
        {1,2,3,4}, 
        {5,6,7,8}, 
        {9,10,11,12}
    };
    // // 1 2 3 4 8 12 11 10 9 5 6 7 -> expected output
    /* 
    // whole diagram
        -   -   -  ->  // starting row  and starting col 
        -  -  -  -  |
        |  | - ->|  |
        |  - - - |  |
        <- - - -  - V //endling row and column
    */


    vector<int> spiral =  spiralOrder(mat);
    for(auto i : spiral){
        cout<<i<<" ";

    }

}