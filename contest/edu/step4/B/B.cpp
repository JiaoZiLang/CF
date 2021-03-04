/*
 * Author: jiaozilang
 * Time: 2021-03-04 19:33:00
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

vector<pair<LL, int>> G[N];
int n, m, d;
int pre[N];
double dist[N];
int qm[N];

bool check(double mid) {
    REP(i, 2, n) dist[i] = 2e18;
    dist[1] = 0;
    pre[1] = 0;
    REP(i, 1, n) {
        for (auto x : G[i]) {
            int node = x.fi, dd = x.se;
            if (dist[node] > dist[i] + dd - mid) {
                dist[node] = dist[i] + dd - mid;
                pre[node] = i;
            }
        }
    }
    // cout << dist[n] << " " << mid << endl;
    return dist[n] <= 0;
}

int main() {
    STD;
    cin >> n >> m;
    REP(i, 1, m) {
        int a, b, c;
        cin >> a >> b >> c;
        G[a].pb({b, c});
    }

    double l = 0.5, r = 101;
    while(r - l > 1e-4) {
        double mid = (l + r) / 2;
        if (check(mid)) r = mid;
        else l = mid;
    }

    if (l > 1e9) cout << -1;
    else {
        vector<int> res(1, n);
        int cur = pre[n];
        while(cur) {
            res.pb(cur);
            cur = pre[cur];
        }
        reverse(res.begin(), res.end());
        cout << res.size() - 1 << endl;
        for (auto x : res) cout << x << " ";
    }
    return 0;
}
