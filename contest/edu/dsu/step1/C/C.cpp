/*
 * Author: jiaozilang
 * Time: 2021-03-08 14:49:45
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

int n, m;
int p[N*2], val[N*2];
int idx;

void uinon(int a, int b) {
    p[a] = ++idx;
    p[b] = p[a];
}

int find(int a) {
    if (a != p[a]) {
        int t = find(p[a]);
        if (p[a] != p[p[a]])
            val[a] += val[p[a]];
        p[a] = t;
        return t;
    } else {
        return a;
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i < 2*n; i++) {
        p[i] = i;
    }
    idx = n;
    while(m--) {
        char op[10];
        scanf("%s", op);
        if (op[0] == 'a' || op[0] == 'j') {
            int a, b;
            scanf("%d%d\n", &a, &b);
            if (op[0] == 'a') {
                int ff = find(a);
                val[ff] += b;
            }else {
                int f1 = find(a), f2 = find(b);
                if (f1 == f2) continue;
                uinon(f1, f2);
            }
        } else {
            int a;
            scanf("%d\n", &a);
            int t = find(a);
            int ans;
            if (t == a) ans = val[a];
            else ans = val[a] + val[t]; 
            printf("%d\n", ans);
        }
    }
    return 0;
}
