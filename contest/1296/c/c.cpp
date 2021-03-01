/*
 * Author: jiaozilang
 * Time: 2021-01-10 16:39:42
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

const int N = 2e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int main() {
    STD;
    int T;
    cin >> T;
    while(T--) {
        map<PII, int> m;
        int n;
        cin >> n;
        string str;
        cin >> str;
        int x = 0, y = 0;
        int res_l = -1, res_r = -1;
        int len = INF;
        for (int i = 0; i <= str.size(); i++) {
            m[make_pair(x, y)] = i + 1;
            if (str[i] == 'L') {
                x -= 1;
            } else if (str[i] == 'R') {
                x += 1;
            } else if (str[i] == 'U') {
                y -= 1;
            } else if (str[i] == 'D') {
                y += 1;
            } else {
                break;
            }

            // cout << str[i] << " " << (x + mod) % mod << " a " << (y + mod) % mod << endl;
            if (m.count(make_pair(x, y))) {
                int j = m[make_pair(x, y)];
                if (i - j + 1 < len) {
                    len = i - j + 1;
                    res_l = j;
                    res_r = i +1;
                }
            }
        }

        if (len != INF) cout << res_l << " " << res_r << endl;
        else cout << "-1" << endl; 
    }
    return 0;
}
