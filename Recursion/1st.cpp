//find the sum of all element in an array using recursion
#include <iostream>
using namespace std;
int arraySum(int arr[], int size ){
    if (size==0)
    return 0;
else 
return arr[size-1]+ arraySum(arr,size-1);
}
int main(){
    int nums[]={1,2,3,5,6,78,9,8};
    int size =sizeof(nums)/sizeof(nums[0]);
    cout<<"Array elements"<<endl;
    for(size_t i=0; i<size; i++){
        cout<<nums[i]<<' ';
    }
    int sum=arraySum(nums,size);
    cout<<endl<<"Sum of all elements in an array is "<<sum<<endl;
    return 0;
}

