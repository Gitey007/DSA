#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime=true;
    for(int i=2;i*i<=(n-1);i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime==false){
            cout<<"non prime no<<endl\n";
        }
    else{
            cout<<"prime no\n";
        }

    
    return 0;
}