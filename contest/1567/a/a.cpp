/*
 * Author: jiaozilang
 * Time: 2021-09-05 22:35:35
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

int main() {
    STD;
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        string str, res;
        cin >> str;
        for (int i = 0; i < n; i++) {
            if (str[i] == 'U') res += 'D';
            else if (str[i] == 'L') res += 'L';
            else if (str[i] == 'R') res += 'R';
            else res += 'U';
        }
        cout << res << "\n";
    }
    return 0;
}