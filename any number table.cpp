#include<iostream>
using namespace std;

void my(int a){
    int i=1,m;
    while (i<=10){
        m=a*i;
        cout<<a<<" "<<"*"<<" "<<i<<" "<<"="<<" "<<m<<endl;
        i+=1;
    }
}
int main(){
    int b;
    cout<<"Which number's table do you want: ";
    cin>>b;
    my(b);
}