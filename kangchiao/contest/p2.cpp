#include<cstdio>
#include<cstdlib>
int dealMaxDamage(int &h){
	int time=0,damage=1;
	while(damage<=h){
		h-=damage;
		time++;
		damage*=2;
	}
	return time;
}
int dealRestDamage(int &h){
	int time=0;
	while(h){
		time+=h%2;
		h/=2;
	}
	return time;
}
int main(){
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		int H,ans=0;
		scanf("%d",&H);
		ans+=dealMaxDamage(H);
		ans+=dealRestDamage(H);
		printf("%d\n",ans);
	}
}
