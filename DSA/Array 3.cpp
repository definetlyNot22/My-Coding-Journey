#include <iostream>
using namespace std;
void CreateArray(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<"Element"<<" "<<i+1<<": ";
        cin>>arr[i];
    }
}
void DisplayArray(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void ReverseArray(int* arr,int size){
    int temp=0;
    for(int i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}
int linearsearch(int* arr,int size,int index){
    for(int i=0;i<size;i++){
        if(arr[i]==index){
            return i;
        }
    }
    return -1;
}
int main() {
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int* arr=new int[size];
    CreateArray(arr,size);
    cout<<"Array Elements:";
    DisplayArray(arr,size);
    ReverseArray(arr, size);
    cout<<endl;
    cout<<"Reversing elements:";
    DisplayArray(arr,size);
    cout<<endl;
    int index;
    cout<<"Enter the element:";
    cin>>index;
    int Ans=linearsearch(arr, size,index);
    if(Ans!=-1){
        cout<<"Element Found At index: "<<Ans<<endl;
    }else{
        cout<<"Element not Found At index: "<<endl;
    }

    return 0;
}
