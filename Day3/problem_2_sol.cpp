/*


#-----------------------------#CODEFORCES(1598->C)-------------------------#pragma endregion

Monocarp has got an array a consisting of n integers. Let's denote k as the mathematic mean of these elements (note that it's possible that k is not an integer).

The mathematic mean of an array of n elements is the sum of elements divided by the number of these elements (i. e. sum divided by n).

Monocarp wants to delete exactly two elements from a so that the mathematic mean of the remaining (n−2) elements is still equal to k.

Your task is to calculate the number of pairs of positions [i,j] (i<j) such that if the elements on these positions are deleted, the mathematic mean of (n−2) remaining elements is equal to k (that is, it is equal to the mathematic mean of n elements of the original array a).

Input
The first line contains a single integer t (1≤t≤104) — the number of testcases.

The first line of each testcase contains one integer n (3≤n≤2⋅105) — the number of elements in the array.

The second line contains a sequence of integers a1,a2,…,an (0≤ai≤109), where ai is the i-th element of the array.

The sum of n over all testcases doesn't exceed 2⋅105.

Output
Print one integer — the number of pairs of positions [i,j] (i<j) such that if the elements on these positions are deleted, the mathematic mean of (n−2) remaining elements is equal to k (that is, it is equal to the mathematic mean of n elements of the original array a)


inputCopy
4
4
8 8 8 8
3
50 20 10
5
1 4 7 3 5
7
1 2 3 4 5 6 7



outputCopy
6
0
2
3
*/
#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int sum=0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        sum+=a[i];
        mp[a[i]]++;
    } 
    int sum_of_2= (sum*2)/ n;
    if((sum*2)%n) 
    {
        cout<<0<<endl;
        return ;
    }
    int ans=0;
    for(auto it:mp)
    {
        if(it.first>sum_of_2) break;
        int remaining= sum_of_2-it.first;
        if(remaining < it.first) break;
        else if(remaining==it.first) ans+= ((it.second)*(it.second-1))/2;
        else ans+= (it.second * mp[remaining]);
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}