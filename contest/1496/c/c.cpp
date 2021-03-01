/*
 * Author: jiaozilang
 * Time: 2021-01-19 14:49:01
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

const int N = 1e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int arr[N];

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) cin >> arr[i];

        int l, r;
        bool flag =  true;
        for (int i = 1; i <= n; i++) {
            if (i == 1) l = r = arr[i];
            else {
                l = max(l - k + 1, arr[i]);
                r = min(l + k - 1, arr[i] + k - 1);
            }

            if (l > r || (i == n && l != arr[n])) flag =  false;
        }
        cout <<(flag ? "YES" : "NO")<< endl;

    }
    return 0;
}
