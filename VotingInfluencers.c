int main()
{
	int n = 14;
    char a[50]="--AB--AB---A--";
    int p=0, x1=0, x2=0;
    for(int i=0;i<n;i++){
    	if(a[i] == 'B'){
    		x1 = i+1;
    		i++;
    		p=1;
    	}
    	if(a[i] == 'A' && p == 1){
    		x2 = i-1;
    		p=2;
    	}
    	if(p==2){
    		while(x1<x2){
    			a[x1]='B';
    			a[x2]='A';
    			x1++;
    			x2--;
    		}
    		if(x1==x2){
    			a[x1]='X';
    		}
    		p=0;
    	}
    }
    printf("%s", a);
    for(int i=0;i<n;i++){
    	if(a[i]== 'A'){
    		x1=i-1;
	    	while(x1>0 && a[x1] == '-'){
	    		a[x1]='A';
	    		x1--;
	    	}
    	}
    }
    for(int i=0;i<n;i++){
    	if(a[i]=='B'){
    		x1=i+1;
    		while(i<n && a[x1] == '-'){
    			a[x1]='B';
    			x1++;
    		}	
    	}    	
    }

    for(int i=0;i<n;i++){
    	if(a[i]=='A')
    		c1++;
    	if(a[i]=='B')
    		c2++;    	
    }
    if(c1>c2)
    	printf("A\n");
    else if(c2>c1)
    	printf("B\n");
    else
    	printf("Coalition government\n");


    return 0;
}
