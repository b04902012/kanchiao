#include<cstdio>
#include<iostream>
using namespace std;
int dfs(int n){
	if(n<0)return 0;
	if(n==0)return 1;
	return dfs(n-50)+dfs(n-25)+dfs(n-10)+dfs(n-5)+dfs(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<dfs(n);
}
