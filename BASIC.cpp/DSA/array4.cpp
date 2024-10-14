#include<iostream>
using namespace std;
int main(){
int a[10]={0};
int b[10]={5};
int c[10];
for(int i =0;i<10;i++){
    c[i]=5;
}
cout<<"Element of array a\n";
for(int i =0; i <10; i++){
    cout<<a[i]<<" ";
}
cout<<"Element of array b\n";
for(int i =0; i<10;i++){
    cout<<b[i]<< " ";
}
cout<<"Element of array c\n";
for(int i=0;i<10; i++){
    cout<<c[i]<<" ";
}
return 0;
}