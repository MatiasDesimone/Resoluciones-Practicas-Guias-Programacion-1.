#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pila.h"

int main()
{
    char control = 's';
    int opcion = 0;
    srand(time(NULL));

    while (control == 's'){
        printf("TP 1 - PILAS\n\n");
        printf("1  -  Ejercicio 1\n");
        printf("2  -  Ejercicio 2\n");
        printf("3  -  Ejercicio 3\n");
        printf("4  -  Ejercicio 4\n");
        printf("5  -  Ejercicio 5\n");
        printf("6  -  Ejercicio 6\n");
        printf("7  -  Ejercicio 7\n");
        printf("8  -  Ejercicio 8\n");
        printf("9  -  Ejercicio 9\n");
        printf("10 -  Ejercicio 10\n");
        printf("11 -  Ejercicio 11\n");
        printf("12 -  Ejercicio 12\n");
        printf("13 -  Ejercicio 13\n");
        printf("14 -  Ejercicio 14\n\n");

        printf("Ingrese opcion numerica\n");
        fflush(stdin);
        scanf("%d", &opcion);
        system("cls");

        switch(opcion){
            case 1:
                printf("Cargar desde el teclado una pila DADA con 5 elementos. Pasar los tres primeros elementos que se encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2, ambas pilas inicializadas.\n\n");

                Pila dada, aux1, aux2;
                inicpila(&dada);
                inicpila(&aux1);
                inicpila(&aux2);

                for(int i = 0; i < 5; i++){
                    leer(&dada);
                }

                apilar(&aux1, desapilar(&dada));
                apilar(&aux1, desapilar(&dada));
                apilar(&aux1, desapilar(&dada));
                apilar(&aux2, desapilar(&dada));
                apilar(&aux2, desapilar(&dada));

                printf("\nPila AUX1:\n");
                mostrar(&aux1);
                printf("\nPila AUX2:\n");
                mostrar(&aux2);

                system("pause");
                system("cls");
                break;

            case 2:
                printf("Cargar desde el teclado la pila ORIGEN e inicializar en vacio la pila DESTINO. Pasar todos los elementos de la pila ORIGEN a la pila DESTINO.\n\n");

                Pila origen, destino;
                inicpila(&origen);
                inicpila(&destino);

                printf("Cargando pila ORIGEN\n");
                do{
                    leer(&origen);
                    printf("Desea continuar cargando elementos a la pila? s/n ");
                    fflush(stdin);
                    scanf("%c", &control);
                }while(control == 's');

                printf("\nPila ORIGEN:\n");
                mostrar(&origen);

                while(!pilavacia(&origen)){
                    apilar(&destino, desapilar(&origen));
                }

                printf("\nPila DESTINO:\n");
                mostrar(&destino);

                system("pause");
                system("cls");
                break;

            case 3:
                printf("Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al valor 8.\n\n");

                Pila dada1, distintos, aux;
                inicpila(&dada1);
                inicpila(&distintos);
                inicpila(&aux);

                printf("Cargando pila DADA\n");
                do{
                    leer(&dada1);
                    printf("Desea continuar cargando elementos a la pila? s/n ");
                    fflush(stdin);
                    scanf("%c", &control);
                }while(control == 's');

                printf("\nPila DADA:\n");
                mostrar(&dada1);

                while(!pilavacia(&dada1)){
                    if(tope(&dada1) != 8){
                        apilar(&distintos, desapilar(&dada1));
                    }
                    else{
                        apilar(&aux, desapilar(&dada1));
                    }
                }

                while(!pilavacia(&aux)){
                    apilar(&dada1, desapilar(&aux));
                }

                printf("\nPila DISTINTOS:\n");
                mostrar(&distintos);

                printf("\nPila DADA sin elementos distintos al valor 8:\n");
                mostrar(&dada1);

                system("pause");
                system("cls");
                break;

            case 4:
                printf("Cargar desde el teclado la pila ORIGEN e inicializar en vacio la pila DESTINO. Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejandolos en el mismo orden.\n\n");

                Pila origen4, destino4, aux4;
                inicpila(&origen4);
                inicpila(&destino4);
                inicpila(&aux4);

                printf("Cargando pila ORIGEN\n");
                do{
                    leer(&origen4);
                    printf("Desea continuar cargando elementos a la pila? s/n ");
                    fflush(stdin);
                    scanf("%c", &control);
                }while(control == 's');

                printf("\nPila ORIGEN:\n");
                mostrar(&origen4);

                while(!pilavacia(&origen4)){
                    apilar(&aux4, desapilar(&origen4));
                }

                while(!pilavacia(&aux4)){
                    apilar(&destino4, desapilar(&aux4));
                }

                printf("\nPila DESTINO:\n");
                mostrar(&destino4);

                system("pause");
                system("cls");
                break;

            case 5:
                printf("Cargar desde el teclado la pila DADA. Invertir la pila de manera que DADA contenga los elementos cargados originalmente en ella, pero en orden inverso.\n\n");

                Pila dada5, aux5, aux51;
                inicpila(&dada5);
                inicpila(&aux5);
                inicpila(&aux51);

                printf("Cargando pila DADA\n");
                do{
                    leer(&dada5);
                    printf("Desea continuar cargando elementos a la pila? s/n ");
                    fflush(stdin);
                    scanf("%c", &control);
                }while(control == 's');

                printf("\nPila DADA:\n");
                mostrar(&dada5);

                while(!pilavacia(&dada5)){
                    apilar(&aux5, desapilar(&dada5));
                }

                while(!pilavacia(&aux5)){
                    apilar(&aux51, desapilar(&aux5));
                }

                while(!pilavacia(&aux51)){
                    apilar(&dada5, desapilar(&aux51));
                }

                printf("\nPila DADA con sus elementos invertidos:\n");
                mostrar(&dada5);

                system("pause");
                system("cls");
                break;

            case 6:
                printf("Pasar el primer elemento (tope) de la pila DADA a su ultima posicion (base), dejando los restantes elementos en el mismo orden.\n\n");

                Pila dada6, aux6;
                int topePila = 0;
                inicpila(&dada6);
                inicpila(&aux6);

                printf("Cargando pila DADA\n");
                do{
                    leer(&dada6);
                    printf("Desea continuar cargando elementos a la pila? s/n ");
                    fflush(stdin);
                    scanf("%c", &control);
                }while(control == 's');

                printf("\nPila DADA:\n");
                mostrar(&dada6);

                topePila = desapilar(&dada6);

                while(!pilavacia(&dada6)){
                    apilar(&aux6, desapilar(&dada6));
                }

                apilar(&dada6, topePila);

                while(!pilavacia(&aux6)){
                    apilar(&dada6, desapilar(&aux6));
                }

                printf("Pila DADA con el tope como base:\n");
                mostrar(&dada6);

                system("pause");
                system("cls");
                break;

            case 7:
                printf("Pasar el ultimo elemento (base) de la pila DADA a su primera posicion (tope), dejando los restantes elementos en el mismo orden.\n\n");

                Pila dada7, aux7;
                int base = 0;
                inicpila(&dada7);
                inicpila(&aux7);

                printf("Cargando pila DADA\n");
                do{
                    leer(&dada7);
                    printf("Desea continuar cargando elementos a la pila? s/n ");
                    fflush(stdin);
                    scanf("%c", &control);
                }while(control == 's');

                printf("\nPila DADA:\n");
                mostrar(&dada7);

                while(!pilavacia(&dada7)){
                    apilar(&aux7, desapilar(&dada7));
                }

                base = desapilar(&aux7);

                while(!pilavacia(&aux7)){
                    apilar(&dada7, desapilar(&aux7));
                }

                apilar(&dada7, base);

                printf("\nPila DADA con su base como tope:\n");
                mostrar(&dada7);

                system("pause");
                system("cls");
                break;

            case 8:
                printf("Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.\n\n");

                Pila mazo, jugador1, jugador2;
                inicpila(&mazo);
                inicpila(&jugador1);
                inicpila(&jugador2);

                int cantidad = rand()%20 + 1;
                printf("Se cargaron %d cartas en la pila MAZO\n", cantidad);
                for(int i = 0; i < cantidad; i++){
                    apilar(&mazo, rand()%100 + 1);
                }
                printf("\nCartas del MAZO:\n");
                mostrar(&mazo);

                printf("Repartiendo...\n");
                while(!pilavacia(&mazo)){
                    apilar(&jugador1, desapilar(&mazo));
                    if(!pilavacia(&mazo)){
                        apilar(&jugador2, desapilar(&mazo));
                    }
                }
                system("pause");

                printf("\nCartas del JUGADOR 1:\n");
                mostrar(&jugador1);
                printf("\nCartas del JUGADOR 2:\n");
                mostrar(&jugador2);

                system("pause");
                system("cls");
                break;

            case 9:
                printf("Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.\n\n");

                Pila A9, B9, auxA9, auxB9;
                inicpila(&A9);
                inicpila(&B9);
                inicpila(&auxA9);
                inicpila(&auxB9);

                srand(time(NULL));
                int cantidad9 = rand()%3 + 1;
                for(int i = 0; i < cantidad9; i++){
                    apilar(&A9, (rand()%100) + 1);
                }
                cantidad9 = rand()%3 + 1;

                for(int i = 0; i < cantidad9; i++){
                    apilar(&B9, (rand()%100) + 1);
                }

                while(!pilavacia(&A9) && !pilavacia(&B9)){
                    apilar(&auxA9, desapilar(&A9));
                    apilar(&auxB9, desapilar(&B9));
                }

                if(pilavacia(&A9) && pilavacia(&B9)){
                    printf("Las pilas tienen la misma cantidad de elementos\n");
                }else{
                    printf("Las pilas NO tienen la misma cantidad de elementos\n");
                }

                while(!pilavacia(&auxA9)){
                    apilar(&A9, desapilar(&auxA9));
                }
                while(!pilavacia(&auxB9)){
                    apilar(&B9, desapilar(&auxB9));
                }

                printf("\nPila A:\n");
                mostrar(&A9);
                printf("\nPila B:\n");
                mostrar(&B9);

                system("pause");
                system("cls");
                break;

            case 10:
                printf("Cargar las pilas A y B y luego compararlas, evaluando si son completamente iguales (en cantidad de elementos, valores que contienen y posicion de los mismos). Mostrar por pantalla el resultado.\n\n");

                Pila A10, B10, auxA10, auxB10;
                inicpila(&A10);
                inicpila(&B10);
                inicpila(&auxA10);
                inicpila(&auxB10);

                printf("Cargando pila A\n");
                do{
                    leer(&A10);
                    printf("Desea continuar cargando elementos a la pila? s/n ");
                    fflush(stdin);
                    scanf("%c", &control);
                }while(control == 's');

                printf("\nCargando pila B\n");
                do{
                    leer(&B10);
                    printf("Desea continuar cargando elementos a la pila? s/n ");
                    fflush(stdin);
                    scanf("%c", &control);
                }while(control == 's');

                while(!pilavacia(&A10) && !pilavacia(&B10) && tope(&A10) == tope(&B10)){
                    apilar(&auxA10, desapilar(&A10));
                    apilar(&auxB10, desapilar(&B10));
                }

                if(pilavacia(&A10) && pilavacia(&B10)){
                    printf("\nLas pilas son iguales\n");
                }else{
                    printf("\nLas pilas NO son iguales\n");
                }

                while(!pilavacia(&auxA10)){
                    apilar(&A10, desapilar(&auxA10));
                }
                while(!pilavacia(&auxB10)){
                    apilar(&B10, desapilar(&auxB10));
                }

                printf("\nPila A:\n");
                mostrar(&A10);
                printf("\nPila B:\n");
                mostrar(&B10);

                system("pause");
                system("cls");
                break;

            case 11:
                printf("Suponiendo la existencia de una pila MODELO que no este vacia, eliminar de la pila DADA todos los elementos que sean iguales al tope de la pila MODELO.\n\n");

                Pila dada11, modelo11, aux11, descarte11;
                inicpila(&dada11);
                inicpila(&modelo11);
                inicpila(&aux11);
                inicpila(&descarte11);

                printf("Cargando pila DADA\n");
                do{
                    leer(&dada11);
                    printf("Desea continuar cargando elementos a la pila? s/n ");
                    fflush(stdin);
                    scanf("%c", &control);
                }while(control == 's');

                printf("Cargando pila MODELO\n");
                do{
                    leer(&modelo11);
                    printf("Desea continuar cargando elementos a la pila? s/n ");
                    fflush(stdin);
                    scanf("%c", &control);
                }while(control == 's');

                printf("\nPila DADA:\n");
                mostrar(&dada11);
                printf("\nPila MODELO:\n");
                mostrar(&modelo11);

                while(!pilavacia(&dada11)){
                    if(tope(&dada11) == tope(&modelo11)){
                        apilar(&descarte11, desapilar(&dada11));
                    }else{
                        apilar(&aux11, desapilar(&dada11));
                    }
                }
                while(!pilavacia(&aux11)){
                    apilar(&dada11, desapilar(&aux11));
                }

                printf("\nPila DADA sin los elementos que son iguales al tope de la pila MODELO (%d):\n", tope(&modelo11));
                mostrar(&dada11);

                system("pause");
                system("cls");
                break;

            case 12:
                printf("Suponiendo la existencia de una pila MODELO (vacia o no), eliminar de la pila DADA todos los elementos que existan en MODELO.\n\n");

                Pila dada12, modelo12, auxDada12, auxModelo12, descarte12;
                inicpila(&dada12);
                inicpila(&modelo12);
                inicpila(&auxDada12);
                inicpila(&auxModelo12);
                inicpila(&descarte12);

                printf("Cargando pila DADA\n");
                do{
                    leer(&dada12);
                    printf("Desea continuar cargando elementos a la pila? s/n ");
                    fflush(stdin);
                    scanf("%c", &control);
                }while(control == 's');

                printf("\nDesea cargar elementos a la pila MODELO? s/n ");
                fflush(stdin);
                scanf("%c", &control);
                if(control == 's'){
                printf("Cargando pila MODELO\n");
                    do{
                        leer(&modelo12);
                        printf("Desea continuar cargando elementos a la pila? s/n ");
                        fflush(stdin);
                        scanf("%c", &control);
                    }while(control == 's');
                }

                printf("\nPila DADA:\n");
                mostrar(&dada12);

                while(!pilavacia(&modelo12)){
                    while(!pilavacia(&dada12)){
                        if(tope(&dada12) == tope(&modelo12)){
                            apilar(&descarte12, desapilar(&dada12));
                        }
                        else {
                            apilar(&auxDada12, desapilar(&dada12));
                        }
                    }
                    while(!pilavacia(&auxDada12)){
                        apilar(&dada12, desapilar(&auxDada12));
                    }
                    apilar(&auxModelo12, desapilar(&modelo12));
                }

                while(!pilavacia(&auxModelo12)){
                    apilar(&modelo12, desapilar(&auxModelo12));
                }

                printf("\nPila MODELO:\n");
                mostrar(&modelo12);

                printf("\nPila DADA sin los elementos que existen en la pila MODELO:\n");
                mostrar(&dada12);

                system("pause");
                system("cls");
                break;

            case 13:
                printf("Suponiendo la existencia de una pila LIMITE, pasar los elementos de la pila DADA que sean mayores o iguales que el tope de LIMITE a la pila MAYORES, y los elementos que sean menores a la pila MENORES.\n\n");

                Pila dada13, limite13, mayores, menores;
                inicpila(&dada13);
                inicpila(&limite13);
                inicpila(&mayores);
                inicpila(&menores);

                printf("Cargando pila DADA\n");
                do{
                    leer(&dada13);
                    printf("Desea continuar cargando elementos a la pila? s/n ");
                    fflush(stdin);
                    scanf("%c", &control);
                }while(control == 's');

                printf("\nCargando pila LIMITE\n");
                leer(&limite13);

                printf("\nPila DADA:\n");
                mostrar(&dada13);
                printf("\nPila LIMITE:\n");
                mostrar(&limite13);

                while(!pilavacia(&dada13)){
                    if(tope(&dada13) >= tope(&limite13)){
                        apilar(&mayores, desapilar(&dada13));
                    }else{
                        apilar(&menores, desapilar(&dada13));
                    }
                }

                printf("\nPila MAYORES:\n");
                mostrar(&mayores);
                printf("\nPila MENORES:\n");
                mostrar(&menores);

                system("pause");
                system("cls");
                break;

            case 14:
                printf("Determinar si la cantidad de elementos de la pila DADA es par. Si es par, pasar el elemento del tope de la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR (NO contar los elementos)\n\n");

                Pila dada14, aux14, par, impar;
                inicpila(&dada14);
                inicpila(&aux14);
                inicpila(&par);
                inicpila(&impar);

                printf("Cargando pila DADA\n");
                do{
                    leer(&dada14);
                    printf("Desea continuar cargando elementos a la pila? s/n ");
                    fflush(stdin);
                    scanf("%c", &control);
                }while(control == 's');

                printf("\nPila DADA:\n");
                mostrar(&dada14);

                while(!pilavacia(&dada14)){
                    apilar(&aux14, desapilar(&dada14));
                    if(!pilavacia(&dada14)){
                        apilar(&aux14, desapilar(&dada14));
                    }else{
                        apilar(&impar, desapilar(&aux14));
                    }
                }

                if(!pilavacia(&impar)){
                    printf("\nLa pila DADA tiene una cantidad de elementos impar\n");
                    mostrar(&impar);
                }else{
                    apilar(&par, desapilar(&aux14));
                    printf("\nLa pila DADA tiene una cantidada de elementos par\n");
                    mostrar(&par);
                }

                system("pause");
                system("cls");
                break;

            default:
                printf("Opcion incorrecta\n");
                system("pause");
                system("cls");
        }

        printf("Desea probar otro ejercicio? (s/n) ");
        fflush(stdin);
        scanf("%c", &control);
        system("cls");
    }

    printf("Hasta el proximo TP!\n");
    return 0;
}
