#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int a, b, c;
    Edge(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int main() {
    int n, e;
    cin >> n >> e;
    vector<Edge> edge_list;

    for(int i = 0; i < e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    vector<long long> dis(n + 1, LLONG_MAX); 
    int src;
    cin >> src;
    dis[src] = 0;

    
    for(int i = 1; i < n; i++) {
        for(auto ed : edge_list) {
            int a = ed.a, b = ed.b, c = ed.c;
            if(dis[a] != LLONG_MAX && dis[a] + c < dis[b]) {
                dis[b] = dis[a] + c;
            }
        }
    }

   
    bool cycle = false;
    for(auto ed : edge_list) {
        int a = ed.a, b = ed.b, c = ed.c;
        if(dis[a] != LLONG_MAX && dis[a] + c < dis[b]) {
            cycle = true;
        }
    }

    if(cycle) {
        cout << "Negative Cycle Detected\n";
    } else {
        int t;
        cin >> t;
        while(t--) {
            int tt;
            cin >> tt;
            if(dis[tt] == LLONG_MAX)
                cout << "Not Possible\n";
            else
                cout << dis[tt] <<endl;
        }
    }

    return 0;
}