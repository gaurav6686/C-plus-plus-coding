#include<iostream>
using namespace std;

// int factorial(int n){
    // int power(int n){
    void counting(int n){
    if(n==0){
        return;
    }
    counting(n-1);
    cout<<n<<endl;
    
    // return n*factorial(n-1);
}

int main(){
int n;
cin>>n;
cout<<endl;
// int ans = factorial(n);
// int ans = power(n);
counting(n);
// cout<<ans<<endl;
return 0;
}