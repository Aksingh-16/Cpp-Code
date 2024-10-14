#include<iostream>
using namespace std;

int main() {
    int i;
    cin >> i;
    int n = 1;//track the number of loop going to run
    int sum=0;
    while (i >= n) {
        int no;
        cin>>no;
        sum=sum+no;
        //cout << n << endl;
        n = n + 1;
    }
    cout<<sum;
    return 0;
}
