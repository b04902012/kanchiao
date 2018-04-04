#include<cstdio>
int main(){
	int n;
	while(scanf("%d",&n)){
	int ans=0;
	while(n>1){
		ans+=n-1;
		n=(n+1)/2;
	}
	printf("%d\n",ans);
	}
}
