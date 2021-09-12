/*
 * Author: jiaozilang
 * Time: 2021-07-24 15:20:22
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
        int vec[N] = {0};
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> v;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
            if (mp[x] <= k) {
                v.push_back({x, i});
            }
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size()/k*k; i++) {
            vec[v[i].second] = i % k + 1; 
        }

        for (int i = 0; i < n; i++) {
            cout << vec[i] << " \n"[i == n-1];
        }
    }
    return 0;
}