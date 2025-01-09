#include <iostream>
#include <climits>
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
    int Max_sum=INT_MIN;
    for(int st=0;st<size;st++){
        int Sum=0;
        for(int end=st;end<size-1;end++){
            Sum+=arr[end];
            Max_sum=max(Sum, Max_sum);
        }        
    }
    cout<<"Maximum Sum: "<<Max_sum<<endl;
        

    return 0;
}
