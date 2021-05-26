/* 
 * Author: jiaozilang
 * Time: 2021-05-21 17:11:30
**/
#pragma GCC optimize("Ofast")

#include<bits/stdc++.h>

#define fi first
#define se second
#define INF 0x3f3f3f3f
#define STD std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FOR(i,a,b) for (int i(a); i < (b); i++) 
#define REP(i,n) FOR(i,0,n) 
#define UN(v) sort((v).begin(),(v).end()),v.erase(unique(v.begin(),v.end()),v.end())
#define CL(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define SORT(a) sort((a).begin(),(a).end())

const int N = 1e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int maxv = 0;

bool check(int mid) {
    int cnt = 0;
    for (int i = 1; i <= mid; i++) {
        cnt += i * 5;
    }

    return cnt <= maxv;
}

int main() {
    STD;
    int n, k;
    cin >> n  >> k;
    maxv = 4 * 60 - k;

    int l = 0, r = n;
    while(l < r) {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    cout << r;

    return 0;
}
