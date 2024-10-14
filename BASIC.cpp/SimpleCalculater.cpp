#include<iostream>
using namespace std;
int main(){
    double i ,j;
    char op;
    cin>>i>>op>>j;
    switch(op){
        case '+': cout<<i+j<<endl;
        break;
        case '-': cout<<i-j<<endl;
        break;
        case'/':cout<<i/j<<endl;
        break;
        case'*': cout<<i*j<<endl;
        break;
        default : cout<<"invalid";
    }
}