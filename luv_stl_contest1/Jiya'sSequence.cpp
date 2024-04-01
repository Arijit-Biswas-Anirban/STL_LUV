#include<bits/stdc++.h>
#define oy cout<<"YES"<<endl
#define na cout<<"NO"<<endl
using namespace std;

void anu()
{
    int n;  cin>>n;
    vector<int> vec(n);
    long long int sum = 1;
    for(int i=0; i<n; i++){
            cin>>vec[i];
            sum *= vec[i];
    }
    if(sum % 10 == 2 || sum % 10 == 3 || sum % 10 == 5)
        oy;
    else
        na;
}

int main()
{
    int tc; cin>>tc;    while(tc--) anu();

    return 0;
}