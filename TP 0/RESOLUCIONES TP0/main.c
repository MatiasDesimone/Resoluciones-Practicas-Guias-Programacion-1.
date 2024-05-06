#include <stdio.h>
#include <stdlib.h>

int main()
{
    char control = 's';
    int opcion = 0;

    while (control == 's'){
        printf("TP 0 - INICIAL\n\n");
        printf("A) PROBLEMAS SECUENCIALES\n");
        printf("1  -  Ejercicio 1\n");
        printf("2  -  Ejercicio 2\n");
        printf("3  -  Ejercicio 3\n\n");
        printf("B) PROBLEMAS CONDICIONALES SELECTIVOS SIMPLES\n");
        printf("4  -  Ejercicio 1\n");
        printf("5  -  Ejercicio 2\n");
        printf("6  -  Ejercicio 3\n");
        printf("7  -  Ejercicio 4\n");
        printf("8  -  Ejercicio 5\n\n");
        printf("C) PROBLEMAS SELECTIVOS COMPUESTOS\n");
        printf("9  -  Ejercicio 1\n");
        printf("10 -  Ejercicio 2\n\n");
        printf("D) PROBLEMAS CON REPETICIONES\n");
        printf("11 -  Ejercicio 1\n");
        printf("12 -  Ejercicio 2\n");
        printf("13 -  Ejercicio 3\n");
        printf("14 -  Ejercicio 4\n");
        printf("15 -  Ejercicio 5\n");
        printf("16 -  Ejercicio 6\n\n");

        printf("Ingrese opcion numerica\n");
        fflush(stdin);
        scanf("%d", &opcion);
        system("cls");

        switch(opcion){
            case 1:
                printf("Suponga que una persona va a invertir su capital en un banco y desea saber cuanto dinero ganara despues de un mes si el banco paga el 2%% mensual.\n\n");

                float capital = 0, ganancia = 0;

                printf("Ingrese capital a invertir\n");
                fflush(stdin);
                scanf("%f", &capital);

                ganancia = capital * 0.02;

                printf("Tendra una ganancia de $%.2f\n", ganancia);

                system("pause");
                system("cls");
                break;

            case 2:
                printf("Una tienda ofrece un descuento del 15%% sobre el total de la compra y un cliente desea saber cuanto debera pagar finalmente por su compra.\n\n");

                float compra = 0, descuento = 0, totalDescuento = 0;

                printf("Ingrese monto de la compra\n");
                fflush(stdin);
                scanf("%f", &compra);

                descuento = compra * 0.15;
                totalDescuento = compra - descuento;

                printf("Debera pagar $%.2f\n", totalDescuento);

                system("pause");
                system("cls");
                break;

            case 3:
                printf("Un maestro desea saber que porcentaje de hombres y de mujeres hay en un grupo de estudiantes.\n\n");

                int mujeres = 0, hombres = 0, totalAlumnos = 0;
                float porcentajeMujeres = 0, porcentajeHombres = 0;

                printf("Ingrese cantidad de mujeres\n");
                fflush(stdin);
                scanf("%d", &mujeres);

                printf("Ingrese cantidad de hombres\n");
                fflush(stdin);
                scanf("%d", &hombres);

                totalAlumnos = mujeres + hombres;
                porcentajeMujeres = (float)mujeres * 100 / (float)totalAlumnos;
                porcentajeHombres = 100 - porcentajeMujeres;

                printf("Total de estudiantes %d\n", totalAlumnos);
                printf("Mujeres %.2f%%\n", porcentajeMujeres);
                printf("\Hombres %.2f%%\n", porcentajeHombres);

                system("pause");
                system("cls");
                break;

            case 4:
                printf("Determinar si un estudiante aprueba o reprueba un curso, sabiendo que aprobara si su promedio de tres calificaciones es mayor o igual a 7, caso contrario reprueba.\n\n");

                int contador = 0, nota = 0, suma = 0;
                float promedio = 0;

                while(contador < 3){
                    contador++;

                    printf("Ingrese nota %d\n", contador);
                    fflush(stdin);
                    scanf("%d", &nota);

                    suma += nota;
                }
                promedio = (float)suma / (float)contador;

                printf("El promedio es de %.2f, por lo tanto el alumno ", promedio);
                if(promedio >= 7){
                    printf("APRUEBA la materia\n");
                }
                else{
                    printf("DESAPRUEBA la materia\n");
                }

                system("pause");
                system("cls");
                break;

            case 5:
                printf("En un almacen se hace un 20%% de descuento a los clientes cuya compra supere los $5.000. Cual sera la cantidad que pagara una persona por su compra?\n\n");

                float compraAlmacen = 0, totalCompraDescuento = 0;

                printf("Ingrese monto de la compra\n");
                fflush(stdin);
                scanf("%f", &compraAlmacen);

                if(compraAlmacen > 5000){
                    totalCompraDescuento = compraAlmacen - (compraAlmacen * 0.2);
                    printf("El cliente supero los $5.000, el monto con descuento es de $");
                }
                else{
                    totalCompraDescuento = compraAlmacen;
                    printf("El cliente NO supero los $5.000, el monto a pagar es el mismo: $");
                }
                printf("%.2f\n", totalCompraDescuento);

                system("pause");
                system("cls");
                break;

            case 6:
                printf("Un obrero necesita calcular su salario semanal, el cual se obtiene de la siguiente manera: si trabaja 40 horas o menos se le paga $300 por hora, si trabaja mas de 40 horas se le paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra.\n\n");

                int cantidadHoras = 0, totalSueldo = 0, horasExtra = 0, sueldoExtra = 0;

                printf("Ingrese horas trabajadas\n");
                fflush(stdin);
                scanf("%d", &cantidadHoras);

                if(cantidadHoras > 40){
                    horasExtra = cantidadHoras - 40;
                    sueldoExtra = horasExtra * 400;
                    totalSueldo = 40 * 300 + sueldoExtra;
                    printf("El empleado trabajo mas de 40 horas, por lo que su salario es de $%d, de los cuales $%d corresponden a horas extra\n", totalSueldo, sueldoExtra);
                }
                else{
                    totalSueldo = cantidadHoras * 300;
                    printf("El empleado no registra horas extra, por lo que su salario es de $%d\n", totalSueldo);
                }

                system("pause");
                system("cls");
                break;

            case 7:
                printf("Desarrolle un algoritmo que lea dos numeros y los imprima en forma ascendente.\n\n");

                int numero1 = 0, numero2 = 0;

                printf("Ingrese numero 1\n");
                fflush(stdin);
                scanf("%d", &numero1);

                printf("Ingrese numero 2\n");
                fflush(stdin);
                scanf("%d", &numero2);

                printf("Numeros ordenados en forma ascendente: ");
                if(numero1 < numero2){
                    printf("%d - %d\n", numero1, numero2);
                }
                else{
                    printf("%d - %d\n", numero2, numero1);
                }

                system("pause");
                system("cls");
                break;

            case 8:
                printf("Hacer un algoritmo que calcule el total a pagar por la compra de camisas. Si se compran tres camisas o mas se aplica un descuento del 20%% sobre el total de la compra y si son menos de tres camisas un descuento del 10%%.\n\n");

                int cantidadCamisas = 0;
                float precioCamisas = 0, totalCamisas = 0;

                printf("Ingrese cantidad de camisas\n");
                fflush(stdin);
                scanf("%d", &cantidadCamisas);

                printf("Ingrese precio por camisa\n");
                fflush(stdin);
                scanf("%f", &precioCamisas);

                totalCamisas = precioCamisas * cantidadCamisas;

                if(cantidadCamisas >= 3){
                    totalCamisas -= totalCamisas * 0.2;
                    printf("El cliente tiene un descuento del 20%% por lo tanto ");
                }
                else{
                   totalCamisas -= totalCamisas * 0.1;
                   printf("El cliente tiene un descuento del 10%% por lo tanto ");
                }
                printf("tiene que pagar $%.2f\n", totalCamisas);

                system("pause");
                system("cls");
                break;

            case 9:
                printf("Leer 2 numeros, si son iguales multiplicarlos, si el primero es mayor que el segundo restarlos y si no sumarlos.\n\n");

                int num1 = 0, num2 = 0, resultadoOperacion = 0;

                printf("Ingrese numero 1\n");
                fflush(stdin);
                scanf("%d", &num1);

                printf("Ingrese numero 2\n");
                fflush(stdin);
                scanf("%d", &num2);

                if(num1 == num2){
                    resultadoOperacion = num1 * num2;
                }
                else{
                    if(num1 > num2){
                        resultadoOperacion = num1 - num2;
                    }
                    else{
                        resultadoOperacion = num1 + num2;
                    }
                }

                printf("El resultado de la operacion es %d\n", resultadoOperacion);

                system("pause");
                system("cls");
                break;

            case 10:
                printf("Leer tres numeros diferentes e imprimir el mayor de ellos.\n\n");

                int valor1 = 0, valor2 = 0, valor3 = 0, mayor = 0;

                printf("Ingrese numero 1\n");
                fflush(stdin);
                scanf("%d",&valor1);

                printf("Ingrese numero 2\n");
                fflush(stdin);
                scanf("%d",&valor2);

                printf("Ingrese numero 3\n");
                fflush(stdin);
                scanf("%d",&valor3);

                if(valor1 < valor2 && valor2 < valor3){
                    mayor = valor3;
                }
                else{
                    if(valor1 < valor2 && valor2 > valor3){
                        mayor = valor2;
                    }
                    else{
                        mayor = valor1;
                    }
                }

                printf("El mayor de los numeros es %d\n", mayor);

                system("pause");
                system("cls");
                break;

            case 11:
                printf("Calcular el promedio de un estudiante que tiene 7 calificaciones en la materia Programacion A.\n\n");

                int contador1, notas = 0, sumaNotas = 0;
                float promedioNotas = 0;

                for(contador1 = 0; contador1 < 7; contador1++){
                    printf("Ingrese nota %d\n", contador1+1);
                    fflush(stdin);
                    scanf("%d", &notas);
                    sumaNotas += notas;
                }

                promedioNotas = (float)sumaNotas / (float)contador1;

                printf("El promedio de notas de la materia Programacion A es de %.2f\n", promedioNotas);

                system("pause");
                system("cls");
                break;

            case 12:
                printf("Leer 10 numeros y obtener su cubo y su cuarta.\n\n");

                int valor = 0, contador2, valorCubo = 0, valorCuarta = 0;

                for(contador2 = 0 ; contador2 < 10; contador2++){
                    printf("\nIngrese numero %d\n", contador2+1);
                    fflush(stdin);
                    scanf("%d", &valor);

                    valorCubo = valor * valor * valor;
                    printf("El cubo de %d es %d\n", valor, valorCubo);
                    valorCuarta = valorCubo * valor;
                    printf("La cuarta de %d es %d\n", valor, valorCuarta);
                }

                system("pause");
                system("cls");
                break;

            case 13:
                printf("Leer 10 numeros e imprimir solamente los positivos\n\n");

                int contador3, numero = 0;

                for(contador3 = 0; contador3 < 10; contador3++){
                    printf("\nIngrese numero %d\n", contador3+1);
                    fflush(stdin);
                    scanf("%d", &numero);

                    if(numero >= 0){
                        printf("El numero es positivo, se muestra: %d\n", numero);
                    }
                    else{
                        printf("El numero es negativo, no se muestra\n");
                    }
                }

                system("pause");
                system("cls");
                break;

            case 14:
                printf("Leer 15 numeros negativos, convertirlos en positivos e imprimirlos.\n\n");

                int contador4, numero4 = 0, positivo = 0;

                for(contador4 = 0; contador4 < 15; contador4++){
                    printf("Ingrese numero %d\n", contador4+1);
                    fflush(stdin);
                    scanf("%d", &numero4);

                    while(numero4 >= 0){
                        printf("Ingrese un numero NEGATIVO!\n");
                        fflush(stdin);
                        scanf("%d", &numero4);
                    }

                    positivo = (-1) * numero4;
                    printf("El numero en positivo es %d\n", positivo);
                }

                system("pause");
                system("cls");
                break;

            case 15:
                printf("Suponga que se tiene un conjunto de calificaciones de un grupo de 40 estudiantes. Realizar un algoritmo para calcular la calificacion promedio y la calificacion mas baja de todo el grupo.\n\n");

                int cantidad, calificacion = 0, sumaMedia = 0, notaMenor = 500;
                float media = 0;

                for(cantidad = 0; cantidad < 40; cantidad++){
                    printf("Ingrese nota del alumno %d\n", cantidad+1);
                    fflush(stdin);
                    scanf("%d", &calificacion);

                    if(notaMenor > calificacion){
                        notaMenor = calificacion;
                    }
                    sumaMedia += calificacion;
                }

                media = (float)sumaMedia / cantidad;
                printf("La nota mas baja es %d\n", notaMenor);
                printf("La media de las notas es de %.2f\n", media);

                system("pause");
                system("cls");
                break;

            case 16:
                printf("Calcular e imprimir la tabla de multiplicar de un numero cualquiera. Imprimir el multiplicando, el multiplicador y el producto.\n\n");

                int multiplicando = 0, multiplicador, producto = 0;

                printf("Ingrese numero para mostrar su tabla de multiplicar\n");
                fflush(stdin);
                scanf("%d", &multiplicando);

                for(multiplicador = 0; multiplicador <= 10; multiplicador++){
                        producto = multiplicando * multiplicador;
                        printf("%d x %d = %d\n", multiplicando, multiplicador, producto);
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
