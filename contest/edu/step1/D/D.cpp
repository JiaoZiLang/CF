/* 
 * Author: jiaozilang
 * Time: 2021-02-20 21:27:58
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

const int N = 1e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int k, n;
int a[N];

int main() {
    STD;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n);

    cin >> k;
    for (int i = 1; i <= k; i++) {
        int ql, qr;
        cin >> ql >> qr;
        int l = 1, r = n;
        while(l < r) {
            int mid = l + r >> 1;
            if (a[mid] < ql) l = mid + 1;
            else r = mid;
        }
        int rl = l;
        l = 1, r = n;
        while(l < r) {
            int mid = l + r + 1>> 1;
            if (a[mid] > qr) r = mid - 1;
            else l = mid;
        }
        if (l >= rl && a[rl] >= ql && a[l] <= qr)
            cout << l - rl + 1 <<  " ";
        else
            cout << "0" << " ";
    }
    return 0;
}
