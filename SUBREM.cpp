#include<iostream>
#include<vector>
typedef long long int ll;

using namespace std;


struct node{
  ll val;
  vector< node * > child;
  ll subsum;

};

node* newNode(ll val){
    node* temp = new node;
    temp->val=val;
    return temp;
}


void calcSubSum(node* root){
    // ll val=root->val;
    // int sub=root->child.size();
    //
    // for(int i=0;i<sub;i++){
    //     // calcSubSum(root->child[i]);
    //     root->subsum+=root->child[i]->subsum;
    //
    // }
    if(root->child.size()==0)
    {
      root->subsum=root->val;
      return;
    }


    for(int i=0;i<root->child.size();i++)
    {
        root->subsum+=root->child[i]->subsum;

    }



}


ll ans(vector< node* >tree,int n,ll x){
    ll ans=tree[0]->subsum;
    // cout<<ans<<"1"<<endl;
    for(int i=0;i<n;i++){
        if(tree[i]->subsum<(-x)){
          ans=ans-tree[i]->subsum-x;
          // cout<<ans<<"2"<<endl;
        }

        else{
            int n=tree[i]->child.size();
            for(int j=0;j<n;j++){
              if(tree[i]->child[j]->subsum<(-x))
                  ans=ans-tree[i]->child[j]->subsum-x;
            }
        }
    }

    return ans;

}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        ll x;
        cin>>x;

        vector< node* > tree;
        for(int i=0;i<n;i++){
            ll v;
            cin>>v;
            tree.push_back(newNode(v));
        }

        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            tree[a-1]->child.push_back(tree[b-1]);
        }
        for(int i=n-1;i>=0;i++){
            calcSubSum(tree[i]);
        }

        // for(int i=0;i<n-1;i++){
        //     cout<<i+1<<"  "<<tree[i]->child.size();
        //     cout<<endl;
        // }
        cout<<ans(tree,n,x)<<endl;
    }


}
