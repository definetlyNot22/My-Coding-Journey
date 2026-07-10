#include <iostream>
#include<climits>
using namespace std;
void CreateArray(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<"Element "<<""<<i+1<<": ";
        cin>>arr[i];
    }
}
void DisplayArray(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int* arr=new int[size];
    CreateArray(arr,size);
    cout<<"Array Elements:";
    DisplayArray(arr,size);
    int small= INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    cout<<"Smallest Element: "<<small;

    return 0;
}
