// #include <bits/stdc++.h>
// using namespace std;

// vector<int> adj_list[1005];
// bool vis[1005];

// void bfs(int src)
// {
//     queue<int> q;
//     q.push(src);
//     vis[src] = true;

//     while(!q.empty())
//     {
//         int par = q.front(); q.pop();

//         for(int child : adj_list[par])
//         {
//             if(!vis[child])
//             {
//                 vis[child] = true;
//                 q.push(child);
//             }
//         }
//     }
// }

// int main() {
//     int n,e;
//     cin >> n >> e;

//     for(int i=0;i<e;i++){
//         int a,b;
//         cin >> a >> b;
//         adj_list[a].push_back(b);
//         adj_list[b].push_back(a); 
//     }

//     int t;
//     cin >> t;

//     while(t--){
//         int src,dst;
//         cin >> src >> dst;       

//         memset(vis,false,sizeof(vis));
//         bfs(src);

//         if(vis[dst])             
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    int n,e;
    cin >> n >> e;
    vector<unordered_set<int>>adj(n);
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].insert(v);
    }
    int Q;
    cin >> Q;
    while(Q--)
    {
        int A,B;
        cin >> A >> B;
        if(A == B)
        {
             cout << "YES\n";
        }
       else if(adj[A].count(B))
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
    }
    return 0;
}