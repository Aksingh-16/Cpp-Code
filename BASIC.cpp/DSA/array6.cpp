//find k largest elements in a given array of integers
#include<iostream>
#include<algorithm>

using namespace std;
void kLargest (int nums[],int n , int k){

sort(nums,nums+n,greater<int>());
   
cout<<"\nLargest "<<k<<"\nElements  ";

for(int i=0;i<k;i++)
cout<<nums[i]<<" ";
}

int main(){
   int nums[]={4,5,3,2,5,7,9,87,64,63};
   int n=sizeof(nums)/sizeof(nums[0]);

   cout<<"Original array : ";
   for(int i=0;i<n;i++)
   cout<<nums[i]<<" ";

   int k=4;
   kLargest(nums,n,k);
}