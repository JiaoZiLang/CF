/*
 * Author: jiaozilang
 * Time: 2021-01-12 15:52:15
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

const int N = 1e5+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int main() {
    //STD;
    int n;
    cin >> n;
    cout << (n+1)*3+1<<endl << "0 0" << endl;
    for (int i = 0; i <= n; i++) {
        printf("%d %d\n",i+1,i+1);
        printf("%d %d\n",i+1,i);
        printf("%d %d\n",i,i+1);
    }
    return 0;
}
