#include<iostream>
using namespace std;


// sum of any number (function)
// int final_sum(int n){
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }


// sum of even nos. (function)
int even_sum(int a)
{
    int even_sum = 0;
    for (int j = 2; j <= a; j = j+2)
    {
        even_sum = even_sum + j;
    }
    return even_sum;

}

int main(){
    int n;
    cout<<"Enter your number "<<endl;
    cin>>n;
    // int sum = final_sum(n);  // sum of all numbers
    // cout<<sum<<endl;
    int even = even_sum(n);
    cout<<even<<endl;
}