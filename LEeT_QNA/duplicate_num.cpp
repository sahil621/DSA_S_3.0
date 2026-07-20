#include<iostream>
using namespace std;

int duplicate_num(int nums[], int n){

        // sorting method

        // sort(nums.begin(),nums.end());
        // for(int i = 0; i<m-1;i++){ // why -1 because we are comparing the current element with the next element 
        // // so we need to stop at the second last element

        //     if(nums[i]==nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return -1;


        // Negative method

        // int ans = -1;
        // for(int i = 0; i<m;i++){
        //     int index = abs(nums[i]);
        //     if(nums[index]<0){
        //         // return index; // or 
        //         ans = index;
        //         break;
        //     }
        //     // else multiply the index value by -1 -> denotes duplicate

        //     nums[index] *= -1;

        // }
        // return ans;


        // positioning method (best method) -> O(n) time complexity and O(1) space complexity 
        int i = 0;
        while(nums[nums[i]]!= nums[i]){
            swap(nums[nums[i]],nums[i]);
        }
        return nums[i];
    }


int main(){
    int arr[] ={1,3,4,2,2};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n;
    duplicate_num(arr,n);
    cout<<duplicate_num(arr,n)<<endl;
    
}