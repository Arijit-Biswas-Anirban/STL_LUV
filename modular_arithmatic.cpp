/*
Find factorial of N where N: 1<= N <=100
find its modular M; where M = 47

*** A % M < M ***
*/

#include<bits/stdc++.h>
using namespace std;
const int x = 1e9 + 7;
int main()
{
    int n;  cin>>n;
    int M = 47;
    
    long long fact = 1;
    long long fact1 = 1;
    for (int i = 2; i <= n; i++)
    {
        // fact = fact * i; // can not store value if n > 20
        // we use modular multiplication technique to solve it in modular M
        fact = (fact * i) % M;
        fact1 = (fact * i) % x;
    }
    cout<<fact<<endl;   // here fact = 30 & 21! = 21 * 47 + 30
    cout<<fact1<<endl;  // here fact1 = 19 & 21! = 21 * (10^9 + 7) + 19

    return 0;
}