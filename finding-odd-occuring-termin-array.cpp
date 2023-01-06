#include<iostream>
using namespace std;
int oddoccurence(int n ,int arr[])
{
    for(int i=0;i<n;i++){
    int count=0;
    for(int j=0;j<n;j++)
    {
        if(arr[i]==arr[j])//jab tak  ye  condition satify nhi hoti count increment nhi hoga
        count++;
        if(count%2!=0)
        return arr[i];
    }

}

}
//method 2


int findOdd(int arr[], int n)
{
    int res = 0;
    
    for(int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    
    return res;
}
    



int main(){
    int arr[] = {12,3,3,5,6,5,6} , n=7;
  cout<<oddoccurence(n,arr);
  findOdd(arr,n);
    
return 0;
}
