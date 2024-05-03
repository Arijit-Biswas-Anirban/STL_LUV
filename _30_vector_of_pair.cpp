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

const int N = 1e7 + 7;
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

    // vector<pr> v(3);
    // For(i,0,3){
    //     in v[i].first >> v[i].second;
    // }
    vector<pr> v;
    For(i,0,3){
        int x,y;    in x>>y;
        v.push_back({x,y});
    }
    For(i,0,3){
        p v[i].first << " " << v[i].second nl
    }

    return 0;
}