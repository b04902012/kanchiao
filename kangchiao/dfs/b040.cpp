#include<cstdio>
#include<iostream>
using namespace std;
void print(int t,int* ans,int* a){
	for(int i=0;i<t;i++){
		if(i)cout<<" ";
		cout<<a[ans[i]];
	}
	cout<<endl;
}
void dfs(int k,int sum,int* a,int n,int m,int* ans,int t,bool& no){
	if(sum==m){
		no=false;
		print(t,ans,a);
	}
	if(sum>m)return;
	for(int i=k+1;i<n;i++){
		ans[t]=i;
		dfs(i,sum+a[i],a,n,m,ans,t+1,no);
	}
}
using namespace std;
int main(){
	int n;
	int m;
	cin>>n>>m;
	int a[n];
	int ans[n];
	for(int i=0;i<n;i++)cin>>a[i];
	bool no=true;
	dfs(-1,0,a,n,m,ans,0,no);
	if(no)cout<<"NO"<<endl;
}
