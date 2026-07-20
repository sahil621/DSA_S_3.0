#include <iostream>
using namespace std;

void left_neg(int a[],int n){
    int h = n-1, l = 0;
    while(l<=h){
        if(a[l]<0){
            l++;
        }
        else if(a[h]>0){
            h--;
        }
        else{
            swap(a[l],a[h]);
        }
    }
}

int main(){
    int a[]={1,2,-3,4,-5,6};
    int n = sizeof(a)/sizeof(a[0]); // size of the array
    
    left_neg(a,n); // function call to rearrange the array

    // for printing the array after rearranging the elements
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;

}