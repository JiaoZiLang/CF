/*
 * Author: jiaozilang
 * Time: 2021-03-09 15:31:32
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

int n;
LL a[N], s;

int main() {
    STD;
    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    LL cnt = 0, res = 0;
    for (int i = 0, j = 0; j < n; j++) {
        cnt += a[j];
        while(cnt >= s) cnt -= a[i++];
        res += (LL)i;
    }
    cout << res;
    return 0;
}
