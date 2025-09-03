#include<iostream>
using namespace std;
int sum(int a){
    int sum=0;
    for(int i=0;i<=a;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int x;
    cout<<"enter the number:\n";
    cin>>x;
    cout<<sum(x)<<endl;

}