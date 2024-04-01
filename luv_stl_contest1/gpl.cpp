#include <bits/stdc++.h>
#define intt long long
using namespace std;

int main()
{
    intt tc;
    cin >> tc;
    while (tc--)
    {
        intt n;
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;
        intt deci = 0;
        intt flag = 0;
        for (intt i = s.size()-1; i >= 0; i--)
        {
            deci += pow(2, flag++) * (s[i] - '0');
        }
        cout << deci << endl;
    }

    return 0;
}