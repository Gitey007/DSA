#include<iostream>
using namespace std;
int fun(int x){
    int sum=0;
    while(x>0){
        int a=x%10;
        sum=sum+a;
        x=x/10;
    }
    return sum;
}
int main(){
    int a;
    cout<<"enter the number:\n";
    cin>>a;
    cout<<fun(a)<<endl;
}
