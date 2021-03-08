/*
 * Author: jiaozilang
 * Time: 2021-03-08 11:10:15
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

const int N = 3e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int n, m;
int p[N], minv[N], maxv[N], size[N];

int find(int  x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    STD;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        p[i] = i;
        size[i] = 1;
        minv[i] = i;
        maxv[i] = i;
    }

    for (int i = 1; i  <= m; i++) {
        string op;
        int u, v;
        cin >> op >> u;
        int a = find(u);
        if (op == "union")  {
            cin >> v;
            int b = find(v);
            if (a == b) continue;
            if (size[a] > size[b]) swap(a, b);
            p[a] = b;
            size[b] += size[a];
            minv[b] = min(minv[b], minv[a]);
            maxv[b] = max(maxv[a], maxv[b]);
        } else {
            cout << minv[a] << " " << maxv[a] << " " << size[a] << "\n";
        }
    }
    return 0;
}
