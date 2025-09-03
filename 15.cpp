#include<iostream>
using namespace std;
int fun(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int x,y;
    cout<<"enter the two numbers\n";
    cin>>x>>y;
    cout<<fun(x,y)<<endl;

}