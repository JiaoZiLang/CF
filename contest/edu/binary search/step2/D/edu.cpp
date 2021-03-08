/* 
 * Author: jiaozilang
 * Time: 2021-02-20 21:27:58
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

const int N = 1e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<LL> VI;

LL n, m;
vector<VI> nums;

bool check(LL mid) {
    LL res = 0;
    LL T = mid;
    for (int i = 0; i < n; i++) {
        LL t = nums[i][0], z = nums[i][1], y = nums[i][2];
        LL time_t = t * z + y;
        LL tt = T / time_t;
        res += tt * z + min(z, (mid -  tt * time_t) / t);
    }
    if (res >= m) return true;
    return false;
}

int main() {
    STD;
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        LL a, b, c;
        cin >> a >> b >> c;
        nums.pb({a, b, c});
    }
    LL l = 0, r = 1000000000000;
    LL ans =  0;
    while(l < r) {
        LL mid = l + r >> 1;
        if (check(mid)) {
            ans = mid;
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << "\n";
    VI tot;
    LL T = ans;
    LL res = 0;
    for (int i = 0 ; i < n; i++) {
        LL t = nums[i][0], z = nums[i][1], y = nums[i][2];
        LL time_t = t * z + y;
        LL tt = T / time_t;
        cout << max((LL)0, min(m - res, tt * z + min(z, (l - tt * time_t) / t))) << " ";
        res += max((LL)0, min(m - res, tt * z + min(z, (l - tt * time_t) / t)));
    }
    return 0;
}
