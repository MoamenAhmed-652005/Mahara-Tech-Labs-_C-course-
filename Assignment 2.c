// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int y,x ;
    printf("Enter Your ID :");
    scanf("%d",&y);
    printf("Enter Your Password :");
    scanf("%d",&x);
    switch (y){
        
        case 121425 :
            switch (x){
                case 12345 :
                    printf ("Login Successful !" );
                    break;
                    
                default : 
                    printf("Password incorrect ");
                    break;
            }
            
        default :
            printf("ID Error , Try again");
                break;
    }
    return 0;
}

-------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    
    int y,x,z ;
    printf("Enter Num 1 : ");
    scanf("%d",&y);
    
    printf("Enter Num 2 : ");
    scanf("%d",&x);
    
    printf("Enter Num 3 : ");
    scanf("%d",&z);
    
    int max = y;
    
    if(max < x){
        max = x ;
    }
    else if (max < z){
        
        max = z;
    }
    
    printf("The max Num is %d",max);
    
    return 0;
}


--------------------------------------------------- Lab 3-----------
#include <stdio.h>

int main() {
    
    int C,sum =0  ;
    float avg ;
    
    for(int i =1 ; i<11 ;i++){
        printf("Num %d :",i);
        scanf("%d",&C);
        sum += C ;
    
    }
    avg = (sum /10) ;
    printf("sum = %d \n",sum);
    printf("average  = %f",avg);
    
    return 0;
}

--------------------------------------------------- Lab 4-----------

#include <stdio.h>


int main(void)
{
	int X = 0 ;
	printf("Enter the answer of 3*4:");
	scanf("%d",&X);
	
	while(X != 12){
		printf("Not correct , Try again : ");
		scanf("%d",&X);
	}
	
	printf("Thank you");
	return 0 ;
}

==============================

#include <stdio.h>


int main(void)
{
	int R =0 ;
	printf("Enter the Multiplication num : ");
	scanf("%d",&R);
	while (R == 7){
	    
	    for (int i=1;i<13;i++){
	        printf("7x%d = %d \n",i,i*7);
	        
	    }
	    R = 0;
	}
	
	printf("    Done!    ");
	
	return 0 ;
}
===============================

#include <stdio.h>


int main(void)
{
	int R =0 ,fac=1 ;
	printf("Enter the num : ");
	scanf("%d",&R);
    for(int i =1 ;i <= R; i++){
        
        fac *=i ;
    }

    printf("the fatorial is %d",fac);
	return 0 ;
}

===================================

#include <stdio.h>


int main(void)
{	int R =0 , i = 1 ;
	printf("Enter the Multiplication num : ");
	scanf("%d",&R);
	
    do {
    printf("%d x %d =%d \n",R,i,R*i);
    i++;
        
    }while(i<=12);
    printf("    Done!   ");

	return 0 ;
}
