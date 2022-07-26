#include<iostream>
using namespace std;
void my(int a){
    int i=1;
    int r=1;
    while (i<=a){
        int j=1;
        while(j<=a){
            cout<<r<<" ";
            r+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}

int main(){
    int b;
    cout<<"Type numbers of lines you want: ";
    cin>>b;
    my(b);
}