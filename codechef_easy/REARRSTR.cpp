#include<iostream>
#include<map>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int flag=0;
        int freq[26][2];

        int p = ceil(s.length()/2);
        for(int i=0;i<s.length();i++){
            freq[s[i]-97][0]++;
            freq[s[i]-97][1]=s[i]-97;
            if(freq[s[i]-97][0]>p)
              {
                flag=1;
                break;
              }

        }


        if(flag)cout<<-1<<endl;
        else
        {
              qsort(freq, 26, sizeof(*freq),
              [](const void *arg1, const void *arg2)->int
              {
                  int const *lhs = static_cast<int const*>(arg1);
                  int const *rhs = static_cast<int const*>(arg2);
                  return (lhs[0] < rhs[0]) ? -1
                      :  ((rhs[0] < lhs[0]) ? 1
                      :  (lhs[1] < rhs[1] ? -1
                      :  ((rhs[1] < lhs[1] ? 1 : 0))));
              });




              string ans;
              sort(freq,freq+26,greater<int>());
              for(int i=0;i<26;i++){
                  int j=1;
                  while(freq[i][0]){
                      ans+=freq[i][1];
                      freq[i][0]--;
                      if(freq[j][0]){
                        ans+=freq[j][1];
                        freq[j][0]--;
                      }
                      else
                        j++;
                  }
                  cout<<ans<<endl;
              }
        }

    }
}
