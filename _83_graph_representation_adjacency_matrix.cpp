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
int graph[N][N];
int graph_weighted[N][N];
vtr vec;

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
    // in this code I show how to take input of the graph in Adjacency Matrix. But the problem is, in this method we can not create any 10^5 x 10^5 matrix. we can maximum create 10^4 x 10^4 matrix.
    int n,m;    in n>>m;
    For(i,0,m){
        int v1,v2;
        in v1>>v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    // Space complexity 0(N^2)

    // if weighted
    For(i,0,m){
        int v1,v2,wt;
        in v1>>v2>>wt;
        graph_weighted[v1][v2] = wt;
        graph_weighted[v2][v1] = wt;
    }

    // to find weather vertex 1 and 5 is connected or not, and the weight between them
    if(graph[1][5] == 1){
        p "Connected" nl
    }
    p graph_weighted[1][5] nl

    // Time complexity to find them is 0(1)
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

    ***the importance of adjacency matrix is, we can find out weather vertex i and j is connected or not and if connected then what is the weight between them***

*/