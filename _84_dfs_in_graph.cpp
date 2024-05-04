/*Arijit Biswas, the Wizard of Coding*/
#include <bits/stdc++.h>
#define ll long long
#define For(i, a, n) for (int i = a; i < n; i++)
#define For_eq(i, a, n) for (int i = a; i <= n; i++)
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<ll>
#define pr pair<ll, ll>
#define unset unordered_set<ll>
#define p cout <<
#define nl << endl;
#define hae cout << "YES" << endl;
#define na cout << "NO" << endl;
using namespace std;

const int N = 1e5 + 7;
vtr graph[N];
bool visited[N];

void dfs(int vertex)
{
    /**
     * Take action on vertex after entering the vertex
     */
    p "Visiting Vertex : " << vertex nl
    visited[vertex] = true;
    for (int child : graph[vertex])
    {
        /**
         * Take action on child before entering the child node
         */
        p "Parent vertex: "<< vertex << " "<<"Child node: " << child nl
        if (visited[child])
            continue;
        dfs(child);
        /**
         * Take action on child after exiting child node
         */
    }
    /**
     * Take action on vertex before exiting the vertex
     */
}

void anu()
{
}
int main()
{
    // ll tc;
    // in tc;
    // while(tc--){
    //     anu();
    // }
    int n, m;
    in n >> m;
    For(i, 0, m)
    {
        int v1, v2;
        in v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);
    // For_eq(i,1,n)
    // {
    //     if(!visited[i]){
    //         dfs(i);
    //     }
    // }
    return 0;
}

/*
    6 9

    1 3
    1 5
    3 5
    3 4
    3 6
    3 2
    2 6
    4 6
    5 6

*/