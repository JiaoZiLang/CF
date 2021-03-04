/*
 * Author: jiaozilang
 * Time: 2021-03-03 17:07:34
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

const int N = 1e4+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int n, k;
int a[N];

bool check(LL mid) {
    int cnt =  0;
    int st = 0;
    REP(i, 1, n) {
        if (!st) {
            st = a[i];
            cnt++;
        } else {
            if (a[i] - st > mid) {
                cnt++;
                st = a[i];
            } 
        }
    }
    return ++cnt <= k;//可以安排的牛数，小于目标数，说明距离太长了，需要缩小mid
}

int main() {
    STD;
    cin >> n >> k;
    REP(i, 1, n) cin >> a[i];

    LL l = 0, r = 1e9+10;
    while(l < r) {
        LL mid = l + r >> 1;
        if (check(mid)) r = mid;
        else l = mid + 1;
    } 
    cout << r << endl;
    return 0;
}
