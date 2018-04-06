#include<cstdio>
#include<iostream>
using namespace std;
void print(int n,int *ans){
	for(int i=0;i<n;i++){
		if(i)cout<<" ";
		cout<<ans[i]+1;
	}
	cout<<endl;
}
void dfs(int c,int n,bool* r,bool* d,bool* s,int *ans){
	if(c==n){
		print(n,ans);
		return;
	}
	for(int i=0;i<n;i++){
		if(!r[i]&&!d[i-c+n-1]&&!s[i+c]){
			ans[c]=i;
			r[i]=d[i-c+n-1]=s[i+c]=true;
			dfs(c+1,n,r,d,s,ans);
			r[i]=d[i-c+n-1]=s[i+c]=false;
		}
	}
}
	
int main(){
	int n;
	cin>>n;
	bool r[n],d[2*n-1],s[2*n-1];
	int ans[n];
	for(int i=0;i<n;i++)r[i]=false;
	for(int i=0;i<2*n-1;i++)d[i]=s[i]=false;
	dfs(0,n,r,d,s,ans);
}
