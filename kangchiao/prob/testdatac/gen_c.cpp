#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("in1.txt","w",stdout);
	srand(time(NULL));
	int t=10;
	printf("%d\n",t);
	while(t--){
		int n,ma,mb,k,a,b;
		n=rand()%1000+1;
		ma=rand()%(4*n);
		mb=rand()%(4*n);
			ma=min(ma,n*(n-1)/2);
			mb=min(mb,n*(n-1)/2);
		k=rand()%(n/80);
		k=1;
		a=rand()%n;
		b=rand()%n;
		printf("%d %d %d %d\n%d %d\n",n,ma,mb,k,a,b);
		for(int i=0;i<ma;i++){
			int u,v;
			u=rand()%n;
			v=rand()%n;
			if(t%3&&i==0){
				u=a;v=b;
			}
			printf("%d %d\n",u,v);
		}
		for(int i=0;i<mb;i++){
			int u,v;
			u=rand()%n;
			v=rand()%n;
			printf("%d %d\n",u,v);
		}
	}
}
