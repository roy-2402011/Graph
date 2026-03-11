// #include <bits/stdc++.h>

// using namespace std;

// vector<int> v[1005];

// bool vis[1005];

// void bfs(int src)

// {

//  queue<int> q;

//  q.push(src);

//  vis[src] = true;

//  while (!q.empty())

//  {

//  int par = q.front();

//  q.pop();

//  cout << par << endl;

//  for (int child : v[par])

//  {

//  if (vis[child] == false)

//  {

//  q.push(child);

//  vis[child] = true;

//  }

//  }

//  }

// }

// int main()

// {

//  int n, e;

//  cin >> n >> e;

//  while (e--)

//  {

//  int a, b;

//  cin >> a >> b;

//  v[a].push_back(b);

//  v[b].push_back(a);

//  }

//  int src;

//  cin >> src;

//  memset(vis, false, sizeof(vis));

//  bfs(src);

//  return 0;

// }

#include <bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
int sum=0;
int odd=0;
int even=0;
int SumOfEven=0;
int SumOfOdd=0;
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;

    while(!q.empty())
    {
        int par=q.front();
        q.pop();
        sum+=par;
        if(par%2==0)
        {
            even++;
            SumOfEven+=par;
        }
        else
        {   odd++;
            SumOfOdd+=par;
        } 
         


        for(int child : adj_list[par])
        {
            if(vis[child]==false)
            {
                q.push(child);
                vis[child]=true;
            }
        }

    }
}
int main() {
     int n,e;
     cin>>n>>e;
     memset(vis,false,sizeof(vis));
     while(e--)
     {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
     }
    //  for(int i=1;i<=n;i++)
    //  {
    //     cout<<i<<" - >  ";
    //     for(int v : adj_list[i])
    //     {
    //         cout<<v<<" ";
    //     }
    //     cout<<endl;

    //  }
    
    int src;
    cin>>src;
    bfs(src);
    cout<<"sum of vertex          = "<<sum<<endl;
    cout<<"number of even  vertex ="<<even<<endl;
    cout<<"number of odd   vertex ="<<odd<<endl;
    cout<<"sum of vertex even vertex   = "<<SumOfEven<<endl;
     cout<<"sum of vertex odd vertex   = "<<SumOfOdd<<endl;
    return 0;
}
