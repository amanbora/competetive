// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;


int primennn(int arr[],int n){



  int count=0;

  for(int i=0;i<n;i++)

       {

             int counter=0;

             for(int j=2;j<arr[i];j++)

             {
                   if(arr[i]%j==0)
                 {
                         counter=1;

                         break;

                   }
             }

             if(counter==0)

             {

                   count++;

             }

     }
     return count;
   }





int primeN(set<int>ss,int n){

  set<int>::iterator itr;

  int count=0;

  for(itr=ss.begin();itr!=ss.end();itr++)

       {

             int counter=0;

             for(int j=2;j<*itr;j++)

             {
                   if(*itr%j==0)
                 {
                         counter=1;

                         break;

                   }
             }

             if(counter==0)

             {

                   count++;

             }

     }
     return count;
   }





int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}



bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}














int main(){

    int t=0;
    cin>>t;



    while(t--){


      vector<int> prime ;
      prime.push_back(29);
      prime.push_back(31);
      prime.push_back(37);
      prime.push_back(41);
      prime.push_back(47);
      // prime.push_back(29);

      //cout<< prime[14];

      vector<int>::iterator itr;

      // for(int i=2;i<=50;i++){
      //     prime.push_back(i);
      // }

        set<int>ss;

          set<int>primelist;
          set<int>::iterator pl;

        int n;
        cin>>n;
        int ans=0;




        int arr[55];
        int f2=0,f3=0,f5=0;


        int GCD,flag=0;

        for(int i=0;i<n;i++)
        {
           cin>>arr[i];




           if(isPrime(arr[i]))
           {

             primelist.insert(arr[i]);

           }

           //if(arr[i]!=2 && arr[i]!=3 && arr[i]!=5 && arr[i]!=7 && arr[i]!=11 && arr[i]!=13 && arr[i]!=17 && arr[i]!=19 && arr[i]!=23)
           // if(isPrime(arr[i]) && ss.find(arr[i])!=ss.end())
           //  {
           //
           //
           //  }
            else if(!isPrime(arr[i]) && flag==0)
                GCD=arr[i];
               ss.insert(arr[i]);
        }

        int primenum=primeN(ss,ss.size());

        int pp=primennn(arr,n);


        set<int> ::iterator itr1;
        set<int> ::iterator itr2;

        int fl=0;



        if(ss.size()==1 && n>1){
            ans=1;
            for(itr=prime.begin();itr!=prime.end();itr++){
                        if(*itr!=arr[0])
                        {    arr[0]=*itr;
                                break;
                        }
             }
        }

        else{

              if(ss.find(29)!=ss.end() || ss.find(31)!=ss.end() ||ss.find(37)!=ss.end()
                  ||ss.find(41)!=ss.end() ||ss.find(43)!=ss.end() ||ss.find(47)!=ss.end())
                {
                  fl=0;
                }



        // 2 2 3 3 5 5 10 10
            else{
              for(itr1=ss.begin();itr1!=ss.end();itr1++){
                  fl=0;
                  for(itr2=ss.begin();itr2!=ss.end();itr2++){
                  //  cout<<*itr2<<endl;
                      if(*itr1==*itr2);

                      else if(gcd(*itr1,*itr2)!=1){
                        fl=1;
                        break;
                      }
                  }
                  if(!fl)break;

              }
            }


          if(fl==0)
              ans=0;



          else{


            if(primenum==0){


                int flag=0;
                for(itr1=ss.begin();itr1!=ss.end();itr1++){
                    flag=0;
                    for(itr2=ss.begin();itr2!=ss.end();itr2++){
                        if(itr1==itr2)continue;
                        else if(gcd(*itr1,*itr2)!=1){
                          flag=1;
                          break;
                        }
                    }

                }

                if(flag==0)ans=0;
                else
                  {
                    ans=1;
                    arr[0]=47;
                  }
            }


          //case1


          //case 2

            else if(pp==n)ans=0;

           //case 3
            else if(n==1)
                ans=0;



            //case 4
            else if(n==2){
                if(gcd(arr[0],arr[1])==1)ans=0;
                else {
                    arr[0]=47;
                    ans=1;
                }
            }



           else {


                  // cout<<GCD<<endl;
                   int index=0;

                   for(int i=0;i<n;i++){
                       if(!isPrime(arr[i]))
                         GCD=gcd(GCD,arr[i]);
                       else index=i;

                   }

                   //cout<<GCD<<endl;

                   int ff=0;


                   if(GCD==1){

                         ans=0;
                         ff=1;


                     }

                    else {
                          int flag=0;
                          // 2 3 5 9    2 3 6     2 2 4    2 2 3 6   2 17 17 34
                          if(pp==(n-1)){
                              for(int i=0;i<n;i++){
                                  if(!isPrime(arr[i])){
                                  for(pl=primelist.begin();pl!=primelist.end();pl++){
                                      if(arr[i]%*pl!=0)
                                      {
                                          flag=1;
                                          break;
                                        }
                                    }
                                    if(flag)break;
                                  }
                              }
                            }

                          int element;
                          //  7 10 15        3 13 6 39    2 17 17 34
                          if(flag==0 && isPrime(GCD)) {
                            for(pl=primelist.begin();pl!=primelist.end();pl++){
                                //cout<<*pl<<endl;
                                element=*pl;
                                if(GCD%*pl==0)
                                {   ans=1;
                                    flag=1;
                                    int index=find(arr,arr+n,*pl)-arr;
                                    //cout<<index<<endl;
                                    for(itr=prime.begin();itr!=prime.end();itr++){
                                      if(gcd(*itr,arr[index])==1)
                                      {    arr[index]=*itr;
                                              break;
                                            }

                                      }
                                  }
                                  if(flag)break;
                                }
                              }
                            // }

                             // 7 20 25 35      7 10 15      7 7 28 24
                            pl=primelist.begin();
                            if(primelist.size()==1 && flag==0){
                                for(int i=0;i<n;i++){
                                    if(arr[i]%*pl==0 && arr[i]!=*pl){
                                        flag=1;
                                        ans=1;
                                        int index=find(arr,arr+n,*pl)-arr;
                                        for(itr=prime.begin();itr!=prime.end();itr++){
                                          if(gcd(*itr,arr[index])==1)
                                          {    arr[index]=*itr;
                                                  break;
                                                }

                                          }
                                          break;
                                        }
                                  }

                                }


                              // 2 3 7 42      7 7 28 24
                              else if(!isPrime(GCD)){
                                    for(pl=primelist.begin();pl!=primelist.end();pl++){
                                        //cout<<*pl<<endl;
                                        element=*pl;
                                        if(gcd(GCD,*pl)!=1)
                                        {
                                            flag=1;
                                            ans++;
                                            break;
                                          }
                                      }
                                      int index=find(arr,arr+n,element)-arr;
                                      for(itr=prime.begin();itr!=prime.end();itr++){
                                    if(gcd(*itr,arr[index])==1)
                                    {    arr[index]=*itr;
                                            break;
                                          }

                                    }

                              }


                              if(flag==0)
                                  {
                                    ans=0;
                                    //cout<<"flag"<<endl;
                                  }

                          }

                        }


                }
              }


        cout<<ans<<endl;
        for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";
        cout<<endl;
    }

}
