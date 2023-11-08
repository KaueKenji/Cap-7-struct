#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define ex1

#ifdef ex1
struct dados {
  char var1;
  long var2;
  int var3;
  float var4;
  double var5;
  unsigned char var6;
  unsigned int var7;
  unsigned long var8;
};
// criar struct
struct dados usuario;
void imprimir() {

  printf("\n        10        20%10d%10d%10d%10d%10d\n", 30, 40, 50, 60, 70);

  for (int i = 0; i < 7; i++) {

    printf("1234567890");
  }
  // printf("alinhamento %-10 reservo 10 espaços só pra variavel começando do
  // espaço 1, %10 reserva 10 espaços só pra variavel começando do espaço 10")
  printf("\n    %-10c%-10d%-20ld%-20.2f%-20.2lf", usuario.var1, usuario.var3,
         usuario.var2, usuario.var4, usuario.var5);
  printf("\n          %-20c%-20u%-20lu", usuario.var6, usuario.var7,
         usuario.var8);
}
void Receber() {
  printf("\nDigite o valor do char: ");
  scanf("%c", &usuario.var1);

  printf("\nDigite o valor do long: ");
  scanf("%ld", &usuario.var2);

  printf("\nDigite o valor do int: ");
  scanf("%d", &usuario.var3);

  printf("\nDigite o valor do float: ");
  scanf("%f", &usuario.var4);

  printf("\nDigite o valor do double: ");
  scanf("%lf", &usuario.var5);

  getchar();
  printf("\nDigite o valor do unsigned char: ");
  scanf("%c", &usuario.var6);

  printf("\nDigite o valor do unsigned int: ");
  scanf("%u", &usuario.var7);

  printf("\nDigite o valor do unsigned long: ");
  scanf("%lu", &usuario.var8);
}

int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

  // entrada      

  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    Receber();

    // saída
    imprimir();

    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex2
struct dados {
  char nome[25];
  char end[50];
  char cidade[50];
  char estado[50];
  int cep;
};
int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

  // entrada      
  // criar struct de 4 elementos
  struct dados usuario[4];
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    for (int i = 0; i < 4; i++) {
      printf("\nDigite o %d° nome: ", i+1);
      scanf("%s", usuario[i].nome);

      printf("\nDigite o %d° endereço: ", i+1);
      scanf("%s", usuario[i].end);

      printf("\nDigite a %d° cidade: ", i+1);
      scanf("%s", usuario[i].cidade);

      printf("\nDigite o %d° estado: ", i+1);
      scanf("%s", usuario[i].estado);

      printf("\nDigite o %d° CEP: ", i+1);
      scanf("%d", &usuario[i].cep);
      // fim for
    }
    // função

    // saída
    for (int i = 0; i < 4; i++) {
      printf("\n\nNome: %s\nEndereço: %s\nCidade: %s\nEstado: %s\nCEP: %d",
             usuario[i].nome, usuario[i].end, usuario[i].cidade,
             usuario[i].estado, usuario[i].cep);
      // fim for
    }
    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex3

typedef struct {
float peso;
float altura;

}Dados;

Dados Receber(){
  Dados pe;
  printf("\nDigite o Peso: ");
  scanf("%f", &pe.peso);
  printf("\nDigite a Altura: ");
  scanf("%f", &pe.altura);

  return pe;
}
void Imprimir(Dados pe){
  printf("\nPeso: %.2f", pe.peso);
   printf("\nAltura: %.2f", pe.altura);
  // fim processo
}
float IMC(float p, float a){
  float imc = p/(a*a);

  return imc;
}
int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese");

  // entrada      
  int escolha;
  Dados pessoa[4];
  
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // escohla
    printf("\n       IMC");
    printf("\n____________________");
    printf("\n|1 - Receber Dados  |");
    printf("\n|2 - Imprimir Dados |");
    printf("\n|3 - Calcular IMC   |");
    printf("\n|4 - Sair           |");
    printf("\n|___________________|");

    printf("\nEscolha a opção: ");
    scanf("%d", &escolha);

    // função
    switch(escolha) {
      // receber dados
    case 1: {
      for (int i=0; i<4; i++){
        printf("\nPessoa %d", i+1);  
        pessoa[i] = Receber();
        //fim for
      }
      
      break;
    }
    // imprimir dados
    case 2: {
      printf("\n_________________");
      for (int i=0; i<4; i++){
         printf("\n Pessoa %d", i+1);
        Imprimir(pessoa[i]);
        printf("\n----------------");
        //fim for
      }
      system("pause");
      break;
    }
      // calcular dados
    case 3: {
     for (int i=0; i<4; i++){
         printf("\nPessoa %d IMC: %.2f", i+1, IMC(pessoa[i].peso, pessoa[i].altura)); 
      //fim for
      }
      system("pause");
       break;
    }

      // fim swicht
    }

  } while (escolha != 4);
}
#endif

#ifdef ex4

// dia mes
int validaDiames(int d, int m) {
  int dia = d;
  if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11 ) {
    while( d > 30){
      printf("\nDigite o dia novamente: ");
    scanf("%d", &dia);
    //fim while
    }
  } else {
    while (dia > 31){
      printf("\nDigite o dia novamente: ");
    scanf("%d", &dia);
    }
  }

  return dia;
}
// ano bissextos
int validaDiabi(int d, int m, int a) {
  int dia = d;
  if (d == 29 && m == 2) {
    if (a % 4 == 0)
      printf("\nDia bissexto");

    else {while(dia > 28){
      printf("\nNão é dia bissexto \nDigite o dia novamente: ");
      scanf("%d", &dia);
    }
          //fim else
      }
  }
  return dia;
}

// struct
typedef struct {
int dia;
int mes;
int ano;
}Data;

int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
   int cont;
  int dias, mes, ano;
  Data dia[2];

  // entrada      

  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
   for(int i=0; i<2; i++){
    printf("\nDigite o Dia da %d° data: ", i+1);
    scanf("%d", &dia[i].dia);
     
    printf("\nDigite o Mês da %d° data: ", i+1);
    scanf("%d", &dia[i].mes);
     
    printf("\nDigite o Ano da %d° data: ", i+1);
    scanf("%d", &dia[i].ano);

      // validar mes
        while(dia[i].mes < 1 || dia[i].mes > 12){
           printf("\nDigite o mês novamente: ", i+1);
        scanf("%d", &dia[i].mes);
          //fim while
        }
     //validar dia do mes
      dia[i].dia = validaDiames(dia[i].dia, dia[i].mes);
    // ano bissextos
    dia[i].dia = validaDiabi(dia[i].dia, dia[i].mes, dia[i].ano);
    //fim dfro
   }
    // função

    dias =  dia[1].dia -  dia[0].dia;
    mes =  dia[1].mes -  dia[0].mes;
    ano = dia[1].ano -  dia[0].ano;

    // calculos com erros

    // dia
    if (dias < 0) {
      dias = 30 + dias;
      mes--;

      // mes
      if (mes < 0) {
        mes = 12 + mes;
        ano--;
      }
    }

    // saída
    printf("\nIntervalo de \n %d anos, %d meses e %d dias", ano, mes, dias);
    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}

#endif
