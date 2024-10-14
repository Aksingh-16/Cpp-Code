#include<iostream>
using namespace std;
//funtion 
void checkEvenOdd(){

    int a;
    cout<<"ENter the number ";
    cin>>a;
    if(a%2==0){
        cout<<"ENtered number is Even"<<endl;
    }
    else
    cout<<"The NUmber is ODD"<<endl;
}
int main(){
    //Calling the funtion
    checkEvenOdd();
    return 0;
}