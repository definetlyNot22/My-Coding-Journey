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

int main() {
    vector<int>vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    cout<<linearsearch(vec,40);

    return 0;
}
