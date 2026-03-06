// #include <bits/stdc++.h>
// using namespace std;
// class edge
// {   public:
//     int a,b,c;
//     edge(int a,int b,int c)
//     {
//         this->a=a;
//         this->b=b;
//         this->c=c;
//     }
// };
// int dis[1005];
// int main() {
//     int n,e;
//     cin>>n>>e;
//     vector<edge>edj_list;
//     while(e--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         edj_list.push_back(edge(a,b,c));
//        // edj_list.push_back(edge(b,a,c));

//     }

//     for(int i=0;i<n;i++)
//     {
//         dis[i]=INT_MAX;

//     }
//     dis[0]=0;

//     for(int i=0;i<n-1;i++)
//     {
//         for(auto ed : edj_list )
//         {
//             int a,b,c;
//             a=ed.a;
//             b=ed.b;
//             c=ed.c;

//            if(dis[a] != INT_MAX && dis[a]+c < dis[b])
//             {
//                 dis[b]=dis[a]+c;

//             }

//         }
//     }

//     for(int i=0;i<n; i++)
//     {
//         cout<<i<<" -> "<< dis[i]<<endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Edge{
public:
    int a,b,c;
    Edge(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
};

int main()
{
    int n,e;
    cin>>n>>e;

    vector<Edge> edgeList;

    while(e--){
        int a,b,c;
        cin>>a>>b>>c;

        edgeList.push_back(Edge(a,b,c)); // a → b
        edgeList.push_back(Edge(b,a,c)); // b → a
    }

    vector<int> dis(n,INT_MAX);
    dis[0]=0;

    for(int i=0;i<n-1;i++){
        for(auto ed:edgeList){
            int a=ed.a;
            int b=ed.b;
            int c=ed.c;

            if(dis[a]!=INT_MAX && dis[a]+c < dis[b]){
                dis[b]=dis[a]+c;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<i<<" "<<dis[i]<<endl;
    }
}