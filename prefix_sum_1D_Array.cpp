// Pre-Computation Method
/*
Given array of N int. Given Q queries and in each query given L and R
print sum of array elements from L to R (L, R included)

Constraints:
1 <= N <= 10^5
1<= a[i] <= 10^9
1 <= Q <= 1-^5
1 <= L, R <= N
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int arr[N];
int pf[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pf[i] = pf[i-1] + arr[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int L, R;
        cin >> L >> R;
        cout << pf[R] - pf[L - 1] << endl;
    }

    return 0;
}