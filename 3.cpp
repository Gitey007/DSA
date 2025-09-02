#include<iostream>
using namespace std;
int main(){
    int p;
    cout<<"enter the size of array\n";
    int arr[p];
    int n;
    cout<<"enter the place of insertion\n";
    cin>>n;
    int x;
    cout<<"enter the number to be inserted\n";
    cin>>x;
    for(int i=0;i<p;i++){
        cin>>arr[i];
    }
    for(int i=n;i<(p);i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<(p+1);i++){
     cout<<arr[i];
    }
}