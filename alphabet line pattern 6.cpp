#include<iostream>
using namespace std;
void my(int a){
    int i=1;
    char c='A',b;
    b=c;
    while(i<=a){
        int j=1;
        while(j<=a){
            cout<<b;
            b+=1;
            j+=1;
        }
        cout<<endl;
        b-=2;
        i+=1;
    }
}

int main(){
    int n;
    cout<<"how many numbers of line of code do you want to print: ";
    cin>>n;
    my(n);
}