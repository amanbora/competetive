#include<iostream>
#include<cstring>

using namespace std;




long gcd(long a, long b)
{
    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

// Function to return LCM of two numbers
long findlcm(long a, long b)
{
    return (a*b)/gcd(a, b);
}



int main(){

    int t;
    cin>>t;

    while(t--){

        long h1,w1,h2,w2;
        string s1,s2;

        cin>>h1>>w1;

        cin>>s1;

        cin>>h2>>w2;

        cin>>s2;

         long count=0;
        // char g1[1000][1000];
        // long k=0;
        // for(long i=0;i<h1;i++){
        //    for(long j=0;j<w1;j++)
        //      g1[i][j]=s1[k++];
        // }
        //
        //
        //
        //
        //
        //
        // char g2[1000][1000];
        // k=0;
        // for(long i=0;i<h2;i++){
        //    for(long j=0;j<w2;j++)
        //      g2[i][j]=s2[k++];
        // }
        //
        //
        //
        // if(h1==h2 && w1==w2){
        //
        //       for(long i=0;i<h2;i++){
        //          for(long j=0;j<w2;j++)
        //            { if(g2[i][j]==g1[i][j])
        //                count++;
        //             }
        //       }
        // }

        // else {

              long hf = findlcm(h1,h2);
              long wf = findlcm(w1,w2);

              // int fact1= (hf*wf) / (h1*w1);
              // int fact2= (hf*wf) / (h2*w2);

              string sn1,sn2,sn3,sn4;

              int flag=0;



              for(long i=0;i<s1.length();i++){
                 for(long j=1;j<=wf/w1;j++){
                    sn1=sn1+s1[i];
                 }
              }

              //cout<<sn1<<endl;

              long k1=0;


              while(k1<=sn1.length()){
                  for(long i=1;i<=hf/h1;i++){
                      sn3=sn3+sn1.substr(k1,wf);
                 }

                 k1=k1+wf;
              }
              //cout<<sn3<<endl;





              for(long i=0;i<s2.length();i++){
                 for(long j=1;j<=wf/w2;j++){
                    sn2=sn2+s2[i];
                 }
              }

              k1=0;



              while(k1<=sn2.length()){
                for(long i=1;i<=hf/h2;i++){
                 sn4=sn4+sn2.substr(k1,wf);

               }

               k1=k1+wf;

            }
            //cout<<sn4;
            //if(flag==0)sn4=sn1;

              //  cout<<sn3<<endl<<sn4<<endl;

              for(long i=0;i<hf*wf;i++){
                 if(sn3[i]==sn4[i])count++;
              }

        // }
        cout<<count<<endl;

    }
}
