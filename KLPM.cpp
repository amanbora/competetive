#include<iostream>
#include<algorithm>
#include<string.h>
#include<cstring>

using namespace std;

int isPalin(string &str, int i, int j){
    string s=str.substr(i,j);
    reverse(str.begin(),str.end());
    strcmp(str,s)?return 1: return 0;
}

int count(string &str, int i, int j){

    str = str.substr(i,j);
    if(str.length()==1)return 1;

    else{
        if( isPalin(str,i) ){
           return count(str, i+1,j)+count(str,i,j-1)+1;
        }

        return count(str, i+1, j)+ count(str, i,j-1);
    }
}




int main(){

    string str;
    cin>>str;


    cout<<count(str);




}
