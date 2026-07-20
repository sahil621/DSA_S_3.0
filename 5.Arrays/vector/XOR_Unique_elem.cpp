#include<iostream>
#include<vector>
using namespace std; 


// Find unique element (which occur only once in an array) 

// single element find out (leet code)

int find_uni(vector<int> uni){  // function vector declaration
    int ans = 0; 
    for (int i = 0; i < uni.size(); i++)
    {
        ans = ans ^ uni[i]; // Xor Gate for all elements with ans
    }
    return ans;
    

}

int main(){
    int n ;
    cout<<"Enter the size of the array " <<endl;    
    cin>>n;
    vector<int> uni(n);  // delare of a vector 
    cout<<"Enter the elements in array "<<endl;

    //  input   
    for (int i = 0; i < uni.size(); i++)
    {
        cin>>uni[i];
    }
    int uniq_el = find_uni(uni); // delare vector in a function
    cout<<"Unique element of array is "<<uniq_el<<" ";
    

}