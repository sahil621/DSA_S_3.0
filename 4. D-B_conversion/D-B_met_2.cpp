    #include<iostream>
    #include <cmath>
    using namespace std;    

    int decimaltobinary_method1(int n){
        // Bitwise Method
        int binary = 0;
        int i = 0;
        while (n>0){
            int rem = (n & 1);
            binary = rem * pow(10,i++) + binary;
            n = n>>1;
        }
        return binary;
    }

    int main(){
        int n;
        cin>>n;
        int binary = decimaltobinary_method1(n);
        cout<<binary<<endl;

    }

