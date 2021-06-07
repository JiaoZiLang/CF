/*
 * Author: jiaozilang
 * Time: 2021-05-27 15:36:50
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

int a[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    sort(a+1, a+1+n);
    if (n <= 2) {
        cout << "0\n";
        for (int i = 1; i <= n; i++) cout<< a[i] << " ";
        return 0;
    }

    cout << (n-1)/2 << "\n";
    for (int i = 1; i <= n / 2; i++) {
        cout << a[(n+1) - i] << " ";
        cout << a[i] << " ";
    }
    if (n & 1) cout << a[(n+1)/2];

    return 0;
}
