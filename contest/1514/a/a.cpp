/*
 * Author: jiaozilang
 * Time: 2021-04-20 10:07:29
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

const int N = 1e3+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int vec[N];

bool check(LL x) {
    LL i = 1;
    while(x > 0) {
        x -= i;
        i += 2;
    }
    return x == 0;
}

int main() {
    STD;
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        REP(i, 1, n) cin >> vec[i];
        bool app = true;
        for (int i = 1; app && i <= n; i++) {
            if (!check(vec[i])) {
                cout << "YES\n";
                app = false;
                break;
            }
            LL x = vec[i];
            // for (int j = i+1; app && j <= n; j++) {
            //     x *= vec[j];
            //     if (!check(x)) {
            //         cout << "YES\n";
            //         app = false;
            //         break;
            //     }
            // }
        }
        if (app)
            cout << "NO\n";
    }
    return 0;
}
