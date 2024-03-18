#include <stdio.h>

   int CalculateFactoral(int);

int main(){

   int n ;

   printf("Enter a positive number :");

   scanf("%d" , &n);
   
   long long result = CalculateFactoral(n);

   printf("The factoral of %d is  %lld" , n , result);

    return 0 ;

}
   int CalculateFactoral(int n){

          if(n == 0 || n == 1){

          return 1 ;
          }else{

          long long result = 1 ;
        
            for (int i = 2 ; i <= n ; i++){

                result = result * i ;
            }
                      return result ;

          }
 // re = 2 * 1 = 2 // 2 * 3 = 6 // 6 * 4 = 24 
   }
