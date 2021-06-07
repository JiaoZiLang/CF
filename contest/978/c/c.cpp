/*
 * Author: jiaozilang
 * Time: 2021-05-28 22:13:14
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

const int N = 2e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

LL n, m;
LL sum[N];

inline bool check(int mid, LL a) {
    return sum[mid] >= a;
}


int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        LL a;
        cin >> a;
        sum[i] = sum[i-1] + a;
    }

    while(m--) {
        LL a = 0;
        cin >> a;
        int l = 1, r = n;
        while(l < r) {
            int mid = l + r >> 1;
            if (check(mid, a)) r = mid;
            else l = mid + 1; 
        }
        cout << r << " " << a - sum[r-1] << "\n";

    }
    return 0;
}
