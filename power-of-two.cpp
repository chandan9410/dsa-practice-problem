 #include<iostream>
 using namespace std;
   bool check(int n){
    if ( n==0)
    return false;
    while( n!=1){
        if(n%2!=0)  //handling odd cases (last digit of  binary no is 1 this will implies that the no is odd)
        return false;
     n=n/2;
     return true;
        
    }
    

    
   }
   //method 2 (efficient )



bool isPow2(int n)
{
    if(n == 0)
        return true;
    
    return ((n & (n - 1)) == 0);
}
    

 
 int main(){
    
   cout<<check(19)<<endl;
    cout<<isPow2(8)<<endl;
 return 0;
 }