/*
 * Author: jiaozilang
 * Time: 2021-03-09 17:34:19
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

deque<LL> sml, big;
int n;
LL q[N], k;

int main() {
    STD;
    cin >> n >> k;
    REP(i, 0, n-1) cin >> q[i];
    LL cnt = 0;
    for (int i = 0, j = 0; j < n; j++) {
        while(sml.size() && q[sml.back()] >= q[j]) sml.pop_back();
        sml.push_back(j);
        while(big.size() && q[big.back()] <= q[j]) big.pop_back();
        big.push_back(j);
        while(q[big.front()] - q[sml.front()] > k) {
            if (big.front() == i) big.pop_front();
            if (sml.front() == i) sml.pop_front();
            i++;
        }
        cnt += j - i + 1;
    }
    cout<< cnt;
    return 0;
}
