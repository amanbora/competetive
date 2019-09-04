using namespace std;
void findans (vector<int> &A, int str, int end, string soln ){
    soln += to_string(A[str])+" ";
    if(str == end-1)return;
    for(int i=str+1;i<end;i++){
            cout<<soln<<A[i]<<" ] ";
            findans(A,i,end,soln);

    }
}




vector<vector<int> > Solution::subsets(vector<int> &A) {

    sort(A.begin(),A.end());
    cout<<"[] ";
    for(int i=0;i<A.size();i++){
            cout<<"["<<A[i]<<" ] ";
            findans(A,i,A.size(),"[");
    }
    vector<vector<int> > a;
    return a;

}
