

//Sofía es estudiante de una carrera técnica en sistemas de computación y requiere
//un ingreso extra para amortiguar sus gastos personales. Ella se ha encontrado con una
//oportunidad en Internet donde le ofrecen zapatos al por mayor y a un buen precio. Ella
//decide desarrollar una aplicación en el lenguaje C++ que le ofrezca realizar cálculos para
//determinar costos, margen de ganancias y proyectar sus ventas. En este programa a
//desarrollar, desempeñará el rol de compañero (a) y socio (a) de Sofía y le ayudará con su
//propósito.


#include <iostream>

using namespace std; // llama palabras reservadas del sistema


int main() // Función principal donde se desarrolla el codigo
{
 // Declaración de variables entero flotante, caracter
 int talla;
 float costo, precio,costoT,cantidad,precioT,utilidad,utilidadT,utilidadP, PorUtil;
 char descripcion[60];
 char referencia[10];
 char disponible;

 char tipo;


 
 
 
 cout << "ADMINISTRAR VENTA DE ZAPATOS\n"<<endl;  // cout <<- Permite concatenar instrucciones que se imprimiran en pantalla
 
 cout << "Digite la referencia del zapato..."<<endl;  
 cin >> referencia;  // cin >> Permita introducir datos como usuario, y guardarlos en la varable
 cin.ignore(256,'\n'); // Permite utilizar correctamente getline, ya que elimina el ultimo enter '\n' comilla simple 256 número de caracteres a ingnorar
 cout << "Digita la descripcion del zapato..." <<endl;  // cout <<- Permite concatenar instrucciones que se imprimiran en pantalla
 cin.getline(descripcion,60);  // Permite introducir caracteres con espacio , 60 es el número de caracteres definidos en la varible char
 cout << "Digita la talla" <<endl;  
 cin >> talla;
 cout << "Digita la letra si esta disponible o no para la venta S/N" <<endl;  // cout <<- Permite concatenar instrucciones que se imprimiran en pantalla
 cin >> disponible;
 cout << "Cantidad de zapatos" <<endl;  
 cin >> cantidad;
 cout << "Digita el costo del zapato" <<endl;  // 
 cin >> costo;
 costoT = costo*cantidad;
 cout << "Costo total: " << costoT <<endl;  // 
  if (costo <=30000){
 	tipo ='A';
// 	PorUtil=0.5;
 }
 else if (costo >30000 && costo <=60000){
 	tipo='B';
// 	PorUtil = 0.4;
 }
 else if (costo>60000){
 	tipo ='C';
// 	PorUtil=0.3;
 }
 else{
 	cout<<"Entrada erronea"<<endl;
 }

switch (tipo)
 	{
 		case 'A':
 			{
 			PorUtil=0.5;
			break;	
			 }
	    case 'B':
 			{
 			PorUtil=0.4;
			break;	
			 }
		case 'C':
 			{
 			PorUtil=0.3;
			break;	
			 }
		
 		
	 }
 

 
 
 cout << "Digite el precio de la venta del zapato" <<endl;  
 cin >> precio;
 precioT=precio*cantidad;
 cout << "Precio total de " <<cantidad<<" unidades: " <<precioT<<endl;  
 utilidad = precio-costo;
 cout << "Utilidad por unidad: " <<utilidad<<endl;  
 utilidadT=utilidad*cantidad;
 cout << "Utilidad total: " <<utilidadT<<endl; 
 utilidadP = PorUtil*100;
 cout << "Porcentaje de utilidad: " <<utilidadP<<endl; 
 
 
 
 system("pause");
 system("cls"); // LIMPIA PANTALLA
 system("pause");
 cout << "\nLOS DATOS REGISTRADOS SON LOS SIGUIENTES"<<endl; 
 cout << "REFERENCIA: "<<referencia<<endl;
 cout << "TIPO: "<<tipo<<endl;
 cout << "DESCRIPCION: "<<descripcion<<endl;
 cout << "TALLA: "<<talla<<endl;
 cout << "DISPONIBILIDAD: "<<disponible<<endl;
 cout << "CANTIDAD DE ZAPATOS: "<<cantidad<<endl;
 cout << "COSTO UNIDAD: "<<costo<<endl;
 cout << "COSTO TOTAL: "<<costoT<<endl;
 cout << "PRECIO UNIDAD: "<<precio<<endl;
 cout << "PRECIO TOTAL DE "<<cantidad<<" UNIDADES: "<<precioT<<endl;
 cout << "UTILIDAD POR UNIDAD: "<<utilidad<<endl;
 cout << "UTILIDAD TOTAL: "<<utilidadT<<endl;
 cout << "PORCENTAJE DE UTILIDAD: "<<utilidadP<<endl;
 
 cout << "Gracias por digitar la informacion "<<endl;
 
 system("pause");
 system("cls");
 cout <<"------------------- "<<endl;
 cout <<"Desarrollado por Breyner Ocampo Cardenas "<<endl;

// Código de Emprendimiento
 system("pause"); // Hace una pausa antes de cerrar el programa 
 return 0; // Cierra el programa 
}
 



