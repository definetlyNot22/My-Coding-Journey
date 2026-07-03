#include <iostream>
using namespace std;
void fibonacci(int n){
    int t1= 0, t2= 1, next_term=0;
    cout<<"The fibonacci series: "<< t1 <<", "<< t2 <<", ";
    next_term=t1+t2;
    for(int i=3;i<=n;i++){
        cout<<next_term<<", ";
        t1=t2;
        t2=next_term;
        next_term=t1+t2;
    }
}
int main() {
    int n;
    cout<<"No. of terms:";
    cin>>n;
    fibonacci(n);

    return 0;
}
