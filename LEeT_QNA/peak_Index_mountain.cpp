#include <iostream>
#include <vector>
using namespace std;

int PeakNumber(vector<int>& arr){
    int start = 0;
    int end = arr.size()- 1;
    int mid = start + (end - start)/2;
    while(start < end)// if  equal we will end up in infinite loop
    {
        // right wala
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        // left wala
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
    }
int main(){
    vector <int> ar{0,10,5,2};
    int Peak = PeakNumber(ar);
    cout<<Peak<<" "<<endl; // gives us index of the Peak Number
}

