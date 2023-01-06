#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
    return 1;
     cout<<n<<endl;

    return n*fact(n-1);
   
}

int main(){
    fact(8);
    
return 0;
}
