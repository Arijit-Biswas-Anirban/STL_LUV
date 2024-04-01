#include<bits/stdc++.h>
#define ll long long
#define For(i,a,n) for(int i=a; i<n; i++)
#define For2(i,a,n) for(int i=a; i<=n; i++)
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;

const int N = 1e5+7;
int hash_arr[N][26];


void anuhimu(){
    For(i,0,N)
        For2(j,0,26)
            hash_arr[i][j] = 0;
    ll n, q; in n>>q;
    string s;   in s;
    For(i,0,n){
        hash_arr[i+1][s[i] - 'a']++;
    }

    For(i,0,26){
        For2(j,1,n){
            hash_arr[j][i] += hash_arr[j-1][i];
        }
    }

    while(q--){
        ll l, r;    in l>>r;
        int oddCnt = 0;
        For(i,0,26){
            int charCnt = hash_arr[r][i] - hash_arr[l-1][i];
            if(charCnt % 2 != 0) oddCnt++;
        }
        if(oddCnt > 1) pr "NO" nl
        else pr "YES" nl
    }
}
int main(){
ll tc;
in tc;
while(tc--){
    anuhimu();
}


return 0;
}