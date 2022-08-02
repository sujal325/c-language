#include<iostream>
using namespace std;

int my(int a){
    int m=1,b=1;
    while(a!=0){
        int n;
        n=a%10;
        m=m*n;
        b=b+n;
        a=a/10;
        cout<<"multiply="<<m<<"   "<<"substract="<<b<<endl;
    }
    int s=m-b;
    cout<<"substracted: "<<s;
}
int main(){
    int b;
    cin>>b;
    my(b);
}