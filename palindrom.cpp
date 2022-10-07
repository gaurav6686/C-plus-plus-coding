#include<iostream>
using namespace std;
 
//  char toLowerCase(char ch){
//     if(ch >='a' && ch<='z')
//     return ch;
//     else{
//         char temp=ch-'A'+'a';
//     }
//  }

// int palindrom(int a[],int n ){
//      int st=0;
//     int e=n-1;
//     while(a[st]<=a[e]){
//         if((st)!=(e)){  
//         return 0;
//     }else{
//          st++;
//          e--;
//         }
//     }
//    return 1;
// }


int main(){

char ara1[20]={'a','b','c','d','f'};
string str={'a','b','c','d','f'};
// cout<<"palindrom "<<palindrom(name,len)<<endl;
for (int i = 0; i < 20; i++)
{
    cout<<ara1[i]<<endl;
}
cout<<str<<endl;


return 0;
}