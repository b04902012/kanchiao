#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main(){
	/*char ins[50]="testdatac/b956_01.in";
	char outs[50]="testdatac/b956_01.out";
	char outs[50]="testdatac/out";
	freopen(outs,"w",stdout);
	for(int s=0;s<10;s++){
		ins[16]='0'+s;
		outs[16]='0'+s;
		freopen(ins,"r",stdin);
		freopen(outs,"w",stdout);*/
		int t;
		scanf("%d",&t);
		while(t--){
			int n,ma,mb,k;
			scanf("%d%d%d%d",&n,&ma,&mb,&k);
			int a,b;
			scanf("%d%d",&a,&b);
			vector<int>va[n];
			vector<int>vb[n];
			bool ra[n];
			bool rb[n];
			for(int i=0;i<n;i++)ra[i]=rb[i]=false;
			for(int i=0;i<ma;i++){
				int u,v;
				scanf("%d%d",&u,&v);
				va[u].push_back(v);
			}
			for(int i=0;i<mb;i++){
				int u,v;
				scanf("%d%d",&u,&v);
				vb[u].push_back(v);
			}
			queue<pair<int,int> >q;
			q.push(make_pair(a,0));
			while(!q.empty()){
				pair<int,int>p=q.front();q.pop();
				//printf("%d %d\n",p.first,p.second);
				int v=p.first;
				ra[v]=true;
				if(p.second<k){
					for(int i=0;i<va[v].size();i++){
						int u=va[v][i];
						if(!ra[u])
							q.push(make_pair(u,p.second+1));
						ra[u]=true;
					}
				}
			}
			q.push(make_pair(b,0));
			while(!q.empty()){
				pair<int,int>p=q.front();q.pop();
				//printf("%d %d\n",p.first,p.second);
				int v=p.first;
				rb[v]=true;
				if(p.second<k){
					for(int i=0;i<vb[v].size();i++){
						int u=vb[v][i];
						if(!rb[u])
							q.push(make_pair(u,p.second+1));
					}
				}
			}
			bool ans=false;
			for(int i=0;i<n;i++){
				if(ra[i]&&rb[i]){
					ans=true;
					break;
				}
			}
			printf((ans)?"Yes.\n":"No.\n");
		}
	//}
}
