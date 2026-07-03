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
    int freq=0,ans=arr[0];
    for(int i=0;i<arr.size();i++){
       if(freq==0){
           ans=arr[i];
       }
       if(ans==arr[i]){
           freq++;
       }
       else{
           freq--;
       }
    }
    cout<<"Majority Element is "<<ans<<" "<<"repeated by "<<freq+1<<endl;
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
