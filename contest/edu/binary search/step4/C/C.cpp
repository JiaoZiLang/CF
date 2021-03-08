/*
 * Author: jiaozilang
 * Time: 2021-03-05 10:29:03
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

int n, k;
PII q[N];
double c[N];

bool check(double mid) {
    REP(i, 1, n) {
        c[i] = q[i].fi - q[i].se * mid;
    }
    sort(c+1, c+1+n, greater<double>());
    double cnt = 0;
    REP(i, 1, k) cnt += c[i];
    return cnt < 0;
}

int main() {
    STD;
    cin >> n >> k;
    REP(i, 1, n) {
        int a, b;
        cin >> a >> b;
        q[i] = {a, b};
    }
    double l = 0, r = 1e9;
    while(r - l > 1e-8) {
        double mid = (r + l) / 2;
        if (check(mid)) r = mid;
        else l = mid;
    }
    printf("%.10f\n", l);
    return 0;
}
