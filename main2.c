#include<stdio.h>
#include<math.h>

main(){

    int A = 65, B = 30, C = 20, D = 165, maior, menor;
    
    if(D > A && D > B && D > C){
      maior = D;
    }else if(A > B && A > C && A > D){
      maior = A;
    }else if(B > A && B > C && B > D){
      maior = A;
    }else{ 
      maior = C;
    }

    if(D < A && D < B && D < C){
      menor = D;
    }else if(A < B && A < C && A < D){
      menor = A;
    }else if(B < A && B < C && B < D){
      menor = A;
    }else{ 
      menor = C;
    }

    printf("\nMaior: %d. \nMenor: %d.", maior, menor);
}