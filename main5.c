#include <stdio.h>
#include <math.h>

int main(void) {

  int num;


  printf("Digite um numero: ");
  scanf("%d", &num);
  
    if (num == 5){
        printf("O numero e igual a 5");
    }else if (num == 200){
        printf("O numero e igual a 200");
    }else if (num == 400){
        printf("O numero e igual a 400");
    }else if (num > 500 && num < 1000){
        printf("O numero esta no intervalo entre 500 e 1000");
    }else{
            printf("O numero nao se encaixa em nenhuma das opcoes");
    }
   
  system("pause");
}
