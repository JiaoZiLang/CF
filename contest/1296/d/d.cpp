/*
 * Author: jiaozilang
 * Time: 2021-01-12 19:54:18
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

const int N = 2e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int n, a, b, k, hp[N], res;

int main() {
    STD;
    cin >> n >> a >> b >> k;
    for (int i = 1; i <= n; i++) cin >> hp[i];

    for (int i = 1; i <= n; i++) {
        int h = hp[i] % (a + b);
        if (h == 0) {
            if (b%a == 0) hp[i] = b/a;
            else hp[i] = ceil((b*1.0) / a);//b/a+1; 
        } else if (h <= a) {
            hp[i] = 0;
        } else {
            hp[i] = ceil((h*1.0) / a) - 1;
        }
    }

    sort(hp + 1, hp + 1 + n);
    for (int i = 1; i <= n; i++) {
        if (hp[i] <= k) {
            res++;
            k -= hp[i];
        } else {
            break;
        }
    }
    cout << res << endl;
    return 0;
}
