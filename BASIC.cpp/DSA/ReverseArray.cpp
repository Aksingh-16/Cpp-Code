#include<iostream>
#include<vector>
using namespace std;
//Create the Funtion
vector<int> reverse(vector<int>){
    int starting=0;
    vector<int>v;
    int end =reverse(v).size()-1;
    while(starting<=end){
        swap(v[starting],v[end]);   
        
        starting++;
        end--;
    }
    return v;
    }

int main(){
    vector<int>v;
    v.push_back(12);
    v.push_back(15);
    v.push_back(53);
    v.push_back(75);
    v.push_back(32);
    v.push_back(54);
    vector<int>ans= reverse(v);
    
}