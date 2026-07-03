#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void inputselement(vector<int>&arr,int size){
    for(int i=0;i<size;i++){
        int Element;
        cout<<"Element "<<i+1<<": ";
        cin>>Element;
        arr.push_back(Element);
    }
}
void display(const vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<" "<<arr[i];
    }
}
void subarray(vector<int>& arr){
    int cursum=0, maxsum=INT_MIN;
    for(int val:arr){
        cursum+=val;
        maxsum=max(cursum,maxsum);
    }
    cout<<"The Maximum Subarray:"<<maxsum<<endl;
}

int main() {
    int size;
    cout<<"Enter size of the array:";
    cin>>size;
    vector<int>arr;
    inputselement({arr},size);
    cout<<"Array Elements: ";
    display({arr});
    cout<<endl;
    subarray({arr});

    return 0;
}
