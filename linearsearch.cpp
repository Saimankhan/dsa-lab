#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Number of array:";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    int val;
    bool found = false;
    cin >> val;
    for(int i = 0; i < n; i++){
        if(a[i] == val){
            found = true;
            break;
        }
    }
    if(found)
    cout<<"found it!"<<endl;
    else
    cout<<"Not found it!"<<endl;

    return 0;
}