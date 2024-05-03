/*Arijit Biswas, the Wizard of Coding*/
#include <bits/stdc++.h>
#define ll long long
#define For(i, a, n) for (int i = a; i < n; i++)
#define For_eq(i, a, n) for (int i = a; i <= n; i++)
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<ll>
#define unset unordered_set<ll>
#define pr cout <<
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
    pair<int, string> p;
    p = make_pair(12, "Anu");
    pr p.first << " " << p.second nl

    p = {11, "Sagor"};
    pr p.first << " " << p.second nl

    pair<int, string>
    p1 = p;
    p1.first = 13;
    pr p.first << " " << p.second nl // does not change in "p" pair
    pr p1.first<< " " << p1.second nl

    pair<int, string> &p2 = p;
    p2.second = "Mamun";
    pr p.first << " " << p.second nl // make changes in "p" pair
    pr p2.first<< " " << p2.second nl

     // pairs are used for make relation between indexes in arrays
     // let i have two array arr1[] = {1,2,3} and arr2[] = {4,5,6}
     // now here each index is related in two array. if i want to swap 1 and 3 in first array, i can also make swap of 4 and 6 automatically using pair

    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    pair<int, int> pair_arr[3];
    For(i, 0, 3)
        pair_arr[i] = {arr1[i], arr2[i]};
    swap(pair_arr[0], pair_arr[2]);
    For(i, 0, 3)
        pr pair_arr[i].first<< " " << pair_arr[i].second nl

        return 0;
}