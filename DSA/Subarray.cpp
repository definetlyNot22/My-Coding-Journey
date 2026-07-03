#include <iostream>
using namespace std;
void CreateArray(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }
}
void DisplayArray(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int size;
    cout<<"Enter Any Size:";
    cin>>size;
    int* arr=new int[size];
    CreateArray(arr,size);
    cout<<"Array Elements:";
    DisplayArray(arr,size);
    cout<<endl;
    for(int st=0;st<size;st++){
        for(int end=st;end<size-1;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
