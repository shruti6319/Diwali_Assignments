#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter a no:";
    cin>>n;

    for(int i=1;i<=n;i++){
        sum = sum + (2*i-1);
    }
    cout<<"sum of first"<<n<<"even numbers are: "<<sum<<endl;
    return 0;
    
}