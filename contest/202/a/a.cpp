/* 
 * Author: jiaozilang
 * Time: 2021-05-24 17:08:16
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

const int N = 1e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s.back();
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == s[i-1]) cout << s[i];
        else break;
    }
    return 0;
}
