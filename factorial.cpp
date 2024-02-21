#include<bits/stdc++.h>
using namespace std;
int factorial(int val){
    if(val==0||val==1)
    {
        return 1;

    }
    else return val*factorial(val-1   );
}
int main(){
    int n; cin>>n;
    cout<<"factorial of"<<n<<"is:"<<factorial(n)<<endl;
    

    return 0;
}