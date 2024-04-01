// Hashing Technique

/*
Given an array of N integers. Given Q queries and
int each query given a number X, print count of that
number in array

Constraints:
1 <= N <= 10^5
1 <= a[i] <= 10^7   // 10^9 thakle amra use korte partm na
1 <= Q <= 10^5

*/

#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     // normal answer that i can do myself

//     int N; cin>>N;
//     int a[N];
//     for(int i=0; i<N; i++)
//         cin>>a[i];

//     int Q;  cin>>Q;
//     while (Q--)
//     {
//         int x;  cin>>x;
//         int ct = 0;
//         for(int i=0; i<N; i++)
//         {
//             if(x == a[i])   ct++;
//         }
//         cout<<ct<<endl;
//     }
    
//     /*
//     But here the time complexity is-
//     0(N) + 0(Q * N) = 0(Q^2) or 0(N^2) = 10^10 --> not executable in 1 sec
//     so we can not solve it in this process.
//     we have to pre compute.
//     */

//     return 0;
// }

const int N = 1e7 + 10;
int hsh[N]; // automatic every value is 0

int main()
{
    int n;  cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        hsh[a[i]]++;    // by this we will add every occurrences of every number in the given range and when we query we can return the ans in 0(1) time complexity

    }

    int Q;  cin>>Q;
    while(Q--)
    {
        int x;  cin>>x;
        cout<<hsh[x]<<endl;
    }

    // now time complexity is 0(N) + 0(Q + 2) = 0(Q) = 10^5

    return 0;
}

/*
Input:
6
4 3 5 5 2 3
6
4 3 5 2 1 9
Output:
1
2
2
1
0
0

*/