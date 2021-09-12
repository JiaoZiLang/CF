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

const int N = 1e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int main() {
    STD;
    int T;
    cin >> T;
    while(T--) {
        string str;
        cin >> str;
        unordered_map<char, int> mp;

        for (auto x : str) mp[x]++;
        int cnt = 0;
        for (auto x : mp) {
            if (x.second >= 2) cnt += 2;
            else cnt += 1;
        }
        cout << cnt / 2 << "\n";
    }
    return 0;
}