#include <iostream>

using namespace std;

void firstPoint();
void secondPoint();

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
    /*Elabore un programa, que lea un vector ordenado con números enteros
    (posiblemente repetidos) y dé como resultado un nuevo vector con
    números enteros, pero sin repeticiones.*/

    cout<<"\n(Mensaje de prueba) ha ingresado al primer punto."<<endl;

    
    /*int nums[10], cant=0;
    cout<<"Digite la cantidad de numeros menor a 10: ";
    cin>>cant;
    cout<<"Digite "<<cant<<" numeros seguidos que pueden estar repetidos: "<<endl;
    for (int i=0; i<cant; i++){
        cin>>nums[i];  
    }
    for (int i=0; i<cant; i++){
        cout<<nums[i]<<" / ";  
    }*/
}

void secondPoint(){

    /*En un arreglo unidimensional se ha almacenado el número total de
    toneladas de cereales cosechadas durante cada mes del año. Elabore un
    programa que proporcione la siguiente
    información:
    a.- Promedio anual de toneladas cosechadas.
    b.- Cuántos meses tuvieron una cosecha superior al promedio anual?
    c.- Cuántos meses tuvieron una cosecha inferior al promedio anual?
    d.- Cuál fue el mes en el que se produjeron mayor número de toneladas?*/

    cout<<"\n(Mensaje de prueba) ha ingresado al segundo punto."<<endl;
    
    /*int Meses[11], i, cont=1, Sum=0, Prom=0;
    for (i=0; i<12; i++){
    cout<<"Total de toneladas cosechadas en el mes numero "<<cont<<": ";
    cin>>Meses[i];
    cont++;
    }
    for (i=0; i<=12; i++){
    Sum=Sum+Meses[i];
    Prom=Sum/12;
    } 
    cout<<"El promedio anual de las toneladas cosechadas es: "<<Prom<<endl;
    for (i=0; i<=12; i++){
    Sum=Sum+Meses[i];  
    } 
    Prom=Sum/12;
    cout<<"Meses con promedio de cosecha superior a la anual: "<<Prom<<endl;*/
}
