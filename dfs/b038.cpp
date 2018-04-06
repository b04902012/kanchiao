#include<cstdio>
#include<iostream>
using namespace std;
void print(int n,int *s){
	for(int i=0;i<n;i++)cout<<s[i]+1;
	cout<<endl;
}
void dfs(int l, int n, bool* v,int* s){
	if(l==n)print(n,s);
	for(int i=0;i<n;i++){
		if(!v[i]){
			v[i]=true;
			s[l]=i;
			dfs(l+1,n,v,s);
			v[i]=false;
		}
	}
}

int main(){
	int n;
	cin>>n;
	bool v[n];
	for(int i=0;i<n;i++)v[i]=false;
	int s[n];
	dfs(0,n,v,s);
}
