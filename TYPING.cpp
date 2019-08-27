#include<iostream>
#include<unordered_set>
#include<string>
//#include<bits/stdc++.h>
using namespace std;

int main(){

   int t;
   cin>>t;

   while(t--)
   {
       int n;
       cin>>n;

       unordered_set<string> ss;
       string arr[105];

       int taken=0;
       // int rep[105]={0};
       string s;

       int sum=0;



       unordered_set<string> :: iterator itr=ss.begin();

       for(int i=0;i<n;i++){
           cin>>s;

           if(ss.find(s)!=ss.end())
              {
                // cout<<s<<endl;
                 sum+=s.length()*2;
                 for(int p=0;p<s.length()-1;p++){
                     if(s[p]=='d' || s[p]=='f'){
                        if(s[p+1]=='d' || s[p+1]=='f')
                           sum+=2;
                     }
                     else if(s[p]=='j' || s[p]=='k'){
                        if(s[p+1]=='j' || s[p+1]=='k')
                           sum+=2;
                     }
                   }


             }

           else
               ss.insert(s);
       }



       taken=sum/2;
       //cout<<taken<<endl;


       for(itr=ss.begin(); itr!=ss.end(); itr++){
             string s=*itr;
             taken+=s.length()*2;

             for(int j=0;j<s.length()-1;j++){
                 if(s[j]=='d' || s[j]=='f'){
                    if(s[j+1]=='d' || s[j+1]=='f')
                       taken+=2;
                 }
                 else if(s[j]=='j' || s[j]=='k'){
                    if(s[j+1]=='j' || s[j+1]=='k')
                       taken+=2;
                 }

             }

          //  cout<<taken<<endl;

             //ans+=taken[i];



         }





         //
         // for(itr=ss.begin(); itr!=ss.end(); itr++){
         //   //  cout<<taken[i]<<"   "<<rep[i]<<endl;
         //   //  taken[i]+=float(rep[i])*(taken[i]/2.0);
         //     ans+=taken[i];
         // }


         cout<<taken<<endl;
         ss.clear();

       }


   }
