#include<iostream>
#include<deque>
#include<iterator>


using namespace std;




int getMaxLength(deque<bool>arr, int n, int k)
{
    int count = 0;
    int result = 0;



    for (auto i = arr.begin(); *i!=arr.end()  ; i++)
    {
        if (*i == 0)
            count = 0;

        else if(result>k)
            return k;

        else
        {
            count++;
            result = max(result, count);
        }
    }

    return (result>k?k:result);
}



int main(){
    int n,q,k;

    cin>>n>>q>>k;

    deque<bool> vec;

    for(int i=0;i<n;i++){
        bool a;
        cin>>a;
        vec.push_back(a);
    }

    string quer;
    cin>>quer;

    int len = getMaxLength(vec,n,k);

    int flag=0;
    for(int i=0;i<q;i++){
        if(quer[i]=='?'){

            if(flag==1){
              len = getMaxLength(vec,n,k);
            }
           cout<<len<<endl;
           flag=0;
        }

        else{

            vec.insert(vec.begin(),vec[n-1]);
            if(vec.back())
                flag=1;

        }
    }
}
