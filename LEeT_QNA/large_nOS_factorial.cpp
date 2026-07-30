#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <int> fact_lar(int l){
    vector <int> ans;
    // int carry = 0;
    
    // put 1 already in the array / vector
    ans.push_back(1);
    
    // starting from 2 cause intially it has 1 so we will multiple iniside no need extra 
    // put < = large cause it will have to go till end number
    for(int i = 2; i<=l; i++){ 
        int carry = 0; // only in vscode
        
        for (int j = 0; j < ans.size(); j++) // inside the array with carry
        {
            int x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
        }
        while (carry) // when carry is large / has multiple number (exeeds the array)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }

        // reverse the array in the end (like the sub factorial)
        // reverse(ans.begin(),ans.end()); // for leetcode / GfG
        
        

    }
    return ans;
}


int main(){
    int n;
    cout<<"Factorial of  ";
    cin>>n; 
    vector <int> cal = fact_lar(n);
    // for(auto i : cal){
    //     cout<<cal[i]<<" ";
    // }

    // reversing the array when printing

    for (int i = cal.size() - 1; i >= 0; i--)
    {
        cout << cal[i];
    }

}