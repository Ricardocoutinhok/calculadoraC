#include <stdio.h> 
#include <stdlib.h>

void soma(int op1, int op2)
{
    int result = 0;
    result = op1 + op2;
    printf("O resultado é %d\n",result);
    system ("pause");
    system("cls");
    menu();
}

void subtrai()
{
    //todo
    system ("pause");
    system("cls"); 
    menu();
}

void divide(int op1,int op2)
{
    int result = 0;
    result = op1 / op2;
    printf("O resultado é %d\n",result);
    system ("pause");
    system("cls");
    menu();
}

void multiplica(int op1,int op2)
{
    //todo
    int result =0;
    result=op1*op2;
    printf("O resultado da multiplicacao e:%d\n", result);
    system ("pause");
    system("cls");
    menu();
}

void menu()
{ 

    int escolha, n1, n2;

    printf("\t\tBem vindo a calculadora em C\n\n");

    printf("Selecione uma operacao matematica:\n");
    printf("\t1- Adicao\n");
    printf("\t2- Subtracao\n");
    printf("\t3- Divisao\n");
    printf("\t4- Multiplicacao\n");
    printf("\t5- Sair\n");
    printf("Operacao: ");
    scanf ("%d", &escolha);

    switch (escolha)
    {
        case 1: 
            printf("Escolha o primeiro numero");
            scanf ("%d", &n1);
            printf("Escolha o segundo numero");
            scanf ("%d", &n2);
            soma(n1,n2); 
        break; 

        case 2:
            subtrai();
        break;

        case 3:
            printf("Escolha o primeiro numero");
            scanf ("%d", &n1);
            printf("Escolha o segundo numero");
            scanf ("%d", &n2);
            divide(n1,n2);
        break;

        case 4:
            printf("Insira o primeiro numero\n");
            scanf("%d", &n1);
            printf("Insira o segundo numero\n");
            scanf("%d", &n2);
            multiplica(n1,n2);
            break;

        case 5:
            system("exit");
            printf("\nFim...\n\n");
        break;

        default: 
            printf("\nComando invalido, tente novamente!\n\n");
            system ("pause");
            system ("cls");
            menu(); 
            break;
    }
}


int main() 
{
    menu();
    system("pause");
    return 0;
}