#include <stdio.h>
 #include <string.h>

    int main(void)
    {
    
    char str[100];
    printf("enter the string you need !") ;   
   fgets(str,100 , stdin);  // بتحسب "\n" كخطوة فتنزل سطرين
    // For Solving "\n"
    // #include <string.h>
    //strcspn(str,"\n");  -> return index of "\n"
    
    str[strcspn(str,"\n")] = '\0' ;
    
    // scanf("%s",str);
    
    puts(str); // for print string
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$4");
    

    }

