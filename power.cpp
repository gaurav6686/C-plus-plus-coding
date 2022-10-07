// #include<iostream>
// using namespace std;

// int power(int a,int b){
//     if(b==0)
//     return 1;

//     if(b==1)
//     return a;

//     int ans = power(a,b/2);

//     if(b%2==0){
//         return ans*ans;
//     }else{
//         return a * ans*ans;
//     }
// }

// int main(){
// int a,b;
// cin>>a>>b;
// int ans = power(a,b);
// cout<<"power is "<<ans<<endl;
// return 0;
// }


#include<iostream>
using namespace std;

void sortarr(int arr[],int size){
    if(size==0 || size==1)
    return;
    
    for (int i = 0; i < size-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortarr(arr,size-1);
}

int main(){
int arr[5]={4,1,3,7,6};
int size=5;
sortarr(arr,5);
 for (int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
 }
     
return 0;
}