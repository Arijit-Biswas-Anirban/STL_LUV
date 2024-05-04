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
vector<vector<int>> connected_component;
vector<int> currently_connectedComponent;

void dfs(int vertex)
{
    /**
     * Take action on vertex after entering the vertex
     */
    // p "Visiting Vertex : " << vertex nl
    visited[vertex] = true;
    currently_connectedComponent.push_back(vertex);
    for (int child : graph[vertex])
    {
        /**
         * Take action on child before entering the child node
         */
        // p "Parent vertex: "<< vertex << " "<<"Child node: " << child nl
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

    // Initialize visited array to false
    memset(visited, false, sizeof(visited));

    int n, m, cnt = 0;
    ;
    in n >> m;
    For(i, 0, m)
    {
        int v1, v2;
        in v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    // Optionally, iterate through all vertices and call DFS on each unvisited vertex
    // This is useful for disconnected graphs
    For_eq(i, 1, n)
    {
        if (!visited[i])
        {
            currently_connectedComponent.clear();
            dfs(i);
            connected_component.push_back(currently_connectedComponent);
            cnt++;
        }
    }

    p cnt nl 
    for (auto it : connected_component)
    {
        for (int vertex : it)
        {
            p vertex << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
    Qs. Find total number of connected components in the graphs.
    ***A connected component is a set of vertices in a graph that are linked to each other by paths(edges)***

    8 5

    1 2
    2 3
    2 4
    3 5
    6 7

*/