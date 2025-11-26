#include "../include/menus.h" // coloca entre aspas porque não está na pasta usr/include

int menu_principal(){
    int opcao;

    printf("1. Cadastros;\n");
    printf("2. Relatorios;\n");
    printf("3. Consultas;\n");
    printf("0. Sair do programa.\n");
    printf("::: ");
    scanf("%i", &opcao);
    getchar();

    return opcao;
}

int submenu_cadastros(){
    int opcao;

    printf("1. Cadastro de clientes;\n");
    printf("2. Cadastro de livros;\n");
    printf("0. Voltar ao menu principal.\n");
    printf("::: ");
    scanf("%i", &opcao);
    getchar();

    return opcao;
}

int submenu_relatorios(){
    int opcao;

    printf("1. Relatorio de clientes;\n");
    printf("2. Relatorio de livros;\n");
    printf("3. Relatorio de vendas;\n");
    printf("4. Relatorio de estoque;\n");
    printf("0. Voltar ao menu principal.\n");
    printf("::: ");
    scanf("%i", &opcao);
    getchar();

    return opcao;
}

int submenu_consultas(){
    int opcao;


    return opcao;
}
