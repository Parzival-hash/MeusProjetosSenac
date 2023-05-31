#include<stdio.h>
#include<stdlib.h>


int main(){
   
    int base;
     int altura;
      char opcao;
      
    printf("\nola, esse programa visa calcular a area do   triângulo baseado nos valores inseridos pelo usuário\n");
    
    printf("\ndeseja continuar? S/N\n");
        scanf(" %c", &opcao);
        
        if(opcao == 's'){
          opcao = 1;
        printf("\nok, iremos prosseguir\n");
        }
        
        if(opcao == 'n'){
          opcao = 0;
        printf("ok, iremos finalizar");
         exit(3);
        }
     
    printf("\ninsira o valor da altura na medida de CM\n");
         scanf(" %d", &altura);
        
    printf("\nagora insira da base na medida de CM\n");
          scanf(" %d", &base);
        
        
       int area = base * altura; 
    
    printf("\ncom base nos valores inseridos podemos       concluir que o valor da área do triângulo é  de %dcm\n", area);

    printf("\ndeseja reiniciar o programa?\n");
       scanf(" %c", &opcao);
      
    
    if(opcao == 's'){
          opcao = 0;
        printf("\nok, iremos reiniciar\n");
        return  main ();
        }
        
        if(opcao == 'n'){
          opcao = 1;
        printf("ok, iremos finalizar");
         exit(3);
        }
return 0;
}