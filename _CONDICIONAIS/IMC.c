#include <stdio.h>
// -----------------------------------
// IMC
// Até 24,9 - Peso Normal 
// De 25,0 - 29,9 - Sobrepeso
// De 30,0 - 34,9 - Obesidade Grau I
// De 35,0 - 39,9 - Obesidade Grau II
// de 40,0 acima  - Obesidade Grau III
// ------------------------------------

int main (){

float peso, altura, imc;

printf("Entre com sua altura: \n");
scanf("%f", &altura);

printf("Entre com seu peso: \n");
scanf("%f", &peso);

imc = peso /(altura*altura);
printf("Seu  IMC e %.2f \n",imc);

if (imc <= 24.9){

    printf("Voce esta com o peso normal \n");

}else if (imc >= 25.0 && imc<= 29.9 ) {
    printf("Voce esta com sobrepeso \n");

}else if (imc > 30.0 && imc<=34.9){
    printf("Voce esta com obesidade grau I \n");

}else if (imc >35.0 && imc<=39.9){
        printf("Voce esta com obesidade grau II \n");

 }else{
        printf("Voce esta com obesidade grau III \n");
                }  

}