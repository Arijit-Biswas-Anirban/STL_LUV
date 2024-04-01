/*
*** Pre-Computation Technique --> Hashing ***

Given T test cases and in each test case take a input a number N.
print its factorial for each test case % M
where M = 10^9 + 7

Constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/

#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
const int N = 1e5 + 5;
long long fact[N];


int main()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        fact[i] = (fact[i-1] * i) % M;
    }
    
    int tc; cin>>tc;
    while(tc--)
    {
        int n;  cin>>n;
        cout<<fact[n]<<endl;
    }
    

    return 0;
}

/* we can't solve it in regular process bcz the time complexity is-
    0(T * N) = 0(N^2) = 10^10
    so here we will pre compute the values upto 10^5 (N) and store it and then we will just print the values from stored array
*/

/*
now time complexity 0(T) + 0(N) = 0(N) = 10^5 --> executable in 1 sec
*/