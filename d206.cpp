#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int a[n][n];
		int s[n+1][n+1];
		for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
		for(int i=0;i<n;i++)s[i][0]=0;
		for(int j=0;j<n;j++)s[0][j]=0;
		int ans=0;
		for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)s[i][j]=a[i-1][j-1]+s[i-1][j]+s[i][j-1]-s[i-1][j-1];
		for(int i1=0;i1<=n;i1++)for(int i2=i1+1;i2<=n;i2++)
			for(int j1=0;j1<=n;j1++)for(int j2=j1+1;j2<=n;j2++)
				ans=max(ans,s[i2][j2]+s[i1][j1]-s[i1][j2]-s[i2][j1]);
		printf("%d\n",ans);
	}
}

