#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)){
		if(n==0)break;
		long long int a[n];
		for(int i=0;i<n;i++)scanf("%lld",&a[i]);
		sort(a,a+n);
		long long int ans=1;
		for(int i=0;i<n;i++)ans+=a[i];
		ans+=a[n-1];
		printf("%lld\n",ans);
	}
}
