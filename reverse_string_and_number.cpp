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
    cout << "Number of array before reverse:";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    cout << "Number of array after reverse:";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    char str[100];
  
    cout<<"Enter the string:";
    cin >> str;
      int l =strlen(str);
    for (int i = 0, j = l- 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout<<"after reverse:"<<str<<endl;
        return 0;
}