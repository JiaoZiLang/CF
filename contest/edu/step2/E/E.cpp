/* 
 * Author: jiaozilang
 * Time: 2021-02-28 14:13:38
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

double c;

bool check(double mid) {
    auto res = mid * mid + sqrt(mid);
    return res >= c;
}

int main() {
    STD;
    cin >> c;
    // cout << setprecision(20);
    double l = 0, r = 1e10;
    while(r - l >= 1e-7) {
        double mid = (r + l) / 2;
        if (check(mid)) r = mid;
        else l = mid;
    }
    printf("%.15f\n", r);
    return 0;
}
