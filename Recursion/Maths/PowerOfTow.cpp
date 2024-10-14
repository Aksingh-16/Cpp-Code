#include<iostream>
#include<cmath>
using namespace std;
//Funtion to check weather the number is a power of two or not
string Power_of_two(int n){

    for (int x=0; x< INT_MAX;x++){
        if(pow(2,x)==n){
            return "True";
        }
        else if (pow(2,x)>n){
            break;
        }
        
      
    }
    return "False";

}
int main(){
    //test cases
    cout<<"Enter any number"<<endl;
    int n;
    cin>>n;
    cout<<Power_of_two(n)<<endl;
}