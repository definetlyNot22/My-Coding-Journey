#include <iostream>
#include <climits>
using namespace std;
void CreateArray(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<"Elements"<<""<<i+1<<": ";
        cin>>arr[i];
    }
}
void DisplayArray(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
}
int main() {
    int size;
    cout<<"Enter any size:";
    cin>>size;
    int* arr=new int[size];
    CreateArray(arr,size);
    cout<<"Array Elements:";
    DisplayArray(arr,size);
    cout<<endl;
    int large=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    cout<<large;

    return 0;
}
