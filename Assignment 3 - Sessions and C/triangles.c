#include <stdio.h>
#include <stdlib.h>
//elias tamraz
//260871813

int main(int argc, char*argv[])
{
int i,k,j;
int size=0;
     //checks if the user enters the number from bash 
     if (argc ==1){   //the user does not enter any argument in bash
     printf("enter your argument: ");
     scanf("%d", &size);
                  }else{  //the user enters at least one argument in bash
                  size = atoi(argv[1]);
                        }


      while(size<=0){
      printf("An incorrect triangle size was inputted. The size must be greater than 0 and an integer number.  Syntax: ./triangles SIZE\n");
      printf("Please enter your argument: ");
     if( scanf("%d", &size)!=1){ //checks if the input is not an integer
        printf("An incorrect type of argument was inputted.the size must be a positive integer\n");
        return -1; //exit 

     }
                     }
     for (i=0; i<=size-1;i++) {

         for(k=i;k<=size-2;k++){
         printf(" ");
                               }
            for(j= i; j>=0;j--){
            printf("*");
                               }
            printf("\n");
                               }

return 0;
}








