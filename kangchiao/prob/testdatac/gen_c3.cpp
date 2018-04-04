#include<bits/stdc++.h>
using namespace std;
int main(){
	char c[20]="b956_06.in";
	srand(time(NULL));
	for(int s=5;s<=9;s++){
		c[6]='0'+s;
		freopen(c,"w",stdout);
		int t=10;
		printf("%d\n",t);
		while(t--){
			int n,ma,mb,k,a,b;
			n=((unsigned)rand()%80000)+10000;
			ma=(unsigned)rand()%(4*n);
			mb=(unsigned)rand()%(4*n);
			k=rand()%(n/5000+1)+1;
			if(t%5)k=min(n/2+1,n);
			a=rand()%n;
			b=rand()%n;
			printf("%d %d %d %d\n%d %d\n",n,ma,mb,k,a,b);
			for(int i=0;i<ma;i++){
				int u,v;
				u=rand()%n;
				v=rand()%n;
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
}	 
