#include<iostream>
using namespace std;




long chance=0;

int max(int a, int b){
   return a>b?a:b;
}





int tree(string row,string col,long i,long j,long ch){
    chance=ch;

    if(i==0){
      //cout<<ch<<" "<<col[j-1]<<"i"<<endl;
      return col[j-1];
      //return ch;
     }

    else if(j==0)
    {
      //cout<<ch<<" "<<row[i-1]<<"j"<<endl;
      return row[i-1];
      //return ch;
     }

    // else if(row[i-1]==0)
    //     return tree(row,col,i,j-1,chance+1);
    //
    // else if(col[i-1]==0)
    //     return tree(row,col,i-1,j,chance+1);

    else if(i>2 && j>2)
        return min ( ( tree(row,col,i-2,j,ch+2),  tree(row,col,i,j-2,ch+2 ) ), tree(row,col,i-1,j-1,ch+1) );

    else if(i>2 && j<2)
      return min (  tree(row,col,i-2,j,ch+2) , tree(row,col,i-1,j-1,ch+1) );

    else
       return  tree(row,col,i-1,j-1,ch+2) ;


    //if()
        //if(1)

}









int main(){

    long t,n,m,q,i,j;
    cin>>t;
    while(t--){


        string row,col,ans;

        cin>>col;
        cin>>row;
        // cout<<col<<endl<<row;

        cin>>q;

        for(int k=0;k<q;k++){
            cin>>i>>j;
            chance=0;



            char bin=tree(row,col,i,j,0);
            //cout<<"ans "<<bin<<endl;
            // int x=chance%2;
            // if(( bin=='0' && x==1 ) || ( bin=='1' && x==0 ))
            //     ans=ans+"1";
            // else if(( bin=='0' && x==0 ) || ( bin=='1' && x==1 ))
            //     ans=ans+"0";
            if(bin=='0')ans=ans+"0";
            else ans+="1";

        }
        cout<<ans<<endl;



    }
}
