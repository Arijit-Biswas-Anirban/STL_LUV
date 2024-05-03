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
    // vector of vector actually is a 2D array that has no fixed row or columns
    int N;  in N;
    vector <vtr> v;
    For(i,0,N){
        int n;  in n;
        vtr tmp;
        For(j,0,n){
            int x;  in x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
    }
    For(i,0,N){
        For(j,0,v[i].size()){
            p v[i][j]<< " ";
        }
        cout nl
    }
    return 0;
}