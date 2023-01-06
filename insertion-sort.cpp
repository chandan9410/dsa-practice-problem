#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++){
         for(int j=0; j<i; j++){
            if(arr[j]>arr[i])
            swap(arr[j], arr[i]);
         }
    }
}


int main(){
    int arr[]={12,121,123,23,18,9};
    int n =6;
    insertionsort(arr,n);
 for(int i=0; i<n;i++)
 cout<<arr[i]<<" ";
    
return 0;
}