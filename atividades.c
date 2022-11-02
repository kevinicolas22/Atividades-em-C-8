#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
//Q1

{
  int s[5];

  for (size_t j = 0; j < 5; j++) {
    printf("\nDigite um valor ");
    scanf("%d", &s[j]);
  }

  printf("%s%8s\n", "\nElemento", "Valor\n");
  
  for (size_t j = 0; j < 5; j++) {
    printf("%7zu%8d\n", j, s[j]);
  }

  int t[5];
  
  for (size_t j = 0; j < 5; j++) {
    printf("\nDigite um valor ");
    scanf("%d", &t[j]);
  }

  printf("%s%8s\n", "\n\nElemento", "Valor\n");
  
  for (size_t j = 0; j < 5; j++) {
    printf("%7zu%8d\n", j, t[j]);
  }

  int a[10];
   for (size_t i = 0; i < 5; i++) {
        a[i*2] = s[i];
    }
    for (size_t i = 0; i < 5; i++) {
        a[i*2+1] = t[i];
    }
 
  printf("%s%8s\n", "\n\nElemento", "Valor\n");
  
  for (size_t i = 0; i < 10; i++) {
    printf("%7zu%8d\n", i, a[i]);
  }
}

//Q2

{
  int i[7] = {0};
  int b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
  printf("Gerando 100 valores aleatorios:\n\n");
  
  for (size_t i = 0; i < 100; i++)
  {
    //gerando valores aleatórios entre zero e 100 
  
    int a = rand()%7;
    printf("%d ", a);
    if(a == 1){
      b++;
    }
    if(a == 2){
      c++;
    } 
    if(a == 3){
      d++;
    } 
    if(a == 4){
      e++;
    } 
    if(a == 5){
      f++;
    } 
    if(a == 6){
      g++;
    } 
    
  }
  printf("\n\nVoce teve %d numeros 1\n", b);
  printf("\nVoce teve %d numeros 2\n", c);
  printf("\nVoce teve %d numeros 3\n", d);
  printf("\nVoce teve %d numeros 4\n", e);
  printf("\nVoce teve %d numeros 5\n", f);
  printf("\nVoce teve %d numeros 6\n", g);
}

//D1

{
  int culpado = 0;
 
  printf("\nDigite 0 para não e 1 para sim\n\n");
  int perguntas[5];
    
      inicio:
   printf("\nTelefonou para a vítima? ");
    scanf("%d", &perguntas[0]); 
       if(perguntas[0] != 0 && perguntas[0] != 1 ){
    goto inicio;
    }
      inicio1: 
   printf("\nEsteve no local do crime? ");
    scanf("%d", &perguntas[1]);
       if(perguntas[1] != 0 && perguntas[1] != 1 ){
    goto inicio1;
    }
       inicio2:
   printf("\nMora perto da vítima? ");
    scanf("%d", &perguntas[2]);
       if(perguntas[2] != 0 && perguntas[2] != 1 ){
    goto inicio2;
    }
       inicio3:
   printf("\nDevia para a vítima? ");
    scanf("%d", &perguntas[3]);
       if(perguntas[3] != 0 && perguntas[3] != 1 ){
    goto inicio3;
    }
       inicio4:
   printf("\nJá trabalhou com a vítima? ");
    scanf("%d", &perguntas[4]);
       if(perguntas[4] != 0 && perguntas[4] != 1 ){
    goto inicio4;
    }
    
  
  printf("\nPergunta   Resposta\n\n");
  
  for (size_t j = 0; j < 5; j++) {
    printf("%7zu%8d\n", j+1, perguntas[j]);
    if(perguntas[j] == 1){
      culpado++;
    }
  }
  printf("\nRespondeu sim para %d\n\nVocê é ", culpado);

  if(culpado == 2){
    printf("Suspeito");
  }
  else if(culpado > 2 && culpado < 5){
    printf("Cúmplice");
  }
  else if(culpado == 5){
    printf("Culpado");
  }
  else{
    printf("Inocente");
  }
}

//D2
{
   float nota[100];
    int j, i, total; //pessoas = , primeiro, segundo, menor;
   //float media = ;
    
       // pessoas = pessoas + 1;
       // media = idade + media;
     //for (j=0; j<strlen(nota)-1; j++){
      
    for(i = 1; i != -1; i++){
        
        printf ("\n\nDigite a nota: ");
        scanf  ("%f", nota);
        printf("\nNota %d: %.1f", i, *nota);
        if(*nota == -1){
            printf("\n\nNota invalida");
            break;
          }
         total = i;
        }
  
       //}
      printf("\n\nForam lidos %d valores", total);
      printf("\n\nNotas lidas %d valores", notas);
        
        
        
       // if (primeiro>segundo){
       //     menor = segundo;
       // }else if (segundo>primeiro){
      //      menor = primeiro;  
        
    }
    
   // media = media / pessoas;
    //printf ("\nNumero de pessoas: %d\n", pessoas);
    //printf ("\nMedia: %f\n", media);

{
  int vet[5],i,contador=0, num[5],j;


   for(i=0;i<5;i++) {
    printf("Digite o valor %i: ",i+1);
    scanf("%i",&vet[i]);
    }
 for (j=0;j<5;j++)

    {
      printf("valores %d",vet[i]);  
    }

}
    

//Exerciocio 3

{
int i;
  char nome[100];
  printf("Nome: ");
  scanf("%s", nome);
  printf("Valor da variavel texto = %s\n\n", nome);
  for (i=0; i<strlen(nome); i++)
  {
    printf("%c\n\n", nome[i]);
  }
}

//D3
{
int i, j, k, tamanho;
  char nome[100];
  printf("Nome: ");
  scanf("%s", nome);
  
  for (i=0; i<strlen(nome)-1; i++)
  {
    for (j=0; j <= i; j++) printf("%c", nome[j]);
		printf("\n");
  }

  for (i=strlen(nome); i>=0; i--)
  {     
    
    for (j=0; j <= i-1; j++) printf("%c", nome[j]);
		printf("\n");
  }
}