#include<iostream>
using namespace std;

// bool isPresent(int arr[3][4],int target,int i,int j){
//   for (int i = 0; i < 3; i++){
//     for (int j = 0; j < 4; j++){
//        if(arr[i][j]==target){
//         return 1;
//        }
//     }  
// }
// return 0;
// }

void largest(int arr[3][4],int i,int j){
  cout<<"Addition of the 2d array rows "<<endl;
  int max = 0;
for (int i = 0; i < 3; i++){
    int sum=0;
    for (int j = 0; j < 4; j++){
       sum+=arr[i][j];
       }
        if(sum>max){
            max =sum;
        }
    }  
     cout<<"the maximum sum is "<<max<<endl;  
}
int main(){
int arr[3][4];
cout<<"Enter the elements "<<endl;
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
       cin>>arr[i][j];
       }
    }  

cout<<"Elements are"<<endl;
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
       cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }


// cout<<"search the element "<<endl;
// int target;
// cin>>target;
// if(isPresent(arr,target,3,4)){
//     cout<<"is present"<<endl;
// }else{
//     cout<<"nt present"<<endl;
}

 int num = largest(arr,3,4);
 cout<<"the lagest is "<<num<<endl;
return 0;
}