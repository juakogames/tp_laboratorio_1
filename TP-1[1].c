
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "TP--1.h"


void menu(){

    float num1;// VARIABLE FLOAT PARA EL PRIMER OPERADOR
    float num2;// VARIABLE FLOAT PARA EL SEGUNDO OPERADOR
    int opcion;// VARIABLE INT PARA LA OPCION QUE INGRECE EL USUARIO



    do{

    system("CLS");

    system("color 7");

    printf("  CALCULADORA  (by joaquin bracamonte) \n\n");

    printf(" (--MENU DE OPCIONES--)\n\n\n");

    printf("[1]- INGRESE PRIMER OPERANDO (A = %.1f)\n", num1);

    printf("[2]- INGRESE SEGUNDO OPERANDO (B = %.1f)\n\n", num2);


    printf("[3]- SUMAR (%.1f + %.1f)\n", num1, num2);

    printf("[4]- RESTAR (%.1f - %.1f)\n", num1, num2);

    printf("[5]- MULTIPLICAR (%.1f * %.1f)\n", num1, num2);

    printf("[6]- DIVIDIR (%.1f / %.1f)\n", num1, num2);

    printf("[7]- FACTORIZAR (A = %.1f) Y (B = %.1f)\n", num1, num2);

    printf("[8]- CALCULAR TODAS LAS OPERACIONES\n\n");


    printf("[9]- SALIR\n\n");

    printf("INGRESE UNA OPCION: ");

    scanf("%d", &opcion);






    switch(opcion){

    case 1:

            printf("\nINGRESE EL VALOR DEL PRIMER OPERANDO: ");
            scanf("%f", &num1);
            break;

    case 2:

            printf("\nINGRESE EL VALOR DEL SEGUNDO OPERANDO: ");
            scanf("%f", &num2);
            break;

    case 3:

            system("CLS");
            system("color 7");
            printf("\nUSTED ELIGIO SUMAR: %.1f + %.1f = %.1f\n\n\n", num1, num2, sumar(num1,num2));
            system("pause");
            break;

    case 4:

            system("CLS");
            system("color 7");
            printf("USTED ELIGIO RESTAR: %.1f - %.1f = %.1f\n\n\n", num1, num2, restar(num1,num2));
            system("pause");
            break;

    case 5:

            system("CLS");
            system("color 7");
            printf("USTED ELIGIO MULTIPLICAR: %.1f * %.1f = %.1f\n\n\n", num1, num2, multiplicar(num1,num2));
            system("pause");
            break;

    case 6:

            if(dividir(num1,num2) == 0){
                printf("ERROR, NO SE PUEDE DIVIDIR POR CERO\n\n\n");
                system("pause");

            }else{
                system("CLS");
                system("color 7");
                printf("\nUSTED ELIGIO DIVIDIR: %.1f / %.1f = %.1f\n\n\n", num1, num2, dividir(num1,num2));
                system("pause");
                }
            break;


    case 7:
            system("CLS");
            system("color 7");
            printf("USTED ELIGIO FACTORIZAR : A = (%.1f)= %li\n", num1, factorizar(num1));
            printf("USTED ELIGIO FACTORIZAR : B = (%.1f)= %li\n\n\n", num2, factorizar(num2));
            system("pause");

            break;

    case 8:

            system("CLS");
            system("color 5");
            printf("USTED ELIGIO CALCULAR TODAS LAS OPERACIONES: \n\n");

            printf("\n[SUMA]\n");
            printf("EL RESULTADO DE: (%.1f + %.1f) ES: %.1f\n ", num1, num2, sumar(num1,num2));
            printf("\n[RESTA]\n");
            printf("EL RESULTADO DE: (%.1f - %.1f) ES: %.1f\n ", num1, num2, restar(num1,num2));
            printf("\n[MULTIPLICAR]\n");
            printf("EL RESULTADO DE: (%.1f * %.1f) ES: %.1f\n ", num1, num2, multiplicar(num1,num2));
            printf("\n[DIVIDIR]\n");
            printf("EL RESULTADO DE: (%.1f / %.1f) ES: %.1f\n ",num1, num2, dividir(num1,num2));
            printf("\n[FACTORIZAR]\n");
            printf("EL RESULTADO DEL FACTORIAL DE:\n\n");
            printf("(A= %.1f) ES: A= %li\n", num1, factorizar(num1));
            printf("(B= %.1f) ES: B= %li\n\n\n",num2, factorizar(num2));
            system("pause");

            break;

    case 9:

            system("CLS");
            system("color 7");
            printf("\n ELEGISTE SALIR, ADIOS! \n\n\n ");
            system("pause");

            break;

    default:

            printf("\n\n ERROR.INGRESE UNA OPCION VALIDA :(\n\n");
            system("pause");


        } // FUNCION SWITCH--FIN



    }while(!(opcion == 9)); // FIN DEL DO WHILE



    } // FUNCION MENU--FIN



    float sumar(float num1, float num2){
    float sumar;
    sumar = num1 + num2;
    return sumar;

    } // FUNCION SUMAR--FIN

    float restar(float num1, float num2){
    float restar;
    restar = num1 - num2;
    return restar;

    } // FUNCION RESTAR--FIN

    float multiplicar(float num1, float num2){
    float multiplicar;
    multiplicar = num1 * num2;
    return multiplicar;

    } // FUNCION MULTIPLICAR --FIN

    float dividir(float num1, float num2){
    float div;
    if(num1==0 || num2==0){
        return 0;

    }else{

    div = num1/num2;
    return div;

        } // FUNCION DIVIDIR--FIN

}

    long factorizar(float num1){
    long factorizar = 1;
    float i;

    for(i=1;i<=num1;i++){

        factorizar*= i;
    }

    return factorizar;



    }

    long factorizar2(float num2){
    long factorizar2 = 1;
    float i;

    for(i=1;i<=num2;i++){

        factorizar2*= i;
    }



    return factorizar2;



    }
