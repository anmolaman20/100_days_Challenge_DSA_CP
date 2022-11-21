/*
link-> https://codeforces.com/contest/1742/problem/D?f0a28=1

Given an array of n positive integers a1,a2,…,an (1≤ai≤1000). Find the maximum value of i+j such that ai and aj are 
coprime,† or −1 if no such i, j exist.

For example consider the array [1,3,5,2,4,7,7]. The maximum value of i+j that can be obtained is 5+7, since
 a5=4 and a7=7 are coprime.

† Two integers p and q are coprime if the only positive integer that is a divisor of both of them is 1 (that is, their
 greatest common divisor is 1).

Input
The input consists of multiple test cases. The first line contains an integer t (1≤t≤10) — the number of test
 cases. The description of the test cases follows.

The first line of each test case contains an integer n (2≤n≤2⋅105) — the length of the array.

The following line contains n space-separated positive integers a1, a2,..., an (1≤ai≤1000) — the elements of the array.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

Output
For each test case, output a single integer  — the maximum value of i+j such that i and j satisfy the condition that
ai and aj are coprime, or output −1 in case no i, j satisfy the condition.


inputCopy
6
3
3 2 1
7
1 3 5 2 4 7 7
5
1 2 3 4 5
3
2 2 4
6
5 4 3 15 12 16
5
1 2 2 3 6

output copy
6
12
9
-1
10
7

*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> vec(1001,-1);
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        vec[x] = i;
    }
    int ans = -1;
    for(int i=1;i<1001;i++){
        if(vec[i]!=-1){
            for(int j=1;j<1001;j++){
                if(vec[j]!=-1 and __gcd(i,j)==1){
                    ans = max(ans,vec[i]+vec[j]);
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}