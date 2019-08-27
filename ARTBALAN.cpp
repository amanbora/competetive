#include<iostream>
#include<cstring>
#include<vector>
#include<math.h>
#include<algorithm>

typedef long long int ll;

using namespace std;

int factor(int len , int great){

  int min = 1000000;

  for (int i = 1; i <= len/2; ++i){

      if (len % i == 0 ){
          int sub = abs(i-great);

          if(min>sub)
            min = i;
      }
  }
  return min;
}


int main(){

    int t;
    cin>>t;

    while(t--)
    {
        char s[1000000];
        cin>>s;
        vector<int> vec;

        int freq[30]={0};

        ll sum=0 , charec=0;


        for(int i=0;i<strlen(s);i++){
            freq[(int)s[i] - 65]++;
        }

        for(int i=0;i<26;i++){
            if(freq[i])
            {
              vec.push_back(freq[i]);

              charec++;
            }

        }


        sort(vec.begin(),vec.end());

        int great = vec.back();


        int fac1 = factor( strlen(s), great );
        int fac2 = strlen(s)/fac1;

        // cout<<fac;

        int ans1=0, ans2=0;

        // for(int i=0; i<26; i++){
        //     if(freq[i]){
        //           ans1 += abs(fac1-freq[i]);
        //           ans2 += abs(fac2-freq[i]);
        //     }
        // }

        vector<int> :: iterator itr;
        itr=vec.begin();

        int temp = charec;

        while(charec!=fac1){
            ans1+= *itr;
            itr++;
            charec--;
        }

        // itr=vec.begin();
        //
        // while(itr!=vec.end()){
        //     if(*itr>fac2)
        //       ans2+=*itr-fac2;
        //     itr++;
        // }




        cout<<ans1;
        cout<<endl;
        vec.clear();

    }
}
