#include <iostream>
using namespace std;

// konsi bit ko set karna hai, uske liye hum ek mask banayenge jisme sirf wo bit 1 hogi aur baaki sab 0 honge.
//  Phir hum original number ke saath bitwise OR operation karenge. Isse wo particular bit set ho jayegi.

int setKthBit(int n, int k){
    // int mask = 1<<k;
    // int result = n | mask;
    // return result;
    return n | (1<<k); // i have done it in one line without using extra variable 
}
int main(){
    int n, k; // n is the number and k is the position of the bit which we want to set
    cout<<"Enter the number "<<endl;
    cin>>n;
    cout<<"Enter the k'th bit "<<endl;
    cin>>k;
    int result = setKthBit(n,k);
    cout<<result<<endl;
}