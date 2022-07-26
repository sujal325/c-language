#include<iostream>
using namespace std;
void my(int a){
    int i=1,t=1;
    char c='A',b;
    while(i<=a){
        int j=1;
        while(j<=a){
            b=c+(t-1);
            cout<<b;
            t+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}

int main(){
    int n;
    cout<<"how many numbers of line of code do you want to print: ";
    cin>>n;
    my(n);
}