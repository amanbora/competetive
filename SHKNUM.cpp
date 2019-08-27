#include<iostream>
#include<math.h>

using namespace std;
int main(){

    long t;
    cin>>t;
    while(t--){

      long num;
      cin>>num;


      int k1,k2;
      long count;


      if(num==1)
        count=2;



      else {

              for(int i=0;i<=30;i++){
                if(num<pow(2,i)){
                  k1=i;
                  break;
                }
              }

              if(num==pow(2,k1-1))
                  count=1;



              else
              {

                    long num1=num-pow(2,k1-1);

                    for(int i=0;i<=30;i++){
                      if(num1<pow(2,i)){

                        k2=i;
                        break;

                      }
                    }

                    long count1=num1-pow(2,k2-1);
                    long count2=pow(2,k2)-num1;
                    long count3=pow(2,k1)-num+1;

                    if(count1<=count2 && count1<=count3)
                       if(k2-1 != k1-1)
                         count=count1;
                       else
                         count=count2<count3?count2:count3;

                    else if(count2<=count1 && count2<=count3)
                        if(k2 != k1-1)
                          count=count2;
                        else
                          count=count1<count3?count1:count3;
                    else
                        count=count3;


                }
          }

        cout<<count;
        cout<<"\n";

    }

}
