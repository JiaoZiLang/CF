/*
 * Author: jiaozilang
 * Time: 2021-01-11 11:26:13
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
#define mp(a, b) make_pair(a, b)

const int N = 1e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int a[N];

int main() {
    STD;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n);

    LL minv = 1e18;
    for (int k = 1; k <= 100000; k++) {
        LL tmp = 1;
        LL cnt = 0;
        for (int i = 1; i <= n; i++) {
            cnt += abs(tmp - a[i]);
            if (cnt > minv) break;
            tmp *= k;
        }
        if (cnt < minv) minv = cnt;
    }
    cout << minv << endl;
    return 0;
}
