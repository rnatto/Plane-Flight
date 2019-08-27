#include<stdio.h>
#define TAM 1
struct cadastro
{
    int num_voo, num_vagas;
    char origem[20], destino[20];
}aviao[TAM];

int main ()

{
    int op, op2, numero, sair, voltar, i, p;
    char origem, destino;
    char comp_origem[20], comp_destino[20];
    int comp_num_voo;
    //--------------------------------------CADASTRO-----------------------------
    printf("FAÇA O CADASTRO DA ROTA DO VOO");
    printf("\n-------- CADASTRO --------\n");
    for(i = 0; i < TAM; i++)
    {
        printf("NUMERO DO VOO: ");
        scanf("%d", &aviao[i].num_voo );
        fflush(stdin);
        printf("ORIGEM: ");
        gets(aviao[i].origem);
        fflush(stdin);
        printf("DESTINO: ");
        gets(aviao[i].destino);
        printf("NUMERO DE VAGAS: ");
        scanf("%d", &aviao[i].num_vagas);
        int reserva[i];
        reserva[i] = aviao[i].num_vagas;
    }
    //-------------------------------------INICIO DO MENU------------------------
    for(sair = 0; sair != 1;  )
    {
        printf("----------MENU----------\n");
        printf("1 - CONSULTAR\n");
        printf("2 - EFETUAR RESERVA\n");
        printf("3 - SAIR\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1://-------------------------CONSULTAR------------------------------
            printf("-----CONSULTAR-----\n");
            for(voltar = 0; voltar !=1;)
            {
                printf("4 - POR ORIGEM\n");
                printf("5 - POR DESTINO\n");
                printf("6 - POR NUMERO DE VOO\n");
                printf("7 - VOLTAR\n");
                scanf("%d", &op2);
                switch (op2)
                {
                case 4://------------------------------------------POR ORIGEM

                    fflush(stdin);
                    printf("DIGITE A ORIGEM\n");
                    gets(comp_origem);
                    for(i = 0; i < 12; i++)
                    {
                        if(strcmp(comp_origem, aviao[i].origem) == 0)
                        {
                            printf("NUMERO DO VOO: %d\n", aviao[i].num_voo);
                            printf("ORIGEM: %s\n", aviao[i].origem);
                            printf("DESTINO: %s\n", aviao[i].destino);
                            printf("NUMERO DE VAGAS: %d\n", aviao[i].num_vagas);
                        }
                    }
                    for(i = 0; i < TAM; i++)
                    {
                        if(strcmp(comp_origem, aviao[i].origem) != 0)
                        {
                            printf("ORIGEM NAO CADASTRADA\n\n");
                        }

                    }
                    break;
                case 5://------------------------------------------POR DESTINO
                    fflush(stdin);
                    printf("DIGITE O DESTINO\n");
                    gets(comp_destino);
                    for(i = 0; i < TAM; i++)
                    {
                        if(strcmp(comp_destino, aviao[i].destino) == 0)
                        {
                            printf("NUMERO DO VOO: %d\n", aviao[i].num_voo);
                            printf("ORIGEM: %s\n", aviao[i].origem);
                            printf("DESTINO: %s\n", aviao[i].destino);
                            printf("NUMERO DE VAGAS: %d\n", aviao[i].num_vagas);
                        }
                    }
                    for(i = 0; i < TAM; i++)
                    {
                        if(strcmp(comp_destino, aviao[i].destino) != 0)
                        {
                            printf("DESTINO NAO CADASTRADA\n\n");
                        }

                    }
                    break;
                case 6:
                    printf("DIGITE O NUMERO DO VOO\t");
                    scanf("%d", &comp_num_voo);
                    for(i = 0; i < TAM; i++)
                    {
                        if(comp_num_voo == aviao[i].num_voo)
                        {
                            printf("NUMERO DO VOO: %d\n", aviao[i].num_voo);
                            printf("ORIGEM: %s\n", aviao[i].origem);
                            printf("DESTINO: %s\n", aviao[i].destino);
                            printf("NUMERO DE VAGAS: %d\n", aviao[i].num_vagas);
                        }
                    }
                    for(i = 0; i < TAM; i++)
                    {
                        if(comp_num_voo != aviao[i].num_voo)
                        {
                            printf("NUMERO DE VOO NAO CADASTRADO\n\n");
                        }
                    }
                    break;
                case 7:
                    voltar = 1;
                    break;
                default:
                    printf("OPCAO INVALIDA\n\n");
                    voltar = 0;
                    break;
                }
            }
            break;
        case 2:
            printf("DIGITE A POSICAO A SER RESERVADA\n");
            scanf("%d", &p);

            break;
        case 3:
            sair = 1;
            break;
        }
    }
}
