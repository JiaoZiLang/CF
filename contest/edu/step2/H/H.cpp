/*
 * Author: jiaozilang
 * Time: 2021-03-01 16:56:35
**/
#pragma GCC optimize("Ofast")
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

string recipe;
LL nb, ns, nc, pb, ps, pc, r;
LL f[3];

bool check(LL mid) {
    LL tb = 0, ts = 0, tc = 0, cnt = 0;
    tb = max((LL)0, f[0] * mid - nb);
    ts = max((LL)0, f[1] * mid - ns);
    tc = max((LL)0, f[2] * mid - nc);
    
    cnt += tb * pb;
    cnt += ts * ps;
    cnt += tc * pc;
    return cnt <= r;
}

int main() {
    STD;
    cin >> recipe;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    memset(f, 0, sizeof f);
    for (int i  = 0; i < recipe.size(); i++){
        if (recipe[i] == 'B') f[0]++;
        else if (recipe[i] == 'S') f[1]++;
        else f[2]++;
    }

    LL i = 0, j = 1e12+100;
    while(check(j)) j <<= 1;
    while(i < j) {
        LL mid = i + j + 1 >> 1;
        if (check(mid)) i = mid;
        else j = mid - 1;
    }
    cout << i << endl;
    return 0;
}
