#include<iostream>
using namespace std;

int main(){

    // pair sum 

    // vector<int>aee{15,20,8,5,12};
    // int sum = 20;
    
    // // print all pairs
    // // outer loop for each element like 15 then 20 and 8 like that
    // for (int i = 0; i < aee.size(); i++)
    // {
    //     int element1 = aee[i];
        
    //     // inner loop will traverse on aage waale elements  
    
    //     for (int j = i+1; j < aee.size(); j++)
    //     {
    //         if (element1 + aee[j] == sum)
    //         {
    //             cout<<"Pair is "<<"("<<element1<<","<<aee[j]<<")"<<endl;
    //         }
                 
    //     }
        
    // }


    // triplet numbers pairing
       
    // vector<int>bee{10,20,30,40,50,60,75,25,35};
    // int a_sum = 100;

    // print all pairs
    // outer loop for each element like 15 then 20 and 8 like that

    // for (int i = 0; i < bee.size(); i++)
    // {
    //     int element1 = bee[i];

    // inner loop will traverse on aage waale elements  
    //     for (int j = i+1; j < bee.size(); j++)
    //     {
    //         int element2 = bee[j];
    //         for (int k = j+1; k < bee.size(); k++)
    //         {
    //             int element3 = bee[k];
    //                 if (element1 + element2 + element3  == a_sum)
    //                 {
    //                     cout<<element1<<","<<element2<<","<<element3<<endl;
                    
    //                 }
                
    //         }
            
    //     }
        
 // }
    


    // 4 pairs 

    vector<int>bee{10,20,30,40,50,60,75,25,35};
    int B_sum = 100;

    // print all pairs
    // outer loop for each element like 15 then 20 and 8 like that

    for (int i = 0; i < bee.size(); i++)
    {
        int element1 = bee[i];
        // inner loop will traverse on aage waale elements
        for (int j = i+1; j < bee.size(); j++)
        {
            int element2 = bee[j];
            for (int k = j+1; k < bee.size(); k++)
            {
                int element3 = bee[k];
                for (int l = k+1; l < bee.size(); l++)
                {
                    int element4 = bee[l];
                    if (element1 + element2 + element3 + element4 == B_sum)
                    {
                        cout<<element1<<","<<element2<<","<<element3<<","<<element4<<endl;
                    }
                    
                }
                
            }
            
        }
        
    }
    
    
}

    