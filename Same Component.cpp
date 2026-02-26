// #include <bits/stdc++.h>
// using namespace std;

// char grid[105][105];
// bool vis[105][105];
// int n,m;

// vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

// bool valid(int i,int j){
//     return (i>=0 && i<n && j>=0 && j<m);
// }

// void bfs(int si,int sj)
// {
//     queue<pair<int,int>> q;
//     q.push({si,sj});
//     vis[si][sj] = true;

//     while(!q.empty())
//     {
//         auto par = q.front();
//         q.pop();

//         int x = par.first;
//         int y = par.second;

//         for(int i=0;i<4;i++)
//         {
//             int nx = x + d[i].first;
//             int ny = y + d[i].second;

//             if(valid(nx,ny) && !vis[nx][ny] && grid[nx][ny] == '.')
//             {
//                 vis[nx][ny] = true;
//                 q.push({nx,ny});
//             }
//         }
//     }
// }

// int main()
// {
//     cin >> n >> m;

//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             cin >> grid[i][j];

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             vis[i][j]=false;
//         }
//     }

//     int si,sj,di,dj;
//     cin >> si >> sj;
//     cin >> di >> dj;
//     if(grid[si][sj] == '-' || grid[di][dj] == '-')
//     {
//         cout<<"NO"<<endl;
//         return 0;
//     }

//     bfs(si,sj);

//     if(vis[di][dj])
//         cout<<"YES"<<endl;
//     else
//         cout<<"NO"<<endl;

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    int n, m;
    cin >>n>> m;
   vector<string>grid(n);
    for (int i = 0; i < n; i++)
        {
        cin >> grid[i];
         }

    int sx, sy, tx, ty;
    cin >> sx >> sy;
    cin >> tx >> ty;
  if (grid[sx][sy] == '-' || grid[tx][ty] == '-')
    {
        cout << "NO\n";
        return 0;
    }

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int,int>> q;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    q.push({sx, sy});
    visited[sx][sy] = true;

    while (!q.empty())
        {
        auto [x, y] = q.front();
        q.pop();

        if (x == tx && y == ty)
            {
            cout << "YES\n";
            return 0;
        }

        for (int i = 0; i < 4; i++)
            {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (!visited[nx][ny] && grid[nx][ny] == '.') {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }

    cout << "NO\n";
    return 0;
}