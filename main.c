#include "./include/menus.h"

#define FIM     0

int main(){
    int opc_menu_principal;
    int opc_submenu;
    do {
        opc_menu_principal = menu_principal();
        
        switch (opc_menu_principal){
            case 1:
                do {
                    opc_submenu = submenu_cadastros();
                    switch (opc_submenu){
                        case 1:
                            break;
                        case 2:
                            break;
                    }

                } while (opc_submenu != FIM);

                break;

            case 2:
                do {
                    opc_submenu = submenu_relatorios();
                    switch (opc_submenu){
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        case 4:
                            break;
                    }

                } while (opc_submenu != FIM);
                break;
            case 3:
                break;
            case 0:
                printf("Tchau!!\n");
                break;
        }

    } while(opc_menu_principal != FIM);

    return 0;
}
