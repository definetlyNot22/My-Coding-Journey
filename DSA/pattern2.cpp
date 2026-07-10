#include <iostream>
using namespace std;

int main() {
    int n=4;
    char ch='A';
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        } 
        for(int j=0;j<n-i;j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }

    return 0;
}