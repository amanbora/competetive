#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<iterator>

typedef long long int ll;
using namespace std;
int main(){

      ll t;
      cin>>t;

          vector<string> vec;

          for(int i=0;i<=t;i++ ){
              string s;
              getline(cin,s);

              vec.push_back(s);
          }

          vector< vector<string> > ss;
          vector< vector<string> > ::iterator it;
          for(int i=1;i<=t;i++){
                if(vec[i][0]=='H'){

                    vector<string> shor;
                    vector<string>::iterator itr;
                    int str=4;
                    for(int j=4; j<=vec[i].length();j++){

                        if(vec[i][j]==' ' )
                          {
                            shor.push_back(vec[i].substr(str,j-str));
                            str=j+1;

                            // cout<<shor[0];

                          }


                    }
                    ss.push_back(shor);
                    for(int i=)

                }
                // cout<<endl;
          }




}
