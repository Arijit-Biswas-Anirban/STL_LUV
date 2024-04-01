/*
Find whether an array is a subset of another array using Hashing:
The idea is to insert all the elements of the first array in a HashSet, and then iterate on the second array and find 
if the element exists in the HashSet, if the HashSet doesn’t contain any particular value then the second array is not 
the subset of the first array.

Note: This approach works perfectly if there are no duplicate elements.

*/

#include<bits/stdc++.h>
using namespace std;

int n,m;

bool isSub(const vector<int> &mainn, int n, vector<int> &sub, int m)
{
    if(m > n)   return false;
    
    set<int> hashSet;
    
    for(int i=0; i<n; i++)
    {
        hashSet.insert(mainn[i]);
    }
    
    for(int i=0; i<m; i++)
    {
        if(hashSet.find(sub[i]) == hashSet.end())
            return false;
    }
    return true;

}

int main(){

    cin>>n>>m;
    vector<int> vec1(n),vec2(m);
    for(int i=0; i<n; i++)
        cin>>vec1[i];
    for(int i=0; i<m; i++)
        cin>>vec2[i];

    if(isSub(vec1, n, vec2, m))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}