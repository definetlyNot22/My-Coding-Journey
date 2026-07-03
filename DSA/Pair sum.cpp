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
void sum(vector<int>& arr,int target){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" and "<<arr[j];
            }
        }
    }
}
int main() {
    int size;
    cout<<"Enter the size:";
    cin>>size;
    vector<int>arr;
    input({arr},size);
    cout<<"Array elements:";
    display({arr});
    cout<<endl;
    int target;
    cout<<"Enter Any target:";
    cin>>target;
    sum({arr},target);
    return 0;
}
