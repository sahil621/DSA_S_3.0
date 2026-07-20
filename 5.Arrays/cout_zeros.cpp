#include<iostream>
using namespace std; 

// Count zero's & one's 

int main(){
    int brr[19] = {0,0,1,0,1,1,1,0,2,1,1,0,3};
    int size = 19;
    int Numzero = 0;
    int NumOne = 0;
    for (int i = 0; i < size; i++)
    {
        if (brr[i]==0)
        {
            Numzero++; 
        }
        if (brr[i]==1)
        {
            NumOne++;
        }
        
    }
    cout<<"Total zero = "<<Numzero<<endl;
    cout<<"Total One = "<<NumOne<<endl;

}