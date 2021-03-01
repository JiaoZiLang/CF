/*
 * Author: jiaozilang
 * Time: 2021-01-10 21:31:20
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
#define mp(a, b) make_pair(a, b)

const int N = 3e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n, k;
        char str[N];
        scanf("%d %d", &n, &k);
        scanf("%s", str+1);
        bool tf = true;
        for (int i = 1; i <= k; i++) {
            int op = 0;
            for(int j = i; j <= n; j+=k) {
                if (str[j] == '1') op |= 1;
                else if (str[j] == '0') op |= 2;
            }
            if (op == 3) {
                tf = false;
                break;
            }
            if (!op) continue;
            if (op == 1) str[i] = '1';
            else str[i] = '0';
        }
        if (!tf) printf("NO\n");
        else {
            int t1 = 0, t2 = 0;
            for (int i = 1; i <= k; i++) {
                if (str[i] == '1') t1 ++;
                else if(str[i] == '0') t2 ++;
            }
            printf(t1 <= k/2 && t2 <= k /2 ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
