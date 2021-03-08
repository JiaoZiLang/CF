/*
 * Author: jiaozilang
 * Time: 2021-03-05 21:28:49
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
int a[N], b[N];

int main() {
    STD;
    cin >> n >> k;
    REP(i, 1, n) cin >> a[i];
    REP(i, 1, n) cin >> b[i];

    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);

    int l = 0, r = 2e9+10;
    while(l < r) {
        int mid = (LL)l + r >> 1; 
        LL cnt = 0;
        int j = n;
        REP(i, 1, n) {
            LL t = mid - a[i];
            for (; j >= 1; j--) { //此处有单调性，可以减枝，不需要每次从最大开始
                if (b[j] <= t) {
                    cnt += j;
                    break;
                }
            }
        }
        //cout << l << " r:" << r << " cnt:" << cnt << " mid:"<< mid << "\n";
        if (cnt >= k) r = mid;
        else l = mid + 1;
    }
    cout << l;
    return 0;
}
