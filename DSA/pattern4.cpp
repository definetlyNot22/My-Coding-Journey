// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cout<<"Enter no. of terms:";
    cin>>n;
    for(int i=0;i<n;i++){
       for(int j=0;j<n-i-1;j++){
           cout<<" ";
       }
        cout<<"*";
        if(i!=0){
            for(int j=0;j<2;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}