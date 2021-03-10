/*
 * Author: jiaozilang
 * Time: 2021-03-08 18:47:22
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

int n, m;
int a[N], b[N];

int main() {
    STD;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];
    int i = 0;
    LL res = 0;
    for (int j = 0; j < m; ) {
        LL num_a = 0, num_b = 1;
        while(i < n && a[i] < b[j]) i++;
        while(i < n && a[i] == b[j]) num_a++, i++;
        j+=1;
        while(j && j < m && b[j] == b[j-1]) j++, num_b++;
        res += num_b * num_a;
    }

    cout << res;
    return 0;
}
