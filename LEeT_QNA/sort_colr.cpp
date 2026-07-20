#include <iostream>
#include <vector>
using namespace std;

void sort_colr(vector<int>& nums){
    // 1. sorting the array using sort function

    // sort(nums.begin(), nums.end());


    // 2. Counting the number of 0's, 1's and 2's(red, white and blue) in the array

    int zeros,ones,twos;
    zeros = ones = twos = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 0){
            zeros++;
        }
        else if(nums[i] == 1){
            ones++;
        }
        else{
            twos++;
        }
    }
    int i = 0; //traverse the array and fill the values
    while(zeros--){
        cout<<0<<" "; // We can also use nums[i] = 0; instead of cout<<0<<" ";
        // nums[i] = 0; // to fill the array with 0's, 1's and 2's
        i++;
    }
    while(ones--){
        cout<<1<<" "; 
        i++;
    }
    while(twos--){
        cout<<2<<" ";
        i++;    
    }

    // 3. 3-pointers approach or Dutch National Flag Algorithm

//     int low = 0, mid = 0, high = nums.size() - 1;
//     while(mid <= high){ // if mid is less than or equal to high, then we will keep on traversing the array
//         // if mid is only < then high, then we will not be able to traverse the last element of the array,
//         //  as mid will be equal to high and we will not be able to check the last element of the array
//         if(nums[mid] == 0){
//             swap(nums[low], nums[mid]);
//             low++;
//             mid++;
//         }
//         else if(nums[mid] == 1){
//             mid++;
//         }
//         else{
//             swap(nums[mid], nums[high]);
//             high--;
//         }
//     }

}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sort_colr(nums);
    return 0;
}