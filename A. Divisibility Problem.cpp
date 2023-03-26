                            // A. Divisibility Problem


// You are given two positive integers a and b . In one move you can increase aby 1(replace awith a+1). 
// Your task is to find the minimum number of moves you need to do in order to make a divisible by b. It is 
// possible, that you have to make 0 moves, as ais already divisible by b . You have to answer t independent 
// test cases.

// Input
// The first line of the input contains one integer t(1≤t≤104) — the number of test cases. Then ttest cases follow.

// ]The only line of the test case contains two integers aand b(1≤a,b≤109).

// Output
// For each test case print the answer — the minimum number of moves you need to do in order to make a
//  divisible by b


#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <string>
#include <cstdlib>
#define ll long long
#define vll vector<long long>
#define pb push_back
#define pi pair<int, int>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

#define pq priority_queue<ll, vector<ll>, greater<ll>>
#define all(v) v.begin(), v.end()
#define iparr                   \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }

using namespace std;

int main()
{
     tc{
        ll a,b;
        cin>>a>>b;

        ll cnt=0;
        cnt=a%b;
        if(a%b!=0)
         cnt=b-cnt;
        if(a<b)
        {
            cnt=b-a;
        }
        
     
        cout<<cnt<<endl;
     }
}