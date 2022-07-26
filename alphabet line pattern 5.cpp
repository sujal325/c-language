#include<iostream>
using namespace std;
void my(int a){
    int i=1;
    while(i<=a){
        int j=1;
        char c='A',b=c;
        b=c+a-i;
        while(j<=i){
            b+=1;
            cout<<b;
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