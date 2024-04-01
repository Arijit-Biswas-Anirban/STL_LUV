#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int arr[N];

vector<int> forward_gcd_arr(N);
vector<int> backward_gcd_arr(N);

void anu(int num, int idx)
{
    int gcd = __gcd(num, arr[idx - 1]);
    forward_gcd_arr[idx] = gcd;
}
void himu(int num, int idx)
{
    int gcd = __gcd(num, arr[idx + 1]);
    backward_gcd_arr[idx] = gcd;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, q; 
        cin>>n>>q;
        
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            anu(arr[i], i);
        }
        for (int i = n; i >= 1; i--)
        {
            himu(arr[i], i);
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << __gcd(forward_gcd_arr[l-1], backward_gcd_arr[r+1]) << endl;
        }
    }

    return 0;
}