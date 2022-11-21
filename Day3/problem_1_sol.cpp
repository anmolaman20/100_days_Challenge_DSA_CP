/*

#----------------------------------------------CODEFORCES(1699->A)--------------------------------------------------#

You are given a positive integer n. Your task is to find any three integers a, b and c (0≤a,b,c≤109) for which (a⊕b)+(b⊕c)+(a⊕c)=n,
or determine that there are no such integers.

Here a⊕b denotes the bitwise XOR of a and b. For example, 2⊕4=6 and 3⊕1=2.

Input
Each test contains multiple test cases. The first line contains a single integer t (1≤t≤104) — the number of test cases. 
The following lines contain the descriptions of the test cases.

The only line of each test case contains a single integer n (1≤n≤109).

Output
For each test case, print any three integers a, b and c (0≤a,b,c≤109) for which (a⊕b)+(b⊕c)+(a⊕c)=n. If no such integers exist, print −1.

Example
inputCopy
5
4
1
12
2046
194723326
outputCopy
3 3 1
-1
2 4 6
69 420 666
12345678 87654321 100000000
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    if(n&1){
        cout<<-1<<endl;
        return;
    }
    cout<<1<<" "<<1<<" "<<(1^(n/2))<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
return 0;
}