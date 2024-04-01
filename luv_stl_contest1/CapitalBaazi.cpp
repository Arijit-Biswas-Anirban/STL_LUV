#include <bits/stdc++.h>
using namespace std;

char upper(char c)
{
    return c - 'a' + 'A';
}


// this solution is valid if the user input only one space between words. but invalid if user inputs a number of space between words
// int main()
// {
//     string s;
//     getline(cin, s);    // al input in capital
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == ' ')
//             cout << endl;
//         else
//             cout << upper(s[i]);
//     }

//     return 0;
// }

// this is the efficient ans
int main()
{
    while (true)
    {
        string s;   cin>>s;
        if(s.size() == 0)   break;
        for (int i = 0; i < s.size(); i++)
        {
            cout<<upper(s[i]);
        }
        cout<<endl;
    }
    

    return 0;
}