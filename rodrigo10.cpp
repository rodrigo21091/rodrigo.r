#include <iostream>
#include <string>
using namespace std;

int main() {


    struct estudiante{
	
 	 string nombre;
 	int edad;
 	float promedio ;
 };
 	
 	estudiante alumno1; 
 	alumno1.nombre = "Juan Perez";
	 alumno1.edad = 20; 
	 alumno1.promedio = 15;
	 
	 cout <<"datos del estudiante"<< endl;
	 cout <<"nombre: " <<alumno1.nombre<<endl;
	 cout <<"edad: " <<alumno1.edad<<endl;
	 cout <<"promedio: " <<alumno1.promedio<<endl;
	 
	 return 0;

}