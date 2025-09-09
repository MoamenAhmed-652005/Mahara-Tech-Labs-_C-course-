#include <stdio.h>

int main() {
    printf("\t\t   *\n\
          * * \n \
        * * * \n \
       * * * * \n \
      * * * * * \n \
     * * * * * * \n \
    * * * * * * * \n \
    ");
    return 0;
}




#include <stdio.h>

int main() {
    
    int x ,y,z = 0 ;
    printf("Enter num 1 : ");
    scanf("%d",&x);
    printf("Enter num 2 : ");
    scanf("%d",&y);
    printf("Enter num 3 : ");
    scanf("%d",&z);
    
    // without pointer 
      
    printf("NUM 1 : %d \n",z);
    printf("NUM 2 : %d\n",y);
    printf("NUM 3 : %d\n",x);
    
    
    
    return 0;
}

----------------------------------------------------- if conditions -----

#include <stdio.h>

int main() {
    
    while (1){
        
        int X = 1;
        printf("Enter your hour rate : ");
        scanf("%d",&X);
    if(X > 40){
        
        printf("Your Salary : 2500$ \n");
    
    }    
     else if(X <40){
         
         printf("Your Salary : 900$ \n");
     }
        
        
    }

    return 0;
}

-------------------------- Lab 2 
#include <stdio.h>

int main() {
    
    while (1){
        
        int X = 1;
        printf("Enter NUM : ");
        scanf("%d",&X);
       if (X % 2 == 0){
           
         printf("the Num is Even \n");  
       }
       else {
           printf("the Num is Odd \n");
       }
    }
    return 0;
}

--------------------------------------------- Lab 3
#include <stdio.h>

int main() {
    
 
        
        int X = 1;
        printf("Enter Your ID : ");
        scanf("%d",&X);
       
       switch (X){
           
           case 1142 :
                printf("Ahmed ");
           case 1212 :
                printf("Moamen Ahmed ");
            case 1214 :
                printf("Ali Hassan ");
            default : 
                break ; 
       
       
    }
    return 0;
}
