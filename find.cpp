// #include <bits/stdc++.h>
// using namespace std;
// int par[105];
// void find(int node)
// {
//     while(par[node]!=-1)
//     {
//         cout<<node<<endl;
//         node=par[node];
//     }
//     cout<<node<<endl;
// }
// int main() {
//      memset(par,-1,sizeof(par));
//      par[0]=1;
//      par[1]=-1;
//      par[2]=1;
//      par[3]=1;
//      par[4]=5;
//      par[5]=3;

//      find(4);
//     return 0;
// }

// Recursionnnnn Naive approch;
#include <bits/stdc++.h>
using namespace std;
int par[105];
void find(int node)
{

    cout<<node<<endl;
    if(par[node]==-1)
    {
        return;
    }
    find(par[node]);
    // while(par[node]!=-1)
    // {
    //     cout<<node<<endl;
    //     node=par[node];
    // }
    // cout<<node<<endl;
}
int main() {
     memset(par,-1,sizeof(par));
     par[0]=1;
     par[1]=-1;
     par[2]=1;
     par[3]=1;
     par[4]=5;
     par[5]=3;

     find(4);
    return 0;
}
