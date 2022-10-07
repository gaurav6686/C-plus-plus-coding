#include<iostream>
using namespace std;

// int update(int *arr,int n){
//     int sum=0;
//     for (int i = 0; i < n; i++)
//     {
//         sum+=arr[i];
//     }
//     return sum;
// }

int main(){
//     int n;
//     cin>>n;
    
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//        cin>>arr[i]; 
//     }

//    int ans = update(arr,n);
//     cout<<"value is"<<ans<<endl;
    

int n;
cin>>n;
int **arr=new int*[n];
for (int i = 0; i < n; i++)
{
    arr[i]=new int[n];
}

for (int i = 0; i < n; i++)
{
    for (int j  = 0; j < n; j++)
    {
         cin>>arr[i][j];
    }
    
}

for (int i = 0; i < n; i++)
{
    for (int j  = 0; j < n; j++)
    {
         cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

for (int i = 0; i < n; i++)
{
    delete []arr[i];
}
delete []arr;

return 0;
}