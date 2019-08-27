#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;

    int n;

    cin>>n;

    vec.push_back(n);

    vector<int>:: iterator itr;

    // auto itr = vec.begin();

    for(itr=vec.begin();itr!=vec.end();itr++){

        cout<< *itr<<endl;
    }
    vec.insert(1,2);
    vec.delete(vec[0]);

}
