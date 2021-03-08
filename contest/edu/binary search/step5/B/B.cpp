/*
 * Author: jiaozilang
 * Time: 2021-03-05 17:08:16
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

LL n, k;

int main() {
    STD;
    cin >> n >> k;

    LL l = 0, r = 1e10+10;
    while(l < r) {
        LL mid = l + r >> 1;
        LL cnt = 0;
        REP(i, 1, n) cnt += min((LL)n, mid / i);
        //画图理解，每一行有多少个小于mid的数（注意每行都有单调性的，只要找到小于它的最大值就是多少个了，也就是mid/i
        if (cnt >= k) r = mid;
        else l = mid + 1;
    }
    cout << l << endl;
    return 0;
}
