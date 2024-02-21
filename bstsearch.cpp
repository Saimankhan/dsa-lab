#include<bits/stdc++.h>
using namespace std;
const int N=1000;
class BST{
    private:
    int a[N];
    public:
    BST() {
        for (int i = 0; i < N; i++)
        {
            a[i]=-1;
        }
        
    }
    void insert(int key,int index=0){
        if (a[index]==-1){
            a[index]=key;
        }
        else{
            if (key<a[index])
            insert(key,2*index+1);
            else
            insert(key,2*index+2);
        }
        
    }
    void display(int index=0){
        if (a[index]!=-1){
            display(2*index+1);
            cout<<a[index]<<" ";
            display(2*index+2);
        }
    }
    bool search(int key,int index=0){
        if(a[index]==-1){
            return false;
        }
        else if(a[index]==key)
        return true;
        else{
            if (key<a[index])
            search(key,2*index+1);
            else
            search(key,2*index+2);
        }
    }






};



int main(){
     BST bst;
    bst.insert(30);
    bst.insert(20);
    bst.insert(200);
    bst.insert(100);
    bst.insert(40);
    bst.insert(102);
    bst.insert(50);
    bst.insert(80);
    bst.insert(90);
    bst.insert(99);
    cout << "Element after traversal:";
    bst.display();
    if(bst.search(50))
    cout<<"Found!"<<endl;
    else
    cout<<"Failed!"<<endl;


    return 0;
}