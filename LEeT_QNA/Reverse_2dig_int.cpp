#include <iostream>
using namespace std;
int reverse_int(int x){
    int sum = 0;

    // for checking the overflow and underflow of the integer,
    //  we will check if the number is less than or equal to INT_MIN or greater than or equal to INT_MAX

    if(x<=INT_MIN){ // to check if the number is less than or equal to the minimum value of int, 
        // if it is then we can say that it will overflow and we can return 0 
        return 0;
    }
    bool isNeg = false; // to check if the number is negative or not

    if(x<0){
        isNeg = true; // if the number is negative then we will make it positive 
        //  and reverse it and then make it negative again
        x = -x; // to make it positive
    }
    while(x>0){
        if(sum>INT_MAX / 10){ // why 10? because we are multiplying the sum by 10 in the next step, 
            //so if the sum is greater than INT_MAX / 10 then it will overflow
            // to check if the sum is greater than the maximum value 
            // if it is then we can say that it will overflow and we can return 0
            return 0;
        }
        int rem = x % 10;
        sum = sum * 10 + rem; //here we are multiplying the sum by 10 and adding the remainder to it,
        x /= 10;
    }
    return isNeg ? -sum : sum; // if isNeg is true then we will return -sum else we will return sum
}
int main(){
    int n;
    cin>>n;
    int rev = reverse_int(n);
    cout<<rev<<endl;

}