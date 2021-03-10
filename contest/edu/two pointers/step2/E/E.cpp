/*
 * Author: jiaozilang
 * Time: 2021-03-09 16:07:21
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
LL a[N];

int main() {
    STD;
    cin >> n >> k;
    REP(i, 0, n-1) cin >> a[i];

    unordered_map<LL, LL> mp;
    LL res = 0;
    LL num = 0;
    for (int j = 0, i = 0; j < n; j++) {
        mp[a[j]]++;
        if (mp[a[j]] == 1) num++;
        while(num > k) {
            if (mp[a[i]] - 1 == 0) num--;
            mp[a[i++]]--;
        }
        res += (LL)j - i + 1;
    }
    cout << res;
    return 0;
}
