void search(int k){				//把石獅子放在第k個位置的過程
	if(k==N){					//如果已經排完了第0~N-1隻石獅子
		output();				//那麼就輸出吧
		return;					//然後也不用試第N隻石獅子了，因為沒有
	}
	for(int i=1;i<=N;i++){		//對於每一隻石獅子
		if(used[i]==false){		//如果前面還沒有被放過
			used[i]=true;		//就標記一下，表示放過了
			array[k]=i;			//並且把他放在第k個位子
			search(k+1);		//接著去放第k+1個位置的石獅子
			used[i]=false;		//回過頭來試第k個位置的其他可能性，所以當作剛才沒放過
		}
	}
	return;						//試完惹
}


