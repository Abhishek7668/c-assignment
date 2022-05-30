 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 int main()
 {  

	int a[5][10]={50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,1,2,3,4,5,6,7,8,9,10};
    int i,j;
    for (i=0;i<5;i++){
    	for(j=0;j<10;j++){
   		printf("%d\t",a[i][j]);
		}
		printf("\n");
}     
 printf("\n");
 
      int num,p1,p2,t=0,t1=0;
       srand(time(0));
       
     
	 
	do{
	  
       
       printf("\nplayer 1 press:1\n");
       scanf("%d",&p1);
       
       if(p1==1)
	   
       num = 1+rand()%6;
       printf("dice:%d\n",num);
       t+=num;
         printf("step:%d",t);
          if (t==5){
		  
         	printf("you are bitten by snake : ");
         	t=t-2;
         		printf("Step:%d",t);
         }
         
         	
        
         	
        else if(t==7){
		
        printf("you are jump  in 9:" );
		 t=t+2;
		 printf("step:%d",t);
	}
	   else if(t==23)
{          printf("you are jump in 32\n");
            t=t+9;
            printf("step:%d",t);
            
		 }	
		 else if(t==35){
		 	printf("you are bitten by snake:18\n");
		 	t-=17;
		 	printf("step:%d",t);
		 }	 
		 else if(t==48){
		 	printf("you are bitten by snake:38\n");
		 	t-=10;
		 	printf("step:%d",t);
}
	
       
       if(t>=50){
       printf("CONGRATULATIONS !!!!!  first player win");
       break;
       }
     
        printf("\n\nplayer 2 press:2\n");
       scanf("%d",&p2);
        if (p2==2){
	   
       num = 1+rand()%6;
       printf("dice:%d\n",num);
    
     t1+=num;
      printf("step:%d",t1);
        if (t1==5){
		
         	printf("you are bitten by snake 3: %d",t1-2);
         	t1=t1-2;
         	printf("step:%d",t1);
         }
        
         	
        else if(t1==7){
		
        printf("you are jump  in 9 :%d",t1+2);
        t1=t1+2;
        printf("step:%d",t1);
    }    
         else if(t1==23)
{          printf("you are jump in 32\n");
            t1=t1+9;
            printf("step:%d",t1);
            
		 }	
		 else if(t1==35){
		 	printf("you are bitten by snake:18\n");
		 	t1-=17;
		 	printf("step:%d",t1);
		 }	 
		 else if(t1==48){
		 	printf("you are bitten by snake:38\n");
		 	t1-=10;
		 	printf("step:%d",t1);
}
      if(t1>=50){
      printf("CONGRATULATIONS !!!!! secound player win");
      break;
      }
   }
}while((t<=50)||(t1<=50));
}


