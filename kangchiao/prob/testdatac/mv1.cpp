#include<cstdio>
#include<cstdlib>
int main(){
	char ins[20]="in1.txt";
	char outs[20]="b956_00.in";
	for(int i=0;i<9;i++){
		ins[2]='0'+i+1;
		outs[6]='0'+i;
		freopen(ins,"r",stdin);
		freopen(outs,"w",stdout);
		char c;
		while(scanf("%c",&c)!=EOF)printf("%c",c);
	}
}
