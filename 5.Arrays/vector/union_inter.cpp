#include<iostream>
using namespace std;
#include<vector>
int main(){

    // Union (without duplicates and unsorted array)

    // int arr[] = {1,3,4,5};
    // int asize = 4;
    // int brr[] = {2,6,7};
    // int bsize = 3;

    // vector <int> ans;
    // // for 1st array

    // for (int i = 0; i < asize; i++)
    // {
    //     ans.push_back(arr[i]);
    // }
    
    // // for 2nd array
    
    // for (int i = 0; i < bsize; i++)
    // {
    //     ans.push_back(brr[i]);
    // }
    
    // // print
    // // for (int i = 0; i < ans.size(); i++)
    // // {
    // //     cout<<ans[i]<<" ";
    // // }

    // for(auto val : ans){
    //     cout<<val<<" ";
    // }
    

    // // Intersection 
    vector<int> crr{1,2,4,6};
    // int csize = 4;
    vector<int> bbrr{2,6,7};
    // int bbsize = 3;  
    vector <int> cc; 

    for (int i = 0; i <crr.size(); i++)
    {
        
        for(int j = 0; j < bbrr.size(); j++)
        {
            if (crr[i]==bbrr[j])
            {
                cc.push_back(crr[i]);     
            }
            
        }
        
    }

    // print
    // for (int i = 0; i < cc.size(); i++)
    // {
    //     cout<<cc[i]<<" ";
    // }
    
    for(auto value : cc){
        cout<<value<<" ";
    }
    

}