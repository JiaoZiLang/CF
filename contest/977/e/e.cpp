/*
 * Author: jiaozilang
 * Time: 2021-01-13 17:23:04
**/
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
 
const int N = 2e5+10;
using namespace std;
 
typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;
 
PII G[N];
int p[N], d[N];
 
int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}
 
int main() {
    STD;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        G[i] = {a, b};
        d[a]++, d[b]++; 
    }
    for (int i = 0; i <= n; i++) p[i] = i;

    int res = 0;
    for (int i = 1; i <= m; i++) {
        if (d[G[i].fi] == 2 && d[G[i].se] == 2) {
            int a = find(G[i].fi), b = find(G[i].se);
            if (a == b) res++;
            else p[a] = b;
        }
    }
 
    cout << res << endl;
    return 0;
}