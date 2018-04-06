#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long int a[n];
		for(int i=0;i<n;i++)scanf("%lld",&a[i]);
		sort(a,a+n);
		long long int ans=0;
		if(n%2)
			for(int i=1;i<n;i+=2)ans+=4*a[i];
		else
			for(int i=0;i<n;i+=2)ans+=4*a[i];
		printf("%lld\n",ans);
	}
}


