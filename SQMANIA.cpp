#include<iostream>
#include<math.h>
using namespace std;
typedef long double ll;
typedef long long int lg;
int main(){

  long n;
  ll ans=0;

  cin>>n;
   long *side=new long[1000000000];

  for(int i=0;i<n;i++)
      cin>>side[i];

  if(n==1)
      ans=4*side[0];

  else{

     long *dis=new long[1000000000];

      for(int i=0;i<n-1;i++)
         cin>>dis[i];


      long minx=0,miny,x1=side[0],x2=side[0],y1=0,y2=side[0];

      for(int i=0;i<n-2;i++){

           y2=side[i+1];

           if(i==0)
           { minx=side[i+1]+dis[i]+side[i];
             miny=side[i+1];
           }
           else if(dis[i!=0]) {
             minx=side[i+1]+dis[i];
              miny = abs(y2-y1);
            }

            else if(i!=dis[i]==0)
            {
              minx=0;
              miny=0;
            }


            y1=y2;
            //cout<<ans<<endl;
            ans = ans +  4*side[i] +  pow((pow(minx,2.0)+pow(miny,2.0)),0.5);

       }
       if(n==2){
          minx = side[n-2]+dis[n-2];
          miny = side[n-1];
        }
        else{
          minx=dis[n-2];
          miny=abs(side[n-1]-side[n-2]);

        }
       //cout<<miny<<endl<<minx<<endl;
       //cout<<sqrt(pow(minx,2)+pow(miny,2))<<endl;
       ans= (ans + 4*(side[n-2]+side[n-1]) + sqrt(pow(minx,2.0)+pow(miny,2.0)));


   }
   ans=floor(ans);
   cout<<lg(ans);
}
