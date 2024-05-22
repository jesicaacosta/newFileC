#include <stdio.h>
#include <stdlib.h>
#define CORRECT_PASSWORD 123

int main()
{
    int opc, password;
    char operador;
    float num1, num2, resul;

    printf("OPCIONES\n");
    printf("(1) Calculadora\n");
    printf("(2) Verificar 2 numeros iguales\n");
    printf("(3) Contrase%ca\n", 164);
    printf("(Otra opcion) Sale del programa\n");
    printf("INGRESE LA OPCION: ");
    scanf("%d",&opc);

    switch(opc)
    {
    case 1:
        printf("Ingrese el operador que va a utilizar(+,-,*,/): ");
        scanf(" %c", &operador);
        if(operador == '+')
        {
            printf("Ingrese el primer numero a sumar: ");
            scanf("%f", &num1);
            printf("Ingrese el segundo numero a sumar: ");
            scanf("%f", &num2);
            resul=num1+num2;
            printf("El resultado de la suma es: %.2f",resul);
        }
        else if(operador == '-')
        {
            printf("Ingrese el primer numero a restar: ");
            scanf("%f", &num1);
            printf("Ingrese el segundo numero a restar: ");
            scanf("%f", &num2);
            resul=num1-num2;
            printf("El resultado de la resta es: %.2f", resul);
        }
        else if(operador == '*')
        {
            printf("Ingrese el primer numero a multiplicar: ");
            scanf("%f", &num1);
            printf("Ingrese el segundo numero a multiplicar: ");
            scanf("%f", &num2);
            resul=num1*num2;
            printf("El resultado de la multiplicacion es: %.2f", resul);
        }
        else if(operador == '/')
        {
            printf("Ingrese el numerador: ");
            scanf("%f", &num1);
            printf("Ingrese el divisor: ");
            scanf("%f", &num2);
            resul=num1/num2;
            printf("El resultado de la division es: %.2s", resul);
        }
        else
        {
            printf("La opcion ingresada no es valida, saliendo del programa...");
        }
        break;

    case 2:
        printf("Ingrese el primer numero: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo numero: ");
        scanf("%f", &num2);
        if(num1 == num2)
        {
            printf("Los numero ingresados son iguales\n");
        }
        else
        {
            printf("Los numeros ingresados %.2f y %.2f son distintos\n", num1, num2);
        }
        break;

    case 3:
        printf("Ingrese la contrase%ca: ",164);
        scanf("%d",&password);
        if(password == CORRECT_PASSWORD)
        {
            printf("La contrase%ca ingresada es correcta",164);
        }
        else
        {
            printf("La contrase%ca ingresada es incorrecta",164);
        }
        break;

    default:
        printf("Saliendo del programa...");
    }
    return 0;
}


