/*
 * Author: jiaozilang
 * Time: 2021-03-09 11:22:38
**/
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>

#define fi first
#define se second
#define INF 0x3f3f3f3f
#define STD std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FOR(i,a,b) for (int i(a); i < (b); i++)
#define REP(x, l, u) for(int x = l; x <= u; x++)
#define UN(v) sort((v).begin(),(v).end()),v.erase(unique(v.begin(),v.end()),v.end())
#define CL(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define SORT(a) sort((a).begin(),(a).end())
#define mp(a, b) make_pair(a, b)

const int N = 1e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int n;
LL s, a[N];

int main() {
    STD;
    cin >> n >> s;
    REP(i, 0, n-1) cin >> a[i];
    LL cnt = 0, res = 2e18 + 10;
    for (int i = 0,j = 0; j < n; j++) {
        cnt += a[j];
        while(cnt - a[i] >= s) {
            cnt -= a[i++];
        }
        if (cnt >= s) res = min(res, (LL)j - i + 1);
    }
    cout << (res == 2e18 + 10 ? -1 : res);
    return 0;
}
