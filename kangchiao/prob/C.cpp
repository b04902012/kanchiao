#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#ifdef _DEBUG_
	#define debug(...) printf(__VA_ARGS__)
#else
	#define debug(...) (void)0
#endif
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
typedef vector<int> VI;

const int MAXN = 100000 + 10;

VI e1[MAXN], e2[MAXN];
int d1[MAXN], d2[MAXN];

void bfs(int s, int *d, VI *e) {
	fill(d, d+MAXN, MAXN);
	queue<int> q;
	d[s] = 0;
	q.push(s);
	while(!q.empty()) {
		int u = q.front();	q.pop();
		for(int v : e[u]) {
			if(d[v] > d[u]+1) {
				d[v] = d[u]+1;
				q.push(v);
			}
		}
	}
}

int main() {
/*	char ins[50]="testdatac/b956_01.in";
	char outs[50]="testdatac/out1";
		freopen(outs,"w",stdout);
	for(int s=0;s<10;s++){
		ins[16]='0'+s;
		freopen(ins,"r",stdin);*/
		int t;
		scanf("%d", &t);
		assert(0 <= t && t <= 10);
		while(t--) {
			int n, m1, m2, k;
			scanf("%d%d%d%d", &n, &m1, &m2, &k);
			assert(1 <= n && n <= 100000);
			assert(1 <= k && k < n);
			int a, b;
			scanf("%d%d", &a, &b);
			assert(0 <= a && a <= n-1);
			assert(0 <= b && b <= n-1);
			while(m1--) {
				int u, v;
				scanf("%d%d", &u, &v);
				e1[u].PB(v);
			}
			while(m2--) {
				int u, v;
				scanf("%d%d", &u, &v);
				e2[u].PB(v);
			}

			bfs(a, d1, e1);
			bfs(b, d2, e2);

			bool flag = false;
			for(int i=0; i<n && !flag; i++)
				flag = (d1[i] <= k && d2[i] <= k);
			
			puts(flag ? "Yes." : "No.");
			for(int i=0;i<n;i++){
				e1[i].resize(0);e2[i].resize(0);
			}
		}
	//}
    
    return 0;
}
