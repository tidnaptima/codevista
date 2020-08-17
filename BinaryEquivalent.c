/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

unsigned int countSetBits(unsigned int n) 
{ 
    unsigned int count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
} 

int main()
{
    int n = 3;
    unsigned int p1=0,p2=0, p3=0, x1=0, x2=0;
    int arr[20] = {2, 7, 10};
    int val=0;
    
    int large = arr[0];
    for(int i=0;i<n;i++){
    	if(arr[i]>large)
    		large = arr[i];
    }
    printf("Large =%d \n", large);
    
    int length = (int)log2(large)+1;
    printf("Length =%d\n", length);
    
    #if 1
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    	    int ab1 = i;
    	    int ab2 = j;
    	    x1=0;
    		x2=0;
    		while(ab1<=ab2){
    		    
    			p2 = countSetBits(arr[ab1]);
    			p3 = length - p2;
    			x1 += p2;
    			x2 += p3;
    			ab1++;
    		}
    // 		printf("set %d, %d\n", i,j);
    // 		printf("val - %d, %d\n", x1, x2);
    		
    		if(x1==x2 && (x1>0 || x2>0)){
    		    printf("i and j and x1 and x2 %d, %d, %d, %d\n", i,j, x1, x2);
    		    val++;
    		}
    	}
    }
    
    printf("Value - %d\n", val);

    for (int i = length-1; i >= 0; i--) { 
        int k = val >> i; 
        if (k & 1) 
            printf("1"); 
        else
            printf("0");
    }
    #endif

    return 0;
}
