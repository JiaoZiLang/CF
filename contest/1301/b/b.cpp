/*
 * Author: jiaozilang
 * Time: 2021-01-11 11:37:31
**/
#include<bits/stdc++.h>

#define fi first
#define se second
#define INF 0x3f3f3f3f
#define STD std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FOR(i,a,b) for (int i(a); i <= (b); i++)
#define REP(i,n) FOR(i,0,n)
#define UN(v) sort((v).begin(),(v).end()),v.erase(unique(v.begin(),v.end()),v.end())
#define CL(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define SORT(a) sort((a).begin(),(a).end())
#define mp(a, b) make_pair(a, b)

const int N = 1e6+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int a[N], g[N];
int n;


int main() {
    STD;
    int T;
    cin >> T;
    while(T--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] == -1) {
                if(i+1<=n&&a[i+1]!=-1) g[++cnt]=a[i+1];
                if(i-1>=1&&a[i-1]!=-1) g[++cnt]=a[i-1];
            }
        }
        sort(g+1,g+cnt+1);
        int mid=(g[cnt]+g[1])/2;
        FOR(i,1,n) if(a[i]==-1) a[i]=mid;
        int ans=0;
        FOR(i,1,n-1) ans=max(ans,abs(a[i+1]-a[i]));
        cout<<ans<<' '<<mid<<endl;
    }
    return 0;
}
