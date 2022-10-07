#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = (s+e)/2; 

    int arr1= mid-s+1;
    int arr2=e-mid;

    int *first = new int[arr1];
    int *second = new int[arr2];

    int star = s;
    for (int i = 0; i < arr1; i++)
    {
        first[i]=arr[star++];
    }
    star = mid+1;
    for (int i = 0; i < arr2; i++)
    {
        second[i]=arr[star++];
    }

    int ind1 = 0;
    int ind2 = 0;
    star = s;
    while (ind1<arr1 && ind2<arr2){
        if(first[ind1]<second[ind2]){
        arr[star++]=first[ind1++];
        }else
        arr[star++]=second[ind2++];
    }
    while (ind1<arr1){
        arr[star++]=first[ind1++];
    }
    while (ind1<arr1){
        arr[star++]=second[ind2++];
    }
    
    delete[]first;
    delete[]second;
    
}

void mergeSort(int *arr,int s,int e){
   
   if(s>=e)
   return;

   int mid = (s+e)/2;

   mergeSort(arr,s,mid);
   mergeSort(arr,mid+1,e);

   merge(arr,s,e);
}

int main(){

int arr[5]={4,1,3,7,6};
int size=5;
mergeSort(arr,0,size-1);
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}