#include<bits/stdc++.h>
using namespace std;
int main(){
	char c[20]="in2.txt";
	srand(time(NULL));
	for(int s=2;s<=5;s++){
		c[2]='0'+s;
		freopen(c,"w",stdout);
		int t=10;
		printf("%d\n",t);
		while(t--){
			int n,ma,mb,k,a,b;
			n=(rand()%500)+400;
			ma=rand()%(4*n);
			mb=rand()%(4*n);
			k=rand()%(n/80+1)+1;
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
