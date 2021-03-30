#include <stdio.h>
#include <stdlib.h>

int cuadrado(int *num);
void cuadradoo(int *num);
void invertir(int a,int b);
void orden(int a, int b);
int main(){
    int num1,num2;

    printf("ingrese dos numeros:\n");
    scanf("%d %d",&num1,&num2);
    printf("El cuadrado del numero %d es %d",num1, cuadrado(&num1));
    cuadradoo(&num2);

    invertir(num1,num2);
    orden(num1,num2);

    printf("\n\n");
    system("pause");
    return 0;
}

int cuadrado(int *num1){
    return (*num1)*(*num1);
}

void cuadradoo(int *num2){
    printf("\nEl cuadrado del numero %d es %d",*num2, cuadrado(num2));
    printf("\nLa direccion de la variable num2 es %p",num2);
}

void invertir(int a,int b){
    int c,*pa,*pb;
    pa=&a;//pa tiene la direccion de a
    pb=&b;//pb tiene la direccion de b

    c = *pa;//c es igual al contenido de la direccion que guarda pa
    *pa = *pb;//pa es igual al contenido de la direccion que guarda pb
    *pb = c;//pb es igual al c (que contiene el valor que guarda la direccion de pa)

    printf("\n\nahora el valor de la variable num1 es: %d y la de num2 es: %d",a,b);

}

void orden(int a, int b){
    int c,*pa,*pb;

    if (a < b)
    {
        printf("\nel menor valor es %d y el mayor es %d",a,b);
    }else if (b < a)
    {
        int c,*pa,*pb;
        pa=&a;//pa tiene la direccion de a
        pb=&b;//pb tiene la direccion de b

        c = *pa;//c es igual al contenido de la direccion que guarda pa
        *pa = *pb;//pa es igual al contenido de la direccion que guarda pb
        *pb = c;//pb es igual al c (que contiene el valor que guarda la direccion de pa)

        printf("\n\nahora el valor menor es: %d y el mayor es: %d",a,b);
    }else{
        printf("\nson iguales");
    }
    
}