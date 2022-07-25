#include<iostream>
using namespace std;

void my(int a){
    int i=1;
    while(i<=a){
        int j,q=1;
        while(j<=a){
            cout<<q;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
int main(){
    int c;
    cout<<"how many lines do you want to print: ";
    cin>>c;
    my(c);
}