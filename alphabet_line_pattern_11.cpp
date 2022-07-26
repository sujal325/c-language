#include<iostream>
using namespace std;
void my(int a){
    int i=1;
    while(i<=a){
        int j=1,k=1;
        j=a-(i-1);
        while(k<=j){
            cout<<k;
            k+=1;
        }
        int o=1;
        int s=i-1;
        while(o<=s){
            cout<<"*";
            o+=1;
        }
        int t=1;
        int r=i-1;
        while (t<=r){
            cout<<"*";
            t+=1;
        }
        int w=a-(i-1);
        while(w){
            cout<<w;
            w-=1;
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