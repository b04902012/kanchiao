#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int x,y;
	scanf("%d%d",&x,&y);
	int k;
	scanf("%d",&k);
	int b[k][2];
	for(int i=0;i<k;i++){
		scanf("%d%d",&b[i][0],&b[i][1]);
	}
	int q;
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		int c,l;
		scanf("%d%d",&c,&l);
		int nx=x,ny=y;
		if(c==1){
			nx=min(x+l,n);
			for(int i=0;i<k;i++)
				if(b[i][1]==y&&b[i][0]>x&&b[i][0]<=nx)
					nx=b[i][0]-1;
		}
		if(c==2){
			nx=max(x-l,1);
			for(int i=0;i<k;i++)
				if(b[i][1]==y&&b[i][0]<x&&b[i][0]>=nx)
					nx=b[i][0]+1;
		}
		if(c==3){
			ny=min(y+l,n);
			for(int i=0;i<k;i++)
				if(b[i][0]==x&&b[i][1]>y&&b[i][1]<=ny)
					ny=b[i][1]-1;
		}
		if(c==4){
			ny=max(y-l,1);
			for(int i=0;i<k;i++)
				if(b[i][0]==x&&b[i][1]<y&&b[i][1]>=ny)
					ny=b[i][1]+1;
		}
		x=nx;y=ny;
		printf("%d %d\n",x,y);
	}
}
