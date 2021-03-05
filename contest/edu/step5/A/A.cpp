/*
 * Author: jiaozilang
 * Time: 2021-03-05 16:20:40
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

const int N = 55;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

PII q[N];
int n, k;

int main() {
    STD;
    cin >> n >> k;
    REP(i, 1, n) {
        int a, b;
        cin >> a >> b;
        q[i] = {a, b};
    }
    
    int l = -2e9-10, r = 2e9+10;
    while(l < r) {
        int mid = (LL)l + r >> 1;
        LL cnt = 0;
        REP(i, 1, n) {
            if (q[i].fi <= mid) cnt += (LL)min(q[i].se, mid) - q[i].fi + 1;
        }
        if (cnt - 1 >= k) r = mid;
        else l = mid + 1;
    }
    cout << l << endl;
    return 0;
}
