#include <iostream>

using namespace std;

void firstPoint();
void secondPoint();
void thirdPoint();
void fourthPoint();

int main(){

    int option=-1;

    do{
        cout<<"=====Taller #5 - IP====="<<endl;
        cout<<"1. Punto uno."<<endl;
        cout<<"2. Punto dos."<<endl;
        cout<<"0. Salir."<<endl;
        cout<<"\nDigite la opcion a la que desea ingresar: ";
        cin>>option;
        cout<<"========================"<<endl;

        switch (option){
        case 1:
            firstPoint();
            break;
        
        case 2:
            secondPoint();
            break;

        case 3:
            thirdPoint();
            break;

        case 4:
            fourthPoint();
            break;
        
        case 0:
            cout<<"Saliendo del programa."<<endl;
            break;

        default:
            cout<<"Digite una opcion valida."<<endl;
        }

    }while(option!=0);

    return 0;
}

void firstPoint(){
    /*Elabore un programa que, dado un vector de números enteros ordenado y con 
    posibles repeticiones, genere un nuevo vector en el que solo aparezcan los 
    valores únicos (sin duplicados). Finalmente, muestre en pantalla el nuevo vector resultante.*/

}

void secondPoint(){
    /*En un arreglo unidimensional se almacenan las toneladas de cereal cosechadas durante 
    los 12 meses del año. Elabore un programa que:
    - Calcule el promedio anual de toneladas cosechadas.
    - Indique la cantidad de meses cuya cosecha fue superior al promedio.
    - Indique la cantidad de meses cuya cosecha fue inferior al promedio.
    - Determine el mes con mayor cosecha.*/

}

void thirdPoint(){
    /*Se tienen dos vectores del mismo tamaño con valores enteros del 1 al 10. Elabore un 
    programa que realice la multiplicación entre los elementos de ambos vectores, tomando el primer 
    elemento del primer vector con el último elemento del segundo vector, el segundo con el penúltimo, 
    y así sucesivamente. Muestre el vector resultante en pantalla.*/

}

void fourthPoint(){
    /*Dados dos vectores de igual tamaño con valores enteros, elabore un programa que calcule y muestre:
    - La unión de los dos vectores.
    - La intersección de los vectores (elementos comunes).
    - La diferencia simétrica entre los dos vectores (elementos que no se repiten en ambos).*/

}
