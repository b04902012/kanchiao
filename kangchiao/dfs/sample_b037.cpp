void search(int k){				//試第k位的過程
	if(k==N){					//如果0~N-1位都填上了數字
		output();				//就把他輸出吧
		return;					//然後不用去試第N位了，因為沒有第N位
	}
	for(int i=0;i<=M;i++){		//然後對於0~M的所有數字
		array[k]=i;				//都填進第k位看看
		search(k+1);			//填完一個數字之後就去試第k+1位
								//k+1位以後都試完之後，就把下個數字填進第k位
	}
	return;						//試完惹
}


