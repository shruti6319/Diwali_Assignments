#include<iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"enter string";
    cin>>str;

    string rev=" ";

    for(int i=str.length()-1;i>=0;i--){
        rev = rev+str[i];
    }

    if(str==rev){
        cout<<"it is palindrome";
    }
    else{
        cout<<"ist is not a palindrome";
    }
    return 0;
}
