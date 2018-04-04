int main(){
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(i==0&&j==0)D[i][j]=A[i][j];
			else if(i==0)D[i][j]=D[i][j-1]+A[i][j];
			else if(j==0)D[i][j]=D[i-1][j]+A[i][j];
			else D[i][j]=max(D[i-1][j],D[i][j-1])+A[i][j];
		}
	}
}

