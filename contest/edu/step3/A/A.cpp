/*
 * Author: jiaozilang
 * Time: 2021-03-02 16:14:15
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

const int N = 1e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int n;
double pos[N];
double speed[N];

bool check(double mid) {
    double s = -1e9 - 110, e = 1e9 + 110;
    for (int i = 1; i <= n; i++) {
        if (s > e) break;
        s = max(s, pos[i] - speed[i] * mid);
        e = min(e, pos[i] + speed[i] * mid);
    }
    return s <= e;
}

int main() {
    STD;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> pos[i] >> speed[i];
    cout << setprecision(20);
    double l = 0, r = 1e9 + 110;
    while(r - l >= 1e-7) {
        double mid = (l + r) / 2;
        if (check(mid)) r = mid;
        else l = mid;
    } 
    cout << r << endl;
    return 0;
}
