#include<iostream>
using namespace std;
void my(int a){
    int i=1;
    while(i<=a){
        int space=a-i;
        while(space){
            cout<<" ";
            space-=1;
        }
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
    int n;
    cout<<"how many numbers of line of code do you want to print: ";
    cin>>n;
    my(n);
}