#include<stdio.h>
#include<math.h>

int main(){

   int A = 12, B = 11, C = 10;

   if(A > B && A > C){
     printf("%d ", A);
     if (B > C){
        printf("%d %d ", B, C);
     }else if(C > B){
        printf("%d %d ", C, B);
     }
   }else if(B > A && B > C){
      printf("%d ", B);
      if(A > C){
        printf("%d %d ", A, C);
      }else if(C > A){
        printf("%d %d ", C, A);
      }
   }
}