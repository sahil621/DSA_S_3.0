#include <iostream>
using namespace std;

void find_missing(int *a, int n){ // why *a? // because we are passing the array to the function and
    // we want to modify the original array


    // visited method -> O(n) time complexity and O(1) space complexity

    // for(int i = 0; i<n; i++){
    //     int index = abs(a[i]); // to get the index of the element
    //     if(a[index - 1]>0){ // if the element is positive then we will make it negative
    //         a[index - 1] *= -1; // to make the element negative
    //     }
    // }
    // for(int i = 0; i<n; i++){ // why 1? because we are starting from the second element of the array
    //     if(a[i]>0){ // if the element is positive then it means that the index is missing
    //         cout<<i+1<<endl;
    //     }
    // }


    // sorting + swapping method -> O(nlogn) time complexity and O(1) space complexity

    int j = 0; // to keep track of the index of the array
    while(j<n){

        int index = a[j] - 1; // to get the index of the element
        if(a[j]!=a[index]){ // if the element is not at the correct index
            swap(a[j],a[index]); // then we will swap the element with the element at the correct index
        }
        else{
            ++j; // if the element is at the correct index then we will move to the next element
        }
    }
    for(int i = 0; i<n;i++){
        if(a[i]!=i+1){ // if the element is not at the correct index then it means that the index is missing
            cout<<i+1<<" ";
        }
    }
    cout<<endl; // to print the missing elements in a new line
}


int main(){
    int n;
    // int a[] = {1,3,5,3,4};
    int a[] = {1,4,3,2,1,3,7};

    n = sizeof(a)/sizeof(a[0]); // to find the size of the array and to get the number of elements in the array
    find_missing(a,n);
    
    return 0;
}