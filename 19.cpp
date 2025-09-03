#include<iostream>
using namespace std;
int fact(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int bin(int n,int r){
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    return a/(b*c);
}
int main(){
    int x,y;
    cout<<"enter the number:\n";
    cin>>x>>y;
    cout<<bin(x,y)<<endl;
}