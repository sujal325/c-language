#include<iostream>
using namespace std;

void my(int a){
    int m=0,i=1;
    while (i<=a){
        m+=i;
        cout<<m<<endl;
        i++;
    }
}
int main(){
    int z;
    cin>>z;
    my(z);
}