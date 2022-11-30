#include<stdio.h> 


main(){
	
//	int a[5] = {10,20,30,40,50};
//	int b[5] = {50,40,30,20,10}; 
		int a[5],b[5],c[5],i; 
			
		printf("first array\n"); 
		
//int a = 50;
//int b = 10;
//int c;
//
//c = a+b;
//
//printf("%d",c);

		for(i=0;i<5;i++){
	
	 	scanf("%i",&a[i]); 
		
		}
	
		printf("second array\n");  
	
			for(i=0;i<5;i++){ 
 	
	 		scanf("%i",&b[i]);
	 		
		}
		
			for(i=0;i<5;i++){
	
				c[i]=a[i]+b[i];  
				
				printf("sum of two array is [%i] %i\n",i,c[i]); 
				
				}
  
 } 
