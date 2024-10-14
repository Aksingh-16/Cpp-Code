#include<iostream>
using namespace std;

//Calling the funtion

int sum(int , int );

//calling the main funtion

int main(){
    cout<<sum(50,60);
    return 0;
}

//calling funtion after main funtion decleration 

int sum( int num1 , int num2){
    int num3= num1+num2;
    return num3;
}
