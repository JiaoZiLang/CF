/*
 * Author: jiaozilang
 * Time: 2021-07-24 15:20:22
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

int main() {
    STD;
    int T;
    cin >> T;
    vector<string> vec(N);
    while(T--) {
        vec.clear();
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> vec[i];

        int ans = 0;
        for (auto c = 'a'; c <= 'e'; c++) {
            vector<int> B(n, 0);
            for (int i = 0; i < n; i++) {
                for (auto a : vec[i]) B[i] += c == a ? 1 : -1;
            }

            sort(B.begin(), B.end());
            
            int cnt = 0, all = 0;
            for (int i = n; i--; ) {
                all += B[i];
                if (all > 0) cnt++;
                else break;
            }
            if (ans < cnt) ans = cnt;
        }
        cout << ans << endl;
    }
    return 0;
}