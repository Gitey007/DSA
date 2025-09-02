#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int x=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
           cout<<x;
           x++;
        }
        cout<<endl;
    }
}