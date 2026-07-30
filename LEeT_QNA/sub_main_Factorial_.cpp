#include <iostream>
#include <string>
#include <vector>

using namespace std;

string /* yaha hum khud hi dekhenge ki string rakhni hai ya kuch aur */ cal_sum(vector<int> aa,vector<int> bb){ 
    string annd; // make a string
    int count = 0;
    int a = aa.size() - 1;
    int b = bb.size() - 1;
    while (a>= 0 && b>=0){
        int x = aa[a] + bb[b] + count;
        int digit = x % 10 ;
        annd.push_back(digit + '0'); // this is how we put numbers in strings
        count = x /10;
        a--;
        b--; // we don't have to add carry it's not spiral or wave print (REMEMBER)
    }
    while (a>= 0){
        int x = aa[a] + 0 + count;
        int digit = x % 10 ;
        annd.push_back(digit + '0'); // this is how we put numbers in strings
        count = x /10;
        a--;
        // we don't have to add carry it's not spiral or wave print (REMEMBER)
    }
    while (b>= 0){
        int x = 0 + bb[b] + count;
        int digit = x % 10 ;
        annd.push_back(digit + '0'); // this is how we put numbers in strings
        count = x /10;
        b--;
        // we don't have to add carry it's not spiral or wave print (REMEMBER)
    }
    if(count){
        annd.push_back(count + '0');
    }
    while(annd[annd.size()-1]==0){ // last one without reverse ko skip kar do
        annd.pop_back();

    }
    //reverse the string
    reverse(annd.begin(), annd.end());

    

    return annd; // when we use string function then we also return string function just like vector
}


int main(){
    vector<int> arr1 =  {5, 6, 3};
    vector<int> arr2 =  {8, 4, 2};
    string cal = cal_sum(arr1,arr2);
    for(auto i:cal){
        cout<<i<<" ";
    }

}