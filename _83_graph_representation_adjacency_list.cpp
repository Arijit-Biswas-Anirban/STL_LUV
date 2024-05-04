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

const int N = 1e3+7;

vtr graph[N];
vector<pair<int,int>> graph_weighted[N];

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

    // two types of representation for graphs and trees. 1-> Adjacency Matrix 2-> Adjacency List
    // in this code I show how to take input of the graph in Adjacency List. The reason behind adjacency list is to reduce the space complexity.
    int n,m;    in n>>m;    // Vertices = n, Edges = m
    For(i,0,m){
        int v1,v2;
        in v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    // Space complexity 0(n+m)

    // if weighted
    For(i,0,m){
        int v1,v2,wt;
        in v1>>v2>>wt;
        graph_weighted[v1].push_back({v2, wt}); 
        graph_weighted[v2].push_back({v1, wt}); 
    }

    // to find weather vertex 1 and 5 is connected or not, and the weight between them
    for(int child : graph[1]){
        if(child == 5)
            p "Connected" nl
    }
    for(pair<int,int> child : graph_weighted[1]){
        if(child.first == 5){
            p child.second nl
        }
    }

    // Time complexity to find them is 0(N)

    return 0;
}

/*
    I have a undirected graph that has 6 vertices and 9 edges.
    and the input will be the connection between vertices throw edges.
    
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

    Now if the graph is a weighted graph, then the input will be-
    6 9
    
    1 3 4
    1 5 2
    3 5 3
    3 4 2
    3 6 3
    3 2 4
    2 6 5
    4 6 2
    5 6 3

    It has more time complexity to find connected vertices or weight.

*/