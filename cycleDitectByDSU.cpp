// #include <bits/stdc++.h>
// using namespace std;
// int par[1005];
// int group_size[1005];;
// int dsu_find(int node)
// {
//     if(par[node]==-1)
//     {
//         return node;
//     }
//     int leader=dsu_find(par[node]);
    
//         par[node]=leader;
//     return leader;
    
// }

// void dsu_union (int node1,int node2)
// {
//     int leaderA=dsu_find(node1);
//     int leaderB=dsu_find(node2);

//     if(group_size[leaderA]>group_size[leaderB])
//     {
//         par[leaderB]=leaderA;
//         group_size[leaderA]+=group_size[leaderB];
//     }
//     else 
//     {
//         par[leaderA]=leaderB;
//         group_size[leaderB]+=group_size[leaderA];
//     }
// }
// int main() {
//      int n,e;
//      cin>>n>>e;
//      memset(par,-1,sizeof(par));
//      memset(group_size,1,sizeof(group_size));
//      int cycle = 0;
//      while(e--)
//      {
//         int a,b;
//         cin>>a>>b;

//         int leaderA=dsu_find(a);
//         int leaderB=dsu_find(b);
//         if(leaderA==leaderB)
//         {
//             cycle++;
//         }
//         else
//         {
//             dsu_union(a,b);
//         }

//      }   

    
//         cout<<cycle<<endl;
    
//       return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int par[1005];
int group_size[1005];

int dsu_find(int node) {
    if (par[node] == -1)
        return node;
    return par[node] = dsu_find(par[node]);
}


void dsu_union(int node1, int node2) {
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (leaderA == leaderB) return; 

    if (group_size[leaderA] > group_size[leaderB]) {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    } else {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    
    memset(par, -1, sizeof(par));
    for(int i = 1; i <= n; i++) group_size[i] = 1;

    int cycle_edges = 0;

    for(int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if (leaderA == leaderB) {
            
            cycle_edges++;
        } else {
            dsu_union(a, b);
        }
    }

    cout << cycle_edges << endl;
    return 0;
}