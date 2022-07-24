#include <iostream>
#include <cctype>
using namespace std;

void myfunc(char a){
    if(islower(a)){
        cout<<"This is in lowercase.";
    }
    else if(isupper(a)){
        cout<<"This is in uppercase.";
    }
    else{
        cout<<"This is number.";
    }
}
int main(){
    char b;
    cin>>b;
    myfunc(b);
}