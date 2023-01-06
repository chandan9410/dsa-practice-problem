#include<iostream>
using namespace std;
 void shiftallzeroes(int arr[], int n){
  for(int i =0; i<n; i++){
    if(arr[i]==0)
    {
        for(int j=i+1;j<n; j++){
            if(arr[j]!=0)
            {
                swap(arr[i], arr[j]);
            }
        }
    }
  }
 }
 void movezeroes(int arr[],int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
 }

int main(){
  int arr[]={23,23,0,0,56,4,0,64}, n=8;
  shiftallzeroes(arr,n);
   for(int i =0; i<n; i++){
    cout<<arr[i]<<endl;
  }  
  cout<<"by efficeint approach"<<endl;
  movezeroes(arr, n); 
  for(int i =0; i<n; i++){
    cout<<arr[i]<<endl;
  }  
    
return 0;
}