#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main() {
    int n;
    cout<<"Enter any no:";
    cin>>n;
    cout<<factorial(n);
   
    return 0;
}
