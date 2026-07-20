#include<iostream>
using namespace std;

// char grade(int marks){
//     if (marks >=90)
//     {
//         return 'A';
//     }
//     else if (marks >=80)
//     {
//         return 'B';
//     }
//     else if (marks >=70)
//     {
//         return 'C';
//     }
//     else if (marks >=60)
//     {
//         return 'D';
//     }
//     else{
//         return 'E';
//     }
//     return marks;
// }

// Using Switch method
char grade(int marks){
    switch (marks/10)
    {
    case 10:
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;
    
    default: return'E';
        break;
    }
}



int main(){
    int marks;
    // cout<<"Enter the marks : ";
    // cin>>marks;
    // char f_marks = grade(marks); 
    
    for (int i = 0; i <= 100; i++)
    {
        char f_marks = grade(i); //why i cause if here marks then it will show "E" cause marks is always gonna be 1 
        cout<<"Grade of "<<i<< " is "<<f_marks<<endl; 
    }
    
    
}