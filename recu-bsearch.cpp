#include<iostream>
using namespace std;
int bsearch(int arr[], int low, int high, int x){
if(low>high) return -1;
int mid=(low+high)/2;
if(arr[mid]=x)
return  mid;
else if(arr[mid]>x)
return bsearch(arr,low,mid-1,x);
else 

  return bsearch(arr,mid+1,high,x);    
}

int main(){
    
 int arr[]={12,23,45,50,56,70};
 cout<<bsearch(arr,0,5,45);   
return 0;
}