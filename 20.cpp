#include<iostream>
using namespace std;
void prime(int x){
    if(x<=1){
        cout<<"not prime\n";
    }
    for(int i=2;i*i<=x;i++){
     if(x%i==0){
       cout<<"not prime\n";
       return;
     }
    }
        cout<<"prime\n";
    }

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    prime(n);
}
