#include<iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
int i=0;
int j=0;
int k=0;
while(i<n && j<m){
    if(arr1[i]<arr2[j]){
       arr3[k++]=arr1[i++];
    }
    else{
        arr3[k++]=arr2[j++];
    }
}
while (i<n){
    arr3[k++]=arr1[i++];
}
while (j<m){
    arr3[k++]=arr2[j++];
}

}
void print(int ans[],int n){
    for (int i = 0; i < n; i++)
    {
       cout<<ans[i]<<" ";
    }
    
}

int main(){
int arr1[5]={1,3,5,7,9};
int arr2[6]={2,4,6,8,10,12};
int arr3[11]={0};

merge(arr1,5,arr2,6,arr3);
print(arr3,11);
return 0;
}