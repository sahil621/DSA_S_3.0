#include<iostream>
using namespace std;

// bool num(int n){
//     for (int i = 2; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             return false;
//         }    
//     }
//     return true;
// }
// int main(){
//     int n;
//     cout<<"Enter the number ";
//     cin>>n;
//     bool check = num(n);
//     if (check == true)
//     {
//         cout<<"Number is Prime ";
//     }
//     else{
//         cout<<"Number is Not Prime ";
//     }
// }

bool prime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
        }    
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n; 
    for (int i = 1; i <= n; i++)
    {
        bool check = prime(i);
        if (check == true)
        {
            cout<<i<<" is Prime "<<endl;
        }
        else{
            cout<<i<<" is Not Prime "<<endl;
        }
    }
}