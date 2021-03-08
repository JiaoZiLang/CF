/* 
 * Author: jiaozilang
 * Time: 2021-02-28 15:04:27
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

const int N = 2e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

string s, p;
int n , m;
int a[N];

bool check(int mid) {
    unordered_set<int> st;
    for (int i = 1; i <= mid; i++) st.insert(a[i]);
    int cur = 1;
    for (int i = 1; i <= n; i++) {
        if (st.count(i)) continue; //用状态标记的方式进行，而不需要真实的删除掉字母
        if (s[i] == p[cur]) {
            cur++;
            if (cur > m) break;
        }
    }
    return cur > m;
}

int main() {
    STD;
    cin >> s >> p;
    n = s.size();
    m = p.size();
    s = ' ' + s;
    p = ' ' + p;
    for (int i = 1; i <= n; i++) cin >> a[i];
    
    int l = 0, r = 1;
    while(r <= n && check(r)) r <<= 1;
    r = min(r, n);
    while(l < r) {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    cout << l << endl;
    return 0;
}
