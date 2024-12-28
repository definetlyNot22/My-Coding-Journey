#include <iostream>
using namespace std;
void createarray(int* arr,int size){
    for(int i=0;i<size;i++){
       cout<<"Element:"<<" "; 
       cin>>arr[i];
    }
}
void reversearray(int* arr,int size){
    for(int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
}
void displayarray(int* arr,int size){
    cout<<"Array elements: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int size;
    cout<<"Enter the size:";
    cin>>size;
    int* arr=new int[size];
    createarray(arr,size);
    displayarray(arr,size);
    cout<<"Array Before reversing"<<endl;
    reversearray(arr,size);
    displayarray(arr,size);
    cout<<"Array after reversing"<<endl;

    return 0;
}