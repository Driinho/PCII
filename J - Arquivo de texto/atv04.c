#include <stdio.h>

void cadas_aluno();
void cadas_disci();
void visu();
void matricula();
void visu_matri();

FILE *ptr_aluno, *ptr_disci, *ptr_matricula;
char aluno[100], disci[100], l;
int i;

int main() {

    int esc, sair;

    sair = 1;

    do{
        system("cls");

        printf(" ---------------------------------------");
        printf("\n (1) - Cadastrar Aluno");
        printf("\n (2) - Cadastrar Disciplinas");
        printf("\n (3) - Visualizar Alunos e Disciplinas");
        printf("\n (4) - Matricular aluno");
        printf("\n (5) - Visualizar Matriculas");
        printf("\n (0) - Sair");
        printf("\n ---------------------------------------");
        printf("\n Opcao: ");
        scanf("%i", &esc);
        printf(" ---------------------------------------\n");

        switch (esc)
        {
            case 1:
        
                cadas_aluno();
        
            break;

            case 2:

                cadas_disci();

            break;

            case 3:

                visu();

            break;

            case 4:

                matricula();

            break;

            case 5:

            visu_matri();

            break;

            case 0:

                printf("\n [TCHAU]");

                sair = 0;

            break;
        }
        
    }while(sair == 1);

    printf("\n\n");
    return 0;
}

void cadas_aluno(){

    ptr_aluno = fopen("aluno.txt", "a+");

    printf("\n- Aluno: ");
    fflush(stdin);
    gets(aluno);

    for(i = 0; aluno[i] != '\0'; i++)
    {
        fputc(aluno[i], ptr_aluno);
    }
    fputc('\n', ptr_aluno);

    printf("[OK]");
    sleep(2);

    fclose(ptr_aluno);

}

void cadas_disci(){

    ptr_disci = fopen("disciplina.txt", "a+");

    printf("\n- Disciplina: ");
    fflush(stdin);
    gets(disci);

    for(i = 0; disci[i] != '\0'; i++)
    {
        fputc(disci[i], ptr_disci);
    }
    fputc('\n', ptr_disci);

    printf("[OK]");
    sleep(2);

    fclose(ptr_disci);
}

void visu(){

    system("cls");

    int linha = 0, flag = 0;
    char l;

    i = 1;

    ptr_aluno = fopen("aluno.txt", "a+");

    printf("\n ALUNOS CADASTRADOS");
    printf("\n -------------------");

    rewind(ptr_aluno);

    do{
        l = fgetc(ptr_aluno);
        if(l == '\n')
        {
            linha++;
        }

    }while(l != EOF);

    rewind(ptr_aluno);

    do{

        if(flag == 0)
        {
            printf("\n %i | ", i);
            flag = 1;
            i++;
        }
        else if(l == '\n' && i <= linha)
        {
            printf(" %i | ", i);
            i++;
        }

        l = fgetc(ptr_aluno);
        printf("%c", l);

    } while(l != EOF);

    fclose(ptr_aluno);

    printf("-------------------");

    flag = 0;
    linha = 0;
    i = 1;

    ptr_disci = fopen("disciplina.txt", "a+");

    printf("\n DISCIPLINAS CADASTRADAS");
    printf("\n -------------------");

    rewind(ptr_disci);

    do{
        l = fgetc(ptr_disci);
        if(l == '\n')
        {
            linha++;
        }

    }while(l != EOF);

    rewind(ptr_disci);

    do{

        if(flag == 0)
        {
            printf("\n %i | ", i);
            flag = 1;
            i++;
        }
        else if(l == '\n' && i <= linha)
        {
            printf(" %i | ", i);
            i++;
        }

        l = fgetc(ptr_disci);
        printf("%c", l);        

    } while(l != EOF);
    printf("-------------------");

    fflush(stdin);
    getchar();

    fclose(ptr_disci);
}

void matricula(){

    int l_disci, l_aluno, esc_aluno, esc_disci, j, k, flag;
    char l, aux[3], aluno[100], disci[100];

    i = 0;
    j = 1;
    k = 1;
    flag = 0;

    ptr_aluno = fopen("aluno.txt", "a+");
    ptr_disci = fopen("disciplina.txt", "a+");
    ptr_matricula = fopen("matricula.txt", "a+");

    rewind(ptr_aluno);
    do{
        l = fgetc(ptr_aluno);
        if(l == '\n')
        {
            l_aluno++;
        }

    }while(l != EOF);

    rewind(ptr_disci);
    do{
        l = fgetc(ptr_disci);
        if(l == '\n')
        {
            l_disci++;
        }

    }while(l != EOF);

    rewind(ptr_aluno);
    rewind(ptr_disci);

    printf(" - Linha Aluno: ");
    scanf("%i", &esc_aluno);

    do{

        if(esc_aluno != 1)
        {
            while(j != esc_aluno)
            {
                l = fgetc(ptr_aluno);
                if(l == '\n')
                {
                    j++;
                }
            }
        }

        l = fgetc(ptr_aluno);

        if(j == esc_aluno)
        {
            j++;
            aluno[i] = l;
            i++;
            while(l != '\n')
            {
                l = fgetc(ptr_aluno);
                if(l == '\n')
                {
                    break;
                }
                aluno[i] = l;
                i++;
            }
            aluno[i] = '\0';

            for(i = 0; aluno[i] != '\0'; i++)
            {
                fputc(aluno[i], ptr_matricula);
            }
            flag = 1;

            aux[0] = '<';
            aux[1] = '=';
            aux[2] = '>';
            aux[3] = '\0';
            for(i = 0; aux[i] != '\0'; i++)
            {
                fputc(aux[i], ptr_matricula);
            }
            flag = 2;
        }

        printf(" - Linha Disciplina: ");
        scanf("%i", &esc_disci);

        if(esc_disci != 1)
        {
            k = 1;
            while(k != esc_disci)
            {
                l = fgetc(ptr_disci);
                if(l == '\n')
                {
                    k++;
                }
            }
        }

        l = fgetc(ptr_disci);
        i = 0;

        if(k == esc_disci)
        {
            k++;
            disci[i] = l;
            i++;
            while(l != '\n')
            {
                l = fgetc(ptr_disci);
                if(l == '\n')
                {
                    break;
                }
                disci[i] = l;
                i++;
            }
            disci[i] = '\0';

            for(i = 0; disci[i] != '\0'; i++)
            {
                fputc(disci[i], ptr_matricula);
            }
            fputc('\n', ptr_matricula);
            flag = 3;
        }

    }while(flag != 3);
    printf("[OK]");
    sleep(2);

    fclose(ptr_matricula);
}

void visu_matri(){

    int flag, i, linha;

    linha = 0;
    i = 1;
    flag = 0;

    ptr_matricula = fopen("matricula.txt", "a+");
    rewind(ptr_matricula);
    
    printf("\n MATRICULAS EFETUADAS");
    printf("\n -------------------");

    do{
        l = fgetc(ptr_matricula);
        if(l == '\n')
        {
            linha++;
        }

    }while(l != EOF);

    rewind(ptr_matricula);

    do{

        if(flag == 0)
        {
            printf("\n %i | ", i);
            flag = 1;
            i++;
        }
        else if(l == '\n' && i <= linha)
        {
            printf(" %i | ", i);
            i++;
        }

        l = fgetc(ptr_matricula);
        printf("%c", l);
    
    }while(l != EOF);

    printf("-------------------");
    
    fflush(stdin);
    getchar();
}