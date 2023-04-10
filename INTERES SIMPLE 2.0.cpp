#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;
int main(){
	float P, j, n, I, S;
	int opc, i=0, error=0;
	bool band=true, var1=false, var2=false, var3=false, var4=false, var5=false;
	//SELECCION DE VARIABLES
	//var1 = Prestamo 
	//var2 = Tasa de interes
	//var3 = Tiempo
	//var4 = Interes Simple
	//var5 = Devolucion
	do{
		cout<<"TEMA: INTERES SIMPLE"<<endl;
		cout<<"Variables disponibles: "<<endl;
		if(!var1){
			cout<<"1.Prestamo"<<endl;}
		if(!var2){
			cout<<"2.Tasa de interes:"<<endl;}
		if(!var3){
			cout<<"3.Tiempo"<<endl;}
		if(!var4){
			cout<<"4.Interes simple"<<endl;}
		if(!var5){
			cout<<"5.Devolucion"<<endl;}
		cout<<"6.CONFIRMAR"<<endl;
		cout<<"\nVariables seleccionadas: "<<endl;
		if(var1==true){
			cout<<"-Prestamo"<<endl;}
		if(var2==true){
			cout<<"-Tasa de interes"<<endl;}
		if(var3==true){
			cout<<"-Tiempo"<<endl;}
		if(var4==true){
			cout<<"-Interes simple"<<endl;}
		if(var5==true){
			cout<<"-Devolucion"<<endl;}	
		cout<<"\nSeleccione las variables: "<<endl;
		cin>>opc;
		switch(opc){
			case 1:
				if(var1==true){
					var1=false;
				} else{
					var1=true;
				}
				break;
			case 2:
				if(var2==true){
					var2=false;
				} else{
					var2=true;
				}
				break;
			case 3:
				if(var3==true){
					var3=false;
				} else{
					var3=true;
				}
				break;
			case 4:
				if(var4==true){
					var4=false;
				} else{
					var4=true;
				}
				break;
			case 5:
				if(var5==true){
					var5=false;
				} else{
					var5=true;
				}
				break;
			case 6:
				band=false;
				break;
			default:
				break;
		}
		system("cls");
	} while(band);
	//PETICIÓN DE VALORES
	if(var1==true){
	cout<<"Prestamo: "<<endl;
	cin>>P;}
	if(var2==true){
	cout<<"Tasa de interes: "<<endl;
	cin>>j;}
	if(var3==true){
	cout<<"Tiempo: "<<endl;
	cin>>n;}
	if(var4==true){
	cout<<"Interes simple: "<<endl;
	cin>>I;}
	if(var5==true){
	cout<<"Devolucion: "<<endl;
	cin>>S;}
	//Nota: Tasa de interes en porcentaje 
	j = j/100;
	//OPERACIONES MATEMÁTICAS
	while(i<=1){
		if(var1==false){
			if(var2==true && (var3==true && var4==true)){
				P = I/(j*n);
				cout<<"Prestamo: "<<P<<endl;
				var1 = true;
			} else if(var4==true && var5==true){
				P = S-I;
				cout<<"Prestamo: "<<P<<endl;
				var1 = true;
			} else{
				error++;
			}
		}
		if(var2==false){
			if(var1==true && (var3==true && var4==true)){
				j = (I/(P*n))*100;
				cout<<"Tasa de interes: "<<j<<"%"<<endl;
				var2 = true;
			} else if(var1==true && (var3==true && var5==true)){
				j = ((S-P)/(P*n))*100;
				cout<<"Tasa de interes: "<<j<<"%"<<endl;
				var2 = true;
			} else{
				error++;
			}
		}
		if(var3==false){
			if(var1==true && (var2==true && var4==true)){
				n = I/(j*P);
				cout<<"Tiempo: "<<n<<endl;
				var3 = true;
			} else if(var1==true && (var2==true && var5==true)){
				n = (S-P)/(P*j);
				cout<<"Tiempo: "<<n<<endl;
				var3 = true;
			} else{
				error++;
			}
		}
		if(var4==false){
			if(var1==true && (var2==true && var3==true)){
				I = P*j*n;
				cout<<"Interes simple: "<<I<<endl;
				var4 = true;
			} else if(var1==true && var5==true){
				I = S-P;
				cout<<"Interes simple: "<<I<<endl;
				var4 = true;
			} else{
				error++;
			}
		}
		if(var5==false){
			if(var1==true && var4==true){
				S = P+I;
				cout<<"Devolucion: "<<S<<endl;
				var5 = true;
			} else if(var1==true && (var2==true && var3==true)){
				S = P*((j*n)+1);
				cout<<"Devolucion: "<<S<<endl;
				var5 = true;
			} else{
				error++;
			}
		}
		i++;
	}
	if(error>=6){
		cout<<"DATOS INSUFICIENTES"<<endl;
	}
	cout<<error<<endl;
	system("PAUSE");
	return 0;
}
//NOTA: Añadir algoritmo para definir unidades de tasa de interes y tiempo
//
