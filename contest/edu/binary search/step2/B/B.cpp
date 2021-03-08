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
 
int n, k;
int a[N];
 
bool check(double mid) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res += floor(a[i] / mid);
    }
    return res >= k;
}
 
int main() {
    STD;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    double l = 0, r = 1e8;
    cout << setprecision(20);
    for (int t =  0; t < 100; t++) {
        double mid = (r + l) / 2;
        if (check(mid)) l = mid;
        else r = mid;
    }
    cout << l << endl;
    return 0;
}