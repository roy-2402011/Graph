#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<string> grid;
vector<vector<bool>> vis;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y)
 {
    vis[x][y] = true;
    for(int k = 0; k < 4; k++)
        {
        int nx = x + dx[k], ny = y + dy[k];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m)
        {
            if (!vis[nx][ny] && grid[nx][ny] == '.')
            {
                dfs(nx, ny);
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    grid.resize(n);
    for (int i = 0; i < n; i++)
        {
        cin >> grid[i];
    }

    vis.assign(n, vector<bool>(m, false));
    int cnt = 0;

    for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                cnt++;
                dfs(i, j);
            }
        }
    }

    cout << cnt <<endl;
    return 0;
}