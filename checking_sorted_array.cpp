#include<iostream>
using namespace std;
    /*  my solustion
   int checksorted(int arr[], int n){  
    int res=0;
    for(int i =1; i<n; i++)
    {  if(arr[i]<arr[res]){
        cout<<"array is not sorted"<<endl;
        break;
    }
    else
    {res =i;
        
    }
    if(res==6){
    cout<<"array  is sorted"<<endl;
    }
    }
    
  }
  */
  
 // naive solustioin
  bool jachsorted(int arr[], int n){
    for(int i =0; i<n;i++){
      for(int j=i+1; j<n; j++){
        if(arr[j]<arr[i])
        return false;
      }
      return true;
    }
  }
  //effecient approach
  bool sorted(int arr[], int n){
    for(int i =1; i<n; i++){
      if(arr[i]<arr[i-1])
      
      return false;
    }
    return true;

  }

int main(){
  int arr[] = {23,44,82,94,123,211,430};
  cout<<jachsorted(arr,7)<<endl;
cout<<"  by efficient method"<<endl; 

  cout<<sorted(arr,7);  
return 0;
}