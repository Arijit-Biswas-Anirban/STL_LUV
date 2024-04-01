#include<bits/stdc++.h>
#define ll long long
#define For(i,a,n) for(int i=a; i<n; i++)
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;

const int N = 1e7+7;
vtr vec;

void anuhimu(){

}
int main(){
// ll tc;
// in tc;
// while(tc--){
//     anuhimu();
// }

    int size;   in size;
    int arr[size];

    For(i,0,size){
        in arr[i];
    }

    For(i,0,size){
        int minIndx = i;
        For(j,i+1,size){
            if(arr[j] < arr[minIndx]){
                minIndx = j;
            }
        }
        swap(arr[i],arr[minIndx]);
    }

    For(i,0,size){
        pr arr[i]<<" ";
    }
return 0;
}