#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        float bound[55];
        float pos[55];
        float vel[55];
        float chef[55];

        for(int i=0;i<n;i++){
              cin>>bound[i];
        }
        for(int i=0;i<n;i++){
              cin>>pos[i];
        }
        for(int i=0;i<n;i++){
              cin>>vel[i];
        }
        for(int i=0;i<n;i++){
              cin>>chef[i];
        }
        // float tm[55];

                set< float > ss;

                vector< pair<float,int> > tm;
                for(int i=0;i<n;i++){
                    ss.insert((-pos[i]+chef[i])/vel[i]);

                    if(vel[i]<0){
                        tm.push_back(make_pair((pos[i])/abs(vel[i]),i));
                    }
                    else
                        if(vel[i]>0)
                            tm.push_back(make_pair((bound[i]-pos[i])/vel[i],i));
                }

                // for(int i=0;i<n;i++){
                //       cout<<tm[i]<<endl;
                // }

                sort(tm.begin(),tm.end());
                // cout<<tm[0].first;
                int i = tm[0].second;
                float ti=tm[0].first;

                float sp;
                if(ss.size()==1){
                    sp=0;
                }
                else
                  {
                      if(vel[i]<0){
                        sp=chef[i]/ti;
                    }
                    else{
                        sp=abs(bound[i]-chef[i])/ti;
                    }
                  }

                printf("%.4f",sp);
                cout<<endl;



      }
}
