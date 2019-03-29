#include <stdio.h>
#include <stdlib.h>
int pedirOpcionMenu(char[]);

int main()
{
    int opcion;
    char seguir = 's';

    do
    {
        /*printf("1.Alta\n");
        printf("2.Baja\n");
        printf("3.Modificacion\n");
        printf("4.informes\n");
        printf("5.salir\n");

        printf("elija una opcion: ");
        scanf ("%d", &opcion);*/
        opcion = pedirOpcionMenu("1.Alta\n2.Baja\n3.Modificacion\n4.informes\n5.salir\nelija una opcion: ");
    switch(opcion)
    {
    case 1:
        printf("estoy dando de alta\n");
    break;
    case 2:
        printf("estoy dando de baja\n");

    break;
    case 3:
        printf("estoy modificando\n");
    break;
    case 4:
        printf("estoy informando\n");
    break;
    case 5:
        seguir = 'n';
    break;
    default:
        printf("opcion incorrecta\n");
        break;



    }
    system("pause");
    system("cls");


    }while(seguir=='s');





    return 0;
}

int pedirOpcionMenu(char texto[])
{
    int opcion;
    printf("%s", texto);

        scanf ("%d", &opcion);

        return opcion;

}
