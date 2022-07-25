#include<iostream>
using namespace std;
int my(int a){
    int i=1;
    while(i<=a){
        int j=1;
        while(j<=i){
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
int main(){
    int c;
    cout<<"how many lines of star do you want to print: ";
    cin>>c;
    my(c);
}