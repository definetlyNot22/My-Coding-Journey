#include <iostream>
using namespace std;
void createarray(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<"Element "<<i+1<<":";
        cin>>arr[i];
    }
}
void reversearray(int* arr,int size){
    int temp;
    for(int i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    cout<<endl;
}
void displayarray(int* arr,int size){
    cout<<"Array elements: ";
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

int main() {
    // Write C++ code here
    int size;
    cout<<"enter any size of the array:";
    cin>>size;
    int* arr=new int[size];
    createarray(arr, size);
    displayarray(arr, size);
    reversearray(arr, size);
    displayarray(arr, size);

    return 0;
}