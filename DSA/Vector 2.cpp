#include <iostream>
#include <vector>
using namespace std;
int linearsearch(vector<int>vec,int target){
    for(int i=0;i<vec.size();i++){
        if(vec[i]==target){
            return i;
        }
    }
    return -1;
}
void reverse(vector<int>& vec){
    int temp=0;
    for(int i=0;i<vec.size()/2;i++){
        temp=vec[i];
        vec[i]=vec[vec.size()-i-1];
        vec[vec.size()-i-1]=temp;
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int>vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    cout<<linearsearch(vec,40)<<endl;
    reverse(vec);

    return 0;
}
