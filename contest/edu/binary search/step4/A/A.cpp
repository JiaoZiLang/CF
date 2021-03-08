/*
 * Author: jiaozilang
 * Time: 2021-03-04 17:12:37
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

int n, d;
int a[N];
double qm[N];

bool check(int mid) {

}

int main() {
    STD;
    cin >> n >> d;
    REP(i, 1, n) cin >> a[i];

    int ans_left = -1, ans_right = -1;
	int min_left = -1, min_right = -1;
    double l = 0, r = 101;
    while(r - l > 1e-6) {
        double mid = (l + r) / 2;
        REP(i, 1, n) qm[i] = qm[i-1] + a[i] - mid;
        double minv = 0;
        min_left = 1; 
        bool app = false;
        REP(i, d, n) {
            if (qm[i] >= minv) {
                app = true;
                min_right = i;
                break;
            }

            if (qm[i - d + 1] < minv) {
                minv = qm[i - d + 1];
                min_left = i - d + 2;
            }
        }

        if (app) {
            l = mid;
            ans_left = min_left;
			ans_right = min_right;
        } else {
            r = mid;
        }
    }
    cout << ans_left << " " << ans_right;
    return 0;
}
