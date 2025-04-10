#include <iostream>
#include <cstdlib>
using namespace std;

//un banco donde el usuario puede ver su saldo, depositar y retirar plata
//la idea es hacerlo con funciones y cosas mas avanzadas
//opcion de ver saldo, de depositar y de retirar

//Que debo hacer para que se refleje el valor del deposito en el saldo?:
//Asigar el valor que se deposita a una variable, ya sea total, o otra

float depositar(float meter, float total ){
	cout<<"Cuanto desea depositar?: \n";
	cin>>meter;
	
	total = total + meter;
	cout<<endl;
	
	cout<<"Listo, se depositó el monto";
	cout<<endl;
	cout<<endl;
	return total;
	
}

float retirar(float sacar, float total){
	
	cout<<"Cuanto desea retirar?: \n";
	cin>>sacar;
	
	total = total - sacar;
	cout<<endl;
	
	cout<<"Listo, monto retirado";
	cout<<endl;
	cout<<endl;
	return total;
	
}

float ver(float total){
	
	cout<<"Tu saldo es de: "<<total<<" cop";
	cout<<endl;
	cout<<endl;
	return 0;
}


int main(){
	
	float total= 0;
	float saldo = 0;
	float agregar, quitar;
	char eleccion;
	
	
	cout<<"BIENVENIDO A TU CUENTA\n";
	
	
	do{
	
	cout<<"Ver saldo (S)\n";
	cout<<"Depositar (D)\n";
	cout<<"Retirar (R)\n";
	
	
	
	cin>>eleccion;
	
		switch(eleccion){
			
			case 'S': case's':
				ver(total);
				break;
				
			case 'D': case 'd':
				total= depositar(agregar, total);
				break;
				
			case 'R': case 'r':
				total= retirar(quitar,total);
				
				break;
				
		}
		
	} while (eleccion != 'e' && eleccion != 'E');
	
	
	
	system("cls");
	
	cout<<"GRACIAS POR USAR NUESTROS SERVICIOS";
	
	return 0;
}

//SOLO QUIERO AÑADIR ESTE COMENTARIO Y DECIR QUE ESTÁ CREADO EN DEV CPP, AHORA HARÉ UN COMMIT DESDE ESTA RAMA A VER COMO RESULTA
