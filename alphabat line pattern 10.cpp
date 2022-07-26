#include<iostream>
using namespace std;
void my(int a){
    int i=1;
    while(i<=a){
        int k=1,space1=a-i,space2;
        while(space1){
            cout<<" ";
            space1-=1;
        }
        while(k<=i){
            cout<<k;
            k+=1;
        }
        int l=i-1;
        while(l){
            cout<<l;
            l-=1;
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