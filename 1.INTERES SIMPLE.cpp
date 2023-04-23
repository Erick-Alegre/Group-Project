#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
using namespace std;
int main(){
	double P, j, n, I, S;
	int opc, unidad_Interes1=0, unidad_Interes2, unidad_Tiempo1=0, unidad_Tiempo2,
	i=0, error=0;
	string per_interes, per_tiempo;
	bool band1=true, band2=true, band3=true, band4=true,
	var1=false, var2=false, var3=false, var4=false, var5=false,
	verif_P=true, verif_j=true, verif_n=true, verif_I=true, verif_S=true;
	//SELECCION DE VARIABLES
	//var1 = Prestamo 
	//var2 = Tasa de interes simple
	//var3 = Tiempo
	//var4 = Interes Simple
	//var5 = Devolucion
	do{
		cout<<"TEMA: INTERES SIMPLE"<<endl;
		cout<<"Variables disponibles: "<<endl;
		if(!var1){
			cout<<"1.Prestamo"<<endl;}
		if(!var2){
			cout<<"2.Tasa de interes simple"<<endl;}
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
			cout<<"-Tasa de interes simple"<<endl;}
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
				band1=false;
				break;
			default:
				break;
		}
		system("cls");
	} while(band1);
	//UNIDAD DE TASA DE INTERES
	if(var2==true){
		do{
			cout<<"TASA DE INTERES SIMPLE"<<endl;
			cout<<"Unidad de la tasa de interes: "<<endl;
			cout<<"1.Diario"<<endl;
			cout<<"2.Semanal"<<endl;
			cout<<"3.Mensual"<<endl;
			cout<<"4.Bimestral"<<endl;
			cout<<"5.Trimestral"<<endl;
			cout<<"6.Cuatrimestral"<<endl;
			cout<<"7.Semestral"<<endl;
			cout<<"8.Anual"<<endl;
			cin>>unidad_Interes1;
			if(unidad_Interes1>0 && unidad_Interes1<=8){
				switch(unidad_Interes1){
					case 1:
						per_interes = "Diario";
						break;
					case 2:
						per_interes = "Semanal";
						break;
					case 3:
						per_interes = "Mensual";
						break;
					case 4:
						per_interes = "Bimestral";
						break;
					case 5:
						per_interes = "Trimestral";
						break;
					case 6:
						per_interes = "Cuatrimestral";
						break;
					case 7:
						per_interes = "Semestral";
						break;
					case 8:
						per_interes = "Anual";
						break;
				}
				band2=false;
			}
			system("cls");
		} while(band2);
	}
	//UNIDAD DEL TIEMPO
	if(var3==true){
		do{
			cout<<"TIEMPO"<<endl;
			cout<<"Unidad del tiempo: "<<endl;
			cout<<"1.Dias"<<endl;
			cout<<"2.Semanas"<<endl;
			cout<<"3.Meses"<<endl;
			cout<<"4.Años"<<endl;
			cin>>unidad_Tiempo1;
			if(unidad_Tiempo1>0 && unidad_Tiempo1<=4){
				switch(unidad_Tiempo1){
					case 1:
						per_tiempo = "Dias";
						break;
					case 2:
						per_tiempo = "Semanas";
						break;
					case 3:
						per_tiempo = "Meses";
						break;
					case 4:
						per_tiempo = "Años";
						break;
				}
				band3=false;
			}
			system("cls");
		} while(band3);
	}
	//PETICION Y VERIFICACION DE VALORES
	do{
		if(verif_P==false){
			cout<<"Prestamo invalido"<<endl;}
		if(verif_j==false){
			cout<<"Tasa de interes simple invalida"<<endl;}
		if(verif_n==false){
			cout<<"Tiempo invalido"<<endl;}
		if(verif_I==false){
			cout<<"Interés simple invalido"<<endl;}
		if(verif_S==false){
			cout<<"Devolución invalida"<<endl;}
		if(var1==true){
			cout<<"Prestamo: "<<endl;
			cin>>P;
			if(P>0){
				verif_P = true;
			} else{
				verif_P = false;
				i++;
			}
		}
		if(var2==true){
			cout<<"Tasa de interes simple ("<<per_interes<<"): "<<endl;
			cin>>j;
			if(j>0){
				verif_j = true;
			} else{
				verif_j = false;
				i++;
			}
		}
		if(var3==true){
			cout<<"Tiempo ("<<per_tiempo<<"): "<<endl;
			cin>>n;
			if(n>0){
				verif_n = true;
			} else{
				verif_n = false;
				i++;
			}
		}
		if(var4==true){
			cout<<"Interes simple: "<<endl;
			cin>>I;
			if(I>0){
				verif_I = true;
			} else{
				verif_I = false;
				i++;
			}
		}
		if(var5==true){
			cout<<"Devolucion: "<<endl;
			cin>>S;
			if(S>0){
				verif_S = true;
			} else{
				verif_S = false;
				i++;
			}
		}
		if(i==0){
			band4 = false;
		} else {
			system("cls");
		}
		i = 0;
	} while(band4);
	//Igualando tasa de interes y tiempo
	if(var2==true || var3==true){
		switch(unidad_Tiempo1){
			case 1:
				if(unidad_Interes1==2){
					j = j/7;}
				if(unidad_Interes1==3){
					j = j/30;}
				if(unidad_Interes1==4){
					j = j/60;}
				if(unidad_Interes1==5){
					j = j/90;}
				if(unidad_Interes1==6){
					j = j/120;}
				if(unidad_Interes1==7){
					j = j/180;}
				if(unidad_Interes1==8){
					j = j/360;}
				//PARA OTROS
				per_interes = "diario";
				break;
			case 2:
				if(unidad_Interes1==3){
					j = j/4;}
				if(unidad_Interes1==4){
					j = j/8;}
				if(unidad_Interes1==5){
					j = j/12;}
				if(unidad_Interes1==6){
					j = j/16;}
				if(unidad_Interes1==7){
					j = j/24;}
				if(unidad_Interes1==8){
					j = j/48;}
				per_interes = "semanal";
				break;
			case 3:
				if(unidad_Interes1==4){
					j = j/2;}
				if(unidad_Interes1==5){
					j = j/3;}
				if(unidad_Interes1==6){
					j = j/4;}
				if(unidad_Interes1==7){
					j = j/6;}
				if(unidad_Interes1==8){
					j = j/12;}
				per_interes = "mensual";
				break;
			case 0:
				if(unidad_Interes1==1){
					per_tiempo = "días";}
				if(unidad_Interes1==2){
					per_tiempo = "semanas";}
				if(unidad_Interes1==3){
					per_tiempo = "meses";}
				if(unidad_Interes1==4){
					j = j/2;
					per_interes = "Mensual";
					per_tiempo = "meses";}
				if(unidad_Interes1==5){
					j = j/3;
					per_interes = "Mensual";
					per_tiempo = "meses";}
					break;
				if(unidad_Interes1==6){
					j = j/4;
					per_interes = "Mensual";
					per_tiempo = "meses";}
				if(unidad_Interes1==7){
					j = j/6;
					per_interes = "Mensual";
					per_tiempo = "meses";}
				if(unidad_Interes1==8){
					per_tiempo = "años";}
				break;
		}
	}
	//Tasa de interes: de porcentaje a decimal
	j = j/100;
	//CALCULOS MATEMATICOS
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
			} else if(var2==true && (var3==true && var5==true)){
				P = S/((j*n)+1);
				cout<<"Prestamo: "<<P<<endl;
				var1 = true;
			} else{
				error++;
			}
		}
		if(var2==false){
			if(var1==true && (var3==true && var4==true)){
				j = (I/(P*n))*100;
				cout<<"Tasa de interes simple: "<<j<<"% "<<per_interes<<endl;
				var2 = true;
			} else if(var1==true && (var3==true && var5==true)){
				j = ((S-P)/(P*n))*100;
				cout<<"Tasa de interes simple: "<<j<<"% "<<per_interes<<endl;
				var2 = true;
			} else{
				error++;
			}
		}
		if(var3==false){
			if(var1==true && (var2==true && var4==true)){
				n = I/(j*P);
				cout<<"Tiempo: "<<n<<" "<<per_tiempo<<endl;
				var3 = true;
			} else if(var1==true && (var2==true && var5==true)){
				n = (S-P)/(P*j);
				cout<<"Tiempo: "<<n<<" "<<per_tiempo<<endl;
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
	system("PAUSE");
	return 0;
}
