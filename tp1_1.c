#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
            * sirve para declarar variables de tipo puntero y tener acceso al contenido de dicha variable
            & sirve para obtener la direccion e memoria
    
    */
    
    char name='e';//declaro una variable de tipo puntero
    char *pname = &name;//pname contendrá a direccion de memoria de la variable name
    int num=2;
    int *pnum = &num;

    printf("\nEl contenido del puntero es: %c", *pname);
    printf("\nLa direccion de memoria almacenada por es puntero es: %p", pname);
    printf("\nLa direccion de memoria de la variable es: %p",&name);
    printf("\nLa direccion de memoria del puntero es: %p",&pname);
    printf("\nEl tipo <char> tiene un espacio de memoria de %zd bytes", sizeof(char));
    printf("\nEl tipo <int> tiene un espacio de memoria de %zd bytes\n\n\n", sizeof(int));

    system("pause");
    return 0;
}