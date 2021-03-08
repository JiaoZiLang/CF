/*
 * Author: jiaozilang
 * Time: 2021-03-02 17:18:31
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
LL q[N];

bool check(LL mid) {
    int cnt = 0;
    LL cur = 0;
    for (int i = 1; i <= n; i++) {
        if (q[i] > mid) {
            cnt = k + 1;
            break;
        }

        if (cur + q[i] > mid) {
            cnt++;
            cur = q[i];
        } else {
            cur += q[i];
        }
    }
    return ++cnt <= k;
}

int main() {
    STD;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> q[i];

	LL l = 0, r = 1e14 + 10;
	while (l < r) {
		LL mid = l + r >> 1;
		if (check(mid)) r = mid;
		else l = mid + 1;
	}
	cout << l;
    return 0;
}
