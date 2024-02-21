#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE=100;
int main()
{
    int n;
    cin >> n;
    int a[MAX_SIZE];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    cout << "insert a number:";
    int x;
    cin >> x;
    
    a[n] = x;
    n++;

    // insert operation closed
    cout << "after added a new element in array the number of arrayis:";
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }

    //for delete operation
    n--;
    cout<<"after deleting the array is:";
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";

    }

    return 0;
}