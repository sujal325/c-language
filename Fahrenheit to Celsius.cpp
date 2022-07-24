#include<iostream>
using namespace std;
void my(int a){
    int m;
    m=(a-32)*5/9;
    cout<<a<<" Fahrenheit is equal to "<<m<<" Calcius.";
}
int main(){
    int b;
    cout<<"Type Fahrenheit: ";
    cin>>b;
    my(b);
}