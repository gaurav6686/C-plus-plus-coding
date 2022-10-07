#include<iostream>
using namespace std;

bool reverse(string& arr,int i,int j){
    if(i>j)
    return true;

    
        if(arr[i]!=arr[j]){
            return false;
        }else
        return reverse(arr,i+1,j-1);
    
}
int main(){
string arr ="ada";

bool ans = reverse(arr,0,arr.length()-1);
cout<<endl;
if(ans){
    cout<<"yes"<<endl;
}else{
    cout<<"no"<<endl;
}
cout<<arr<<endl;
return 0;
}