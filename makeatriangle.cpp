#include<iostream>
using namespace std;

int main(){

    int a, b, c;

    cin>>a>>b>>c;

    int ans=0;

    int grt,lsr,lea;

    if(a>b)
    {  if(a>c)
      {    grt=a;
          if(b>c)
           {  lsr=b;
               lea=c;
           }
           else
           {  lsr=c;
               lea=b;
           }
         }
       else
       {
          grt=c;
          lsr=a;
           lea=b;
         }
    }

    else{
       if(b>c)
        {  grt=b;
           if(a>c)
            {  lsr=a;
                lea=c;
            }
            else
            {  lsr=c;
                lea=a;
            }

        }
        else
        {  grt=c;
           lsr=b;
           lea=a;
        }

     }
     //cout<<grt<<"  "<<lsr<<"  "<<lea<<endl;
      while(grt>=(lsr+lea)){

          ans++;
          lsr++;
          if(lsr<lea){
              int temp=lsr;
              lsr=lea;
              lea=temp;
          }

      }


    cout<<ans;

}
