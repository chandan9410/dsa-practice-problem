// my solution
#include<iostream>
using namespace std;
int index(int arr[], int n , int x){
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        return i;
        else
        count++;
        if(count==n-1)
        return -1;
    }
}

int main(){
      int arr[]={12,23,132,3,312,1000 ,34};
      cout<<index(arr,7,100);
    
return 0;
}