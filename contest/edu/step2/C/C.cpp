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
 
int n, a, b;
 
bool check(LL mid) {
    int cnt = 0;
    if (mid >= a) cnt += (mid - a) / b;
    cnt += mid / a;
    return cnt >= n;
}
 
int main() {
    STD;
    cin >> n >> a>> b;
    if (a > b) swap(a, b);
    LL l = 0, r = 1;
    while(!check(r)) r <<= 1;
 
    while(l < r) {
        LL mid = l + r >> 1;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    cout << r << endl;
    return 0;
}