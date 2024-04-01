/*
Find whether an array is a subset of another array using Set
The idea is to insert all the elements of the first array and second array in the set, if the size of the set is equal 
to the size of arr1[] then the arr2[] is the subset of arr1[]. As no new elements are found in arr2[] hence is the subset.

Note: This approach works perfectly if there are no duplicate elements.
*/

#include<bits/stdc++.h>
using namespace std;

bool isSub(int mainn[], int n, int sub[], int m){

    if(m > n)   return false;

    set<int> st;
    for(int i=0; i<n; i++)  st.insert(mainn[i]);

    int siz = st.size();

    for(int i=0; i<m; i++)
        st.insert(sub[i]);

    if(st.size() == siz)    return true;
    else return false;

}

int main(){

    int n,m;    cin>>n>>m;
    int arr1[n], arr2[m];

    for(int i=0; i<n; i++)  cin>>arr1[i];
    for(int i=0; i<m; i++)  cin>>arr2[i];

    if(isSub(arr1, n, arr2, m)) cout<<"SUBSET\n";
    else    cout<<"NOT SUBSET\n";

    return 0;
}