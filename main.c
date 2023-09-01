#include<stdio.h>
#include<math.h>

main(){

    double numero, resultado;

    printf("Digite um numero\n");
    scanf("%lf", &numero);

    if(numero >=0){

       resultado = sqrt(numero);
       printf("\nRaiz quadrada de %.3lf e %.3lf", numero, resultado);
    }else{
        resultado = pow(numero, 2);
        printf("\nO quadrado de %.3lf e %.3lf", numero, resultado);
    }


}