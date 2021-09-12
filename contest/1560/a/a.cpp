/*
 * Author: jiaozilang
 * Time: 2021-08-28 11:52:43
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

int vec[1010];

void init() {
    int i = 1, idx = 1;
    while(i <= 1000) {
        while(idx % 3 == 0 || idx % 10 == 3) idx++;
        vec[i++] = idx++;
    } 
}

int main() {
    STD;
    int T;
    cin >> T;
    init();
    while(T--) {
        int n;
        cin >> n;
        cout << vec[n] << endl;
    }
    return 0;
}