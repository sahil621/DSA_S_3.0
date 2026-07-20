#include <iostream>
using namespace std;
int main(){

    // Alphabet Pyramid Pattern
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int col = 0; col < i+1; col++)
        {
            int aa = col+1; // to get the number of column and then convert it into character
            char ch = aa + 'A' - 1;
            cout<<ch<<" ";
        }
        // reverse counting
        for(int bol = i; bol>=1; bol--)
        {
            int bb = bol; 
            char ch = bb + 'A' - 1; // give us zero based index and then we will get the character by adding 'A' - 1
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    







}