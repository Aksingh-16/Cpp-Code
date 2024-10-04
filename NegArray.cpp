//Print all the negative number in array 
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6,-5,-9,-7};
    int size=8;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            continue;
        }
        cout<<arr[i]<<" ";
 
}
}