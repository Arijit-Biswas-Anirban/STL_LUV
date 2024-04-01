/*
if we want to use hash in negative numbers we can use map / unordered map
or we can do a thing that we will add any number (ex: 7) with the given array and find
the occurrence of given number by adding with the added number before ( 7 )

1 <= N <= 10^5
arr[i] <= 10^7
1 <= Q <= 10^5
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
int hsh[N];

int main()
{
    int n;  cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr[i] = arr[i] + 7;
        hsh[arr[i]]++;
    }

    int Q;  cin>>Q;
    while(Q--)
    {
        int x;  cin>>x;
        x += 7;
        cout<<hsh[x]<<endl;
    }

    return 0;
}

/*
Input:
6
-4 2 1 -3 -4 -6
6
-4 2 1 -3 -6 7
Output:
2
1
1
1
1
0
*/