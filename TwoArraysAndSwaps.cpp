#include <bits/stdc++.h>

using namespace std;

#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ui unsigned int
#define lli long long int
#define ll long long
#define si(x)   scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x)  cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//code hear
	int t;
	cin >> t;
	while (t--) {
		lli n, sum = 0, k;
		cin >> n >> k;
		int a[n], b[n];
		for (int i = 0; i < n; cin >> a[i++]);
		for (int i = 0; i < n; cin >> b[i++]);
		sort(a, a + n);
		sort(b, b + n);
		int r = n - 1, l = 0;
		for (int i = 0; i < k; i++) {
			if (a[l] < b[r]) {
				a[l++] = b[r--];
			}
		}
		for (int i = 0; i < n; i++)
			sum = sum + a[i];
		cout << sum << endl;
	}
	return 0;
}




















