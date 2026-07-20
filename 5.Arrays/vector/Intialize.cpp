#include <iostream>
#include <vector>
using namespace std;
int main(){

    // Create Vector
    vector<int> v; // this is how we create a vector in c++

    // later we know about this
    // int ans = (sizeof(v))/sizeof(int); // this is how we can find the size of an array in c++
    // cout<<ans<<endl;


    cout<<v.size()<<endl; // this is how we can find the size of a vector in c++
    cout<<v.capacity()<<endl; // this is how we can find the capacity of a vector in c++
    
    // insert
    v.push_back(10);  
    v.push_back(33);
    
    // printing the vector
    for(int i=0; i<v.size(); i++){ // this is how we can print the elements of a vector in c++
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // run time pe array create karna (2nd Vector)
    cout<<"Enter the size of vector: ";
    int n;
    cin>>n;
    vector<int> v2(n,12); // this is how we can create a vector of size n and initialize all elements with 12

    cout<<"Size of v2: "<<v2.size()<<endl; // this is how we can find the size of a vector in c++
    
    cout<<"Capacity of v2: "<<v2.capacity()<<endl; // this is how we can find the capacity of a vector in c++
    
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    // 1st vector remove one element (13)
    v.pop_back(); // this is how we can remove the last element of a vector in c++


    // Printing new vector (3rd vector)

    cout<<"printing new vector: "<<endl;
    vector<int>v3{10,22,24,23}; // this is how we can create a vector and initialize it with some values (manually)

    for(int i=0; i<v3.size(); i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    cout<<"Vector v3 is empty or not: "<<v3.empty()<<endl; // this is how we can check if a vector is empty or not in c++
    // 0 means false means vector is not empty and 1 means true means vector is empty 


    cout<<"printing 1st vector: "<<endl;

    cout<<v.empty()<<endl; // this is how we can check if a vector is empty or not in c++
    // v.clear(); // this is how we can remove all elements of a vector in c++ (0's too)

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    // 4th vector

    vector <int> v4;
    cout<<"v4 Empty or not "<<v4.empty()<<endl;
    return 0;
} 