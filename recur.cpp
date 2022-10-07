#include<iostream>
using namespace std;

bool search(int arr[],int s,int e,int k){
  if(s>e){
    return false;
  }

  int mid = s +(e-s)/2;
  if(arr[mid]==k){
    return true;
  }

  if(arr[mid]<k){
    return search(arr,mid+1,e,k);
  }
  else{
    return search(arr,s,mid-1,k);
  }
  
}

int main(){
int arr[5]={12,13,14,15,70};
int size = 5;
int key=77;
cout<<"its "<<search(arr,0,size-1,key)<<endl;

return 0;
}