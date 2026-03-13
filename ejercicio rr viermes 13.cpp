#include <iostream>
#include <conio.h>
using namespace std;
 
 struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
	
	};
	
	struct empleado {
		char nombre[20];
		struct info_direccion dir_empleado;
		double salario;
		
		}empleados[2];
		
		int main (){
			
			for(int i=0;i<2;i++){
				fflush(stdin);
				cout<<"digite su nombre: ";
				cin.getline(empleados[i] .nombre,20,'\n');
				cout <<"digite su direccion: ";
				cin.getline(empleados[i].dir_empleado.direccion,30, '\n');
				cout<<"ciudad: ";
				cin.getline(empleados[i].dir_empleado.ciudad,20, '\n');
				cin.getline(empleados[i].dir_empleado.provincia,20, '\n');
				cout<<"salario: ";
				cin>>empleados[i].salario;
				cout<<"\n";
				
		 }
			
			for(int i=0;i<2;i++){
			  cout<<"nombre: "<<empleados[i].nombre<<endl;
			  cout<<"direccion: "<<empleados [i].dir_empleado.direccion<<endl;
			  cout<<"ciudad: "<<empleados [i].dir_empleado.provincia<<endl;
			  cout<<"salario: "<<empleados[i].salario;
			  cout<<"\n";
			
			
			}
			
		getch();
		return 0;
			
			
	}
		
		
		