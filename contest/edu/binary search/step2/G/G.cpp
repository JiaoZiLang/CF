/*
 * Author: jiaozilang
 * Time: 2021-03-01 11:32:58
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
#define mp(a, b) make_pair(a, b)

const int N = 60;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

LL n, k, a[N];

bool check(LL mid) {
    LL res = 0;
    for (int i = 1; i <= n; i++) res += min(a[i], mid);
    return res >= k * mid;
}

int main() {
    STD;
    cin >> k >> n;
    for (int i  = 1; i <= n; i++) cin >> a[i];
    LL l = 0, r = 2.5e10 + 10;
    while(l < r) {
        LL mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    cout<< l << "\n";
    return 0;
}
