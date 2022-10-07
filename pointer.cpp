#include<iostream>
using namespace std;

int getSum(int temp[],int n){
int sum = 0;
for (int i = 1; i < n; i++)
{
sum = sum + temp[i];
}
return sum;
}

// void prints(int *ptr){
//   *ptr=*ptr+1;
// }

int main(){

int temp[5]={1,2,3,4,5};

int num = getSum(temp,5);
cout<<"sum is "<< num<<endl;

// int arr=5;
// int *ptr=&arr;

// prints(ptr);
//  cout<<*ptr;
return 0;
}