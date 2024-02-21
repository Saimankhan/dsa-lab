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
int min=a[0];
for(int i=1; i<n; i++){

    if(a[i]<min){
        min=a[i];

    }
}
cout<<"Minimum number is:"<<min<<endl;
return 0;
}