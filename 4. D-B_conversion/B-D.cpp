#include <iostream>
#include <cmath>
using namespace std;

int binarytodecimal_method1(int n){
    // Multiplication Method
    int decimal = 0;
    int i = 0;
    while (n){
        int rem = n % 10;
        decimal = rem * pow(2,i++) + decimal; // here we are multiplying the remainder with 2 raised to the power of i 
        // and adding it to the decimal value

        n = n / 10; // to remove the last digit from the binary number
    }
    return decimal;
}
int main(){
    int n;
    cin>>n;
    int decimal = binarytodecimal_method1(n);
    cout<<decimal<<endl;
}