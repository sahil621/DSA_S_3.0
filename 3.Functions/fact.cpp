#include<iostream>
using namespace std;

//only for fact till 12 if we want for till 13 we can use via " long long int " replace with int
int find_fac(int c){
    int sum = 1;
    for (int i = 1; i <= c; i++)
    {
        sum = sum * i;
    }
    return sum;
    
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int fact = find_fac(n);
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
}