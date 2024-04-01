#include<bits/stdc++.h>
#define ll long long
#define For(i,a,n) for(int i=a; i<n; i++)
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long int>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;

using namespace std;
const int N = 1e7+10;
vtr vec(N);
void anuhimu(){

}
int main(){
int n, m;   in n>>m;
while(m--){
    int a, b, k;    in a>>b>>k;
    vec[a] += k;
    vec[b+1] += (-k);
}
for(int i=1; i<=n; i++){
    vec[i] = vec[i] + vec[i-1];
}

srt(vec);

pr vec[vec.size() - 1] nl


return 0;
}

/*
    n=6, m=3
    a b k
    1 3 2
    2 4 5
    3 6 3

req array is --> 
    1  2   3  4  5  6
    2  7  10  8  3  3

    and max number is --> 10

    now using hashmap and prefix sum we can solve it like-
    arr[a] += k;
    arr[b+1] -= k;
  & pf(prefix_sum) until n

     1  2  3  4  5  6  7
1->  0  0  0  0  0  0  0
2-> +2  0  0 -2  0  0  0
3->  0 +5  0  0 -5  0  0
4->  0  0 +3  0  0  0 -3
--------------------------
pf-> 2  7 10  8  3  3  0

now max number is also 10

*/