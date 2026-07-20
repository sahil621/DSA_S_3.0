#include <iostream>
using namespace std;
int main(){

    // pre - increment and decrement operators 

    // multiple output can come but the right one is 49 not 42
    // int a = 5;
    // cout<<(++a)*(++a);

    // // left operator
    // a = a << 2 ; 
    // cout<<a;

    // // right operator
    // a = a>>1;  // divides by 2 and gives the first integer value not the float 
    // cout<<a; 

    // one type

    int a = 5;
    int b = 4;
    int c = (--a) * (b++);
    cout<<c<<endl;
 




    // bool a = 0;
    
    // bool a = false; 
    // bool b = true;

    // Bitise not operator
    // a = (~a); // negation
    // a = ~(a); //

    cout<< (a & b)<<endl; // and operator // both should be 1 to give 1
    cout<<(a | b)<<endl; // inclusive or operator // both should be 0 to give 0
    cout<<(a ^ b)<<endl; // exclusive or operator // both should be different to give 1
    cout<<~(a)<<endl; // cout<<~(b)<<endl; // negation operator // gives the complement of the number
}