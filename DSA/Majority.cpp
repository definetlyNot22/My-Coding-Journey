#include <iostream>
#include <vector>
using namespace std;
void input(vector<int>& arr,int size){
    for(int i=0;i<size;i++){
        int element;
        cout<<"Element "<<i+1<<": ";
        cin>>element;
        arr.push_back(element);
    }
}
void display(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<" "<<arr[i];
    }
}
void majority(vector<int>& arr){
    for(int val : arr){
        int freq=0;
        int n=arr.size();
        for(int el : arr){
            if(el==val){
                freq++;
            }
        }
        if(freq>n/2){
            cout<<"Majority Elements "<<val<<" "<<"Repeted by"<<freq<<" "<<endl;
            return;
        }
    }
    cout<<"No Majority Elements: "<<endl;
}
int main() {
    int size;
    cout<<"Enter the size:";
    cin>>size;
    vector<int>arr;
    input({arr},size);
    cout<<"Array Elements:";
    display({arr});
    cout<<endl;
    majority({arr});

    return 0;
}
