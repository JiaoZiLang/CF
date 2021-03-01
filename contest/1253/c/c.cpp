/*
 * Author: jiaozilang
 * Time: 2021-01-14 10:32:56
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

const int N = 1e6+10;
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;

int n, m;
LL arr[N], sum[N], sum1[N]; 

int main() {
    STD;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    sort(arr + 1, arr + 1 + n);

    for (int i = 1; i <= n; i++) {
        sum[i] += sum[i-1] + arr[i];
        if (i - m >= 1) sum1[i] += sum[i] + sum1[i-m]; 
        else sum1[i] = sum[i];
        
        cout << sum1[i] << " ";
    }
    return 0;
}
