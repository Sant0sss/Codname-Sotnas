#include<stdio.h>

int main()
{
  float n1, n2, med;
  int alt, aprovados;
  char aluno[10];
  aprovados = 0;
  do{
  printf("\nInforme o nome do aluno: ");
  scanf("%s", aluno);
  printf("\nDigite a primeira nota do aluno: ");
  scanf(" %f",& n1);
  printf("\nDigite a segunda nota: ");
  scanf(" %f",& n2);
  med = (n1 + n2) / 2;
  printf("\nA media de %s e : %0.0f\n", aluno, med);
  if(med>=7){
  aprovados++;
  }
  printf("\nDigite 1 para continuar ou 2 para sair: ");
  scanf(" %d",&alt);
    }while( alt == 1 );
    if(aprovados == 1)
  printf("\nFoi aprovado %d aluno.\n", aprovados);
    else
  printf("\nForam aprovados %d alunos.\n", aprovados);
    return 0;
}   