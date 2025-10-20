#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter a number:";
    cin>>n;
    int temp=n;
    while(temp!=0){
        int rem=temp % 10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
        }
        if(n==sum){
            cout<<"it is armstrong no.";
        }
        else{
            cout<<"it is not armstrong no.";
        }
        return 0;
}
