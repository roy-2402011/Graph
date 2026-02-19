#include <bits/stdc++.h>
using namespace std;
int main() {
     int n,e;
     cin>>n>>e;
     int adj_mat[n][e];
     for(int i=0;i<e;i++)
     {
       for(int j=0;j<n;j++)
       {
        adj_mat[i][j]=0;
         if(i==j){
        adj_mat[i][j]=1;
       }

       

       }
      


     }

    memset(adj_mat,0,sizeof(adj_mat));

      for(int i=0;i<e;i++)
     {
        int a,b;
        cin>>a>>b;
        adj_mat[a][b]=1;
        adj_mat[b][a]=1;


     }

       for(int i=0;i<e;i++)
     {
       for(int j=0;j<n;j++)
       {
        cout<<adj_mat[i][j]<<" ";
       }
       cout<<"\n";

     }


    return 0;
}
