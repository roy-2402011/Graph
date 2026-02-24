#include <bits/stdc++.h>
using namespace std;
int main() {
 int n,e;
 cin>>n>>e;
 vector<int>adj_mat[n];
 while(e--)
 {
    int a,b;
    cin>>a>>b;
    adj_mat[a].push_back(b);
    adj_mat[b].push_back(a);

 }
 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    cout<<n<<"-> ";
    for(int x:adj_mat[n])
    {
        cout<<x<<" ";
    }
    cout<<endl;
 }
 
    return 0;
}
