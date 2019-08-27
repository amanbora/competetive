#include<iostream>
#include<string.h>

using namespace std;


int subString(string str, long n, long p, char c)
{
     long m=0;
    // Pick starting point
    for (long len = 1; len <= n; len++)
    {
        // Pick ending point
        for (long i = 0; i <= n - len; i++)
        {
            long count=0; int flag=0;
            long j = i + len - 1;
            for (long k = i; k <= j; k++)
            {
                if(str[k]==c)
                   count++;

                if(count>p)
                    break;
            }    //cout << str[k];
             if(count==p)
               m++;
            //cout << endl;

        }
    }
    return m;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    long p;
    char c;
    cin>>p>>c;

    string s;
    cin>>s;
    //cout<<s<<"\n";
    long m=subString(s,s.length(),p,c);
    cout<<m<<"\n";
  }
}
