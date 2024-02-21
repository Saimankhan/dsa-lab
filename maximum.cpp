
#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++){
    cin>>a[i];


}

cout<<"All of numbersa:"<<" ";
for(int i=0; i<n; i++){

    cout<<a[i]<<" ";
}
cout<<endl;
int max=a[0];
for(int i=1; i<n; i++){

    if(a[i]>max){
        max=a[i];

    }
}
cout<<"Max number is:"<<max<<endl;

    return 0;
}