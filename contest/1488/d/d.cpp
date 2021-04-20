/*
 * Author: jiaozilang
 * Time: 2021-03-16 12:07:03
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

LL n, s;

bool check(LL mid) {
    if (mid * n < s) return true;
    LL cnt = 0;
    LL tmp = mid;
    for (int i = n; i >= 1; i--) {
        cnt += tmp;
        tmp = (tmp + 1) / 2;
        if (tmp < 1) 
            tmp = 1;
    }
    // cout << n << " " << cnt << " " << mid << endl;
    return cnt <= s && mid * n >= s;
}

int main() {
    STD;
    int T;
    cin >> T;
    while(T--) {
        cin >> n >> s;
        LL l = s/n, r = s;
        while(l < r) {
            LL mid = l + r  + 1 >> 1;
            if (check(mid)) l = mid;
            else r = mid - 1;
        }
        cout << r << endl;
    }
    return 0;
}
