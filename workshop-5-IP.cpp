#include <iostream>
#include <vector>

using namespace std;

void firstPoint();
void secondPoint();
double tonsAverage(int[], int);
int monthsAboveAverage(int[], int, double);
int monthsBelowAverage(int[], int, double);
int highestHarvest(int[], int);
void thirdPoint();
void fourthPoint();

int main(){

    int option=-1;

    do{
        cout<<"=====Taller #5 - IP====="<<endl;
        cout<<"1. Punto uno."<<endl;
        cout<<"2. Punto dos."<<endl;
        cout<<"3. Punto tres."<<endl;
        cout<<"4. Punto cuatro."<<endl;
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

    int size=10, initialVector[size]={1,2,3,3,3,4,5,5,6,7}, finalVector[size], position=0;

    for(int i=0; i<size; i++){
        if(i==0 || initialVector[i]!=initialVector[i-1]){

            finalVector[position]=initialVector[i];
            position++;
        }
    }

    cout<<"\nResultado: ";

    for(int i=0; i<position; i++){
        
        cout<<finalVector[i]<<"/";
    }

    cout<<endl;
}

void secondPoint(){

    int months=12, monthlyTons[months];
    double average=0.0;

    for(int i=0; i<months ; i++){

        cout<<"Digite cuantas toneladas se cosecharon en el mes #"<<i+1<<": ";
        cin>>monthlyTons[i];
    }

    average=tonsAverage(monthlyTons, months);

    cout<<"\nEl promedio de toneladas anual fue de: "<<average<<endl;
    cout<<"La cantidad de meses mayores al promedio fue de: #"<<monthsAboveAverage(monthlyTons, months, average)<<endl;
    cout<<"La cantidad de meses inferiores al promedio fue de: #"<<monthsBelowAverage(monthlyTons, months, average)<<endl;
    cout<<"El mes con la cosecha mas alta fue el: #"<<highestHarvest(monthlyTons, months)<<endl;
}

double tonsAverage(int monthlyTons[], int months){

    double average=0.0;

    for(int i=0; i<months; i++){

        average+=monthlyTons[i];
    }

    average=average/months;

    return average;
}

int monthsAboveAverage(int monthlyTons[], int months, double average){

    int counter=0;

    for(int i=0; i<months; i++){
		
		if(monthlyTons[i]>average){
			
			counter++;	
		}
	}
	
	return counter;
}

int monthsBelowAverage(int monthlyTons[], int months, double average){

    int counter=0;

    for(int i=0; i<months; i++){
		
		if(monthlyTons[i]<average){
			
			counter++;	
		}
	}
	
	return counter;
}

int highestHarvest(int monthlyTons[], int months){

    int aux=0, month=0;
	
	for(int i=0; i<months; i++){
			
		if(monthlyTons[i]>aux){
			
			aux=monthlyTons[i];
			month=i+1;			
		}
	}
	
	return month;
}

void thirdPoint(){

    int size=10, vectorOne[size]={1,2,3,4,5,6,7,8,9,10}, vectorTwo[size]={10,9,8,7,6,5,4,3,2,1}, results[size];

    for(int i=0; i<size; i++){
        results[i]=vectorOne[i]*vectorTwo[size-i-1];
    }

    cout<<"\nResultado: ";

    for(int i=0; i<size; i++){
        
        cout<<results[i]<<"/";
    }

    cout<<endl;
}

void fourthPoint(){
    /*Dados dos vectores de igual tamaño con valores enteros, elabore un programa que calcule y muestre:
    - La unión de los dos vectores.
    - La intersección de los vectores (elementos comunes).
    - La diferencia simétrica entre los dos vectores (elementos que no se repiten en ambos).*/

}
