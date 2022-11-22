/*
//-----------------------CODEFORCES(1739B)---------------------------------//

For an array of non-negative integers a of size n, we construct another array d as follows: d1=a1, di=|ai−ai−1| for 2≤i≤n.

Your task is to restore the array a from a given array d, or to report that there are multiple possible arrays.

Input
The first line contains a single integer t (1≤t≤100) — the number of test cases.

The first line of each test case contains one integer n (1≤n≤100) — the size of the arrays a and d.

The second line contains n integers d1,d2,…,dn (0≤di≤100) — the elements of the array d.

It can be shown that there always exists at least one suitable array a under these constraints.

Output
For each test case, print the elements of the array a, if there is only one possible array a. Otherwise, print −1.

Example
inputCopy
3
4
1 0 2 5
3
2 6 3
5
0 0 0 0 0
outputCopy
1 1 3 8
-1
0 0 0 0 0
Note
In the second example, there are two suitable arrays: [2,8,5] and [2,8,11]
*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    vector<int> ans;
    ans.push_back(arr[0]);
    int i;
    for(i=1;i<n;i++){
        int x1 = ans.back() + arr[i];
        int x2 = ans.back() - arr[i];

        if(arr[i]==0){
            ans.push_back(x1);
            continue;
        }
        if(x1>=0 && x2>=0){
            cout<<-1<<endl;
            return;
        }
        ans.push_back(x1);       
    }
    
    for(auto it : ans) cout<<it<<" ";
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}