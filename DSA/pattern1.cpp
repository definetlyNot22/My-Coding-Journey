// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cout<<"Enter any no.:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<n+1;j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}