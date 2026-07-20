#include<iostream>
#include<vector>
using namespace std;

void printa(vector<int>zer){
    // This for loop and another for loop is same but the second one is better
    // Use for-each loop (2nd one)

    // for (int i = 0; i < zer.size(); i++)
    // {
    //     cout<<zer[i]<<" ";
    // }
    
    for (int x : zer) cout << x << " ";
    cout <<endl;

}
int main(){
    vector<int>zer{0,1,1,0,1,0,1,0,1};
    int start = 0;         // for sorting 0's (from the start)
    int end = zer.size() - 1; // for sorting 1's (from the end)
    int i = 0; // for traversing the array

    // For doing 0's from the back 
    for (int i = 0; i < zer.size(); i++)
    {
        if (zer[i]!=0)
        {
            swap(zer[i],zer[start]);
            start ++;
        }
        
    }
    

    // Two-pointer approach to sort 0's and 1's
    // work only for o's and 1's

    // while (i != end)     // we can also do ' < ' 
    // {
    //     if (zer[i] == 0)
    //     {
    //         swap(zer[i], zer[start]);
    //         printa(zer);
    //         start++;
    //         i++;
    //     }
    //     else
    //     {
    //         swap(zer[i], zer[end]);
    //         printa(zer);
    //         --end;
    //         // don't increment i here because the swapped element needs to be checked
    //     }
    // }

    // for-each loop (like other for loop but better)
    // printing the vector

    // for (int x : zer) cout << x << " ";
    // cout << '\n';

    // or (both are same actually)
    for(int val : zer){
        cout<<val<<" ";
    }
    cout<<endl;
    
}