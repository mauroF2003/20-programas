#include <iostream>
#include <ctime>
#include <cmath>
#include <conio.h>
#include <windows.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
     int m,opcion;	
        cout<<"MENU "<<endl;
        cout << "1. Suma, Resta, Multiplicacion y Division de dos numeros" << endl;
        cout << "2. numero es par o impar" << endl;
        cout << "3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa" << endl;
        cout << "4. Determinar si una palabra o un numero es palindromo" << endl;
        cout << "5. Conversion de numeros arabigos a romanos" << endl;
        cout << "6. Conversion de numeros enteros a letras" << endl;
        cout << "7. Conversion de numeros enteros con decimal a letras" << endl;
        cout << "8. Una tabla de multiplicar " << endl;
        cout << "9. Todas las tablas de multiplicar del 1 al 10" << endl;
        cout << "10. Crear de forma grafica la multiplicacion manual" << endl;
        cout << "11. Conversion de numeros decimales a binario" << endl;
        cout << "12. Conversion de numeros decimales a hexadecimales" << endl;
        cout << "13. Crear Figuras Geometricas Basicas" << endl;
        cout << "14. Mover un punto en toda la pantalla" << endl;
        cout << "15. Simulacion de un Cajero (Automata)" << endl;
        cout << "16. Muestre la hipotenusa" << endl;
        cout << "17. Muestre Codigo Area Paises Centroamerica" << endl;
        cout << "18. Calcular por regla de 3 notas" << endl;
        cout << "19. Mostrar numeros impares hasta 50 " << endl;
        cout << "20. Muestre el producto de dos numeros" << endl;
        cout << "21. SALIR" << endl;
        cout << "<<--INGRESE UNA OPCION DEL MENU-->>"<< endl; 
        cin>>m;
     switch(m)
     { 
     case 1:cout<<">>Suma, Resta, Multiplicacion y Division de dos numeros<<"<<endl;
     {
	  float x,y,a,b,c,d;
      cout<<"\n ingrese numero x:";
      cin>>x;
      cout<<"\n ingrese numero y:";
      cin>>y;
      a=x+y;
      b=x-y;
      c=x*y;
      d=x/y;
      cout<<x<<"+"<<y<<"="<<a;
      cout<<"\n"<<x<<"-"<<y<<"="<<b;
      cout<<"\n"<<x<<"*"<<y<<"="<<c;
      cout<<"\n"<<x<<"/"<<y<<"="<<d;
    return 0;
	}

    case 2:cout<<">>numero es par o impar<<"<<endl;
     float numero;
     div_t resultado;
     cout << "Ingrese un numero para verificar si es par o impar" << endl;
     cin >> numero; 
     resultado=div(numero,2);
     if (resultado.rem>0)
	 {
     cout << numero << " Es Impar" << endl;
	 }
     else {
     cout << numero << " Es Par" << endl;
	 }
     cin.get();
     cin.ignore();
     return 0;
     
    case 3:cout<<">>Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa<<"<<endl;
     {
     float input;
     char unidad;
     cout << "Ingrese un valor seguido de una unidad (k para kilometros, m para metros, l para libras): ";
     cin >> input >> unidad;
     switch (unidad) {
        case 'k':  
            input *= 0.621371;
            cout << "El valor convertido a millas es: " << input << " mi" << endl;
            break;
        case 'm':  
            input *= 39.3701;
            cout << "El valor convertido a pulgadas es: " << input << " in" << endl;
            break;
        case 'l':  
            input *= 0.453592;
            cout << "El valor convertido a kilos es: " << input << " kg" << endl;
            break;
        default:
            cout << "Unidad no reconocida" << endl;
     } 
	 return 0;
	 }
    case 4:cout<<">>Determinar si una palabra o un numero es palindromo<<"<<endl; 
     { 
     float input;
     cout << "Ingrese una palabra o numero: ";
     cin >> input;
     char* ptr = reinterpret_cast<char*>(&input);
     int tamano = sizeof(input);
     bool es_palindromo = true;
     for (int i = 0; i < tamano / 2; i++) {
        if (ptr[i] != ptr[tamano - 1 - i]) {
            es_palindromo = false;
            break;
        }
     }
     if (es_palindromo) {
        cout << "La entrada es un palindromo" << endl;
     } else {
        cout << "La entrada no es un palindromo" << endl;
     }
     return 0;
	 }

    case 5:cout<<">>Conversion de numeros arabigos a romanos<<"<<endl;
      {
	 int c;
	 int d;
	 int m;
	 float n;
	 int u;
	 cout << "Escribe un numero" << endl;
	 cin >> n;
	 m = int(n/1000)%10;
	 c = int(n/100)%10;
	 d = int(n/10)%10;
	 u = int(n/1)%10;
	 if (m>3) {
		cout << "El numero no se puede calcular" << endl;
	 } else {
		switch (m) {
		case 1:
			cout << "M";
			break;
		case 2:
			cout << "MM";
			break;
		case 3:
			cout << "MMM";
			break;
		}
		switch (c) {
		case 1:
			cout << "C";
			break;
		case 2:
			cout << "CC";
			break;
		case 3:
			cout << "CCC";
			break;
		case 4:
			cout << "CD";
			break;
		case 5:
			cout << "D";
			break;
		case 6:
			cout << "DC";
			break;
		case 7:
			cout << "DCC";
			break;
		case 8:
			cout << "DCCC";
			break;
		case 9:
			cout << "CM";
			break;
		}
		switch (d) {
		case 1:
			cout << "X";
			break;
		case 2:
			cout << "XX";
			break;
		case 3:
			cout << "XXX";
			break;
		case 4:
			cout << "XL";
			break;
		case 5:
			cout << "L";
			break;
		case 6:
			cout << "LX";
			break;
		case 7:
			cout << "LXX";
			break;
		case 8:
			cout << "LXXX";
			break;
		case 9:
			cout << "XC";
			break;
		}
		switch (u) {
		case 1:
			cout << "I" << endl;
			break;
		case 2:
			cout << "II" << endl;
			break;
		case 3:
			cout << "III" << endl;
			break;
		case 4:
			cout << "IV" << endl;
			break;
		case 5:
			cout << "V" << endl;
			break;
		case 6:
			cout << "VI" << endl;
			break;
		case 7:
			cout << "VII" << endl;
			break;
		case 8:
			cout << "VIII" << endl;
			break;
		case 9:
			cout << "IX" << endl;
			break;
		}
 	}
	 return 0;
	 }

    case 6:cout<<">>Conversion de numeros enteros a letras<<"<<endl;
     {
	 int x;
	 cout<<"ingrese un numero"<<endl;
	 cin>>x;
     if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
     else

    	{
		if(x>=900)	{cout<<"NOVECIENTOS "	;x=x-900;}
   	   else if(x>=800)	{cout<<"OCHOCIENTOS "	;x=x-800;}
	   else if(x>=700)	{cout<<"SETECIENTOS "	;x=x-700;}
	   else if(x>=600)	{cout<<"SEISCIENTOS "	;x=x-600;}
	   else if(x>=500)	{cout<<"QUINIENTOS "	;x=x-500;}
	   else if(x>=400)	{cout<<"CUATROCIENTOS "	;x=x-400;}
	   else if(x>=300)	{cout<<"TRESCIENTOS "	;x=x-300;}
	   else if(x>=200)	{cout<<"DOSCIENTOS "	;x=x-200;}
	   else if(x>100)	{cout<<"CIENTO "	;x=x-100;}
	   else if(x==100)	{cout<<"CIEN"		;x=x-100;}
		if(x>90)	{cout<<"NOVENTA Y "	;x=x-90; }
	    	if(x==90)	{cout<<"NOVENTA"	;x=x-90; }  
	    	if(x>80)	{cout<<"OCHENTA Y "	;x=x-80; }
	    	if(x==80)	{cout<<"OCHENTA"	;x=x-80; }
	    	if(x>70)	{cout<<"SETENTA Y "	;x=x-70; }
	    	if(x==70)	{cout<<"SETENTA"	;x=x-70; }
	    	if(x>60)	{cout<<"SESENTA Y "	;x=x-60; }
	    	if(x==60)	{cout<<"SESENTA"	;x=x-60; }
	    	if(x>50)	{cout<<"CINCUENTA Y "	;x=x-50; }
	    	if(x==50)	{cout<<"CINCUENTA"	;x=x-50; }
	    	if(x>40)	{cout<<"CUARENTA Y "	;x=x-40; }
	    	if(x==40)	{cout<<"CUARENTA"	;x=x-40; }
	    	if(x>30)	{cout<<"TREINTA Y "	;x=x-30; }
	    	if(x==30)	{cout<<"TREINTA"	;x=x-30; }
	    	if(x>20)	{cout<<"VEINTI"		;x=x-20; }
	    	if(x==20)	{cout<<"VEINTE"		;x=x-20; }
		if(x>=16)	{cout<<"DIECI"		;x=x-10; }
	   else if(x==15)	{cout<<"QUINCE"		;x=x-15; }
	   else if(x==14)	{cout<<"CATORCE"	;x=x-14; }
	   else if(x==13)	{cout<<"TRECE"		;x=x-13; } 
	   else if(x==12)	{cout<<"DOCE"		;x=x-12; }
	   else if(x==11)	{cout<<"ONCE"		;x=x-11; }
	   else if(x==10)	{cout<<"DIEZ"		;x=x-10; }		
		if(x==9)	{cout<<"NUEVE"		;x=x-9;  }
		if(x==8)	{cout<<"OCHO"		;x=x-8;  }
		if(x==7)	{cout<<"SIETE"		;x=x-7;  }
	    	if(x==6)	{cout<<"SEIS"		;x=x-6;  }
	   else if(x==5)	{cout<<"CINCO"		;x=x-5;  }
	   else if(x==4)	{cout<<"CUATRO"		;x=x-4;	 }
	   else if(x==3)	{cout<<"TRES"		;x=x-3;	 }
	   else if(x==2)	{cout<<"DOS"		;x=x-2;	 }
	   else if(x==1)	{cout<<"UNO"		;x=x-1;	 }
	   }
      cout<<endl;
	  cin.ignore();return 0;
	  }

   case 7:cout<<">>Conversion de numeros enteros con decimal a letras<<"<<endl; 
    {
     double valor;
     int miles,cientos,unidades,decimales;
     char numeros[100][20] = 
     {
     {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
     {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
     {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
     {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
     {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
     {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
     {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
     {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
     {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
     {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
      };
     char centenas[10][20] = 
     {
     {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
     };
     std::cout << "Introduzca numero a transcribir: ";
     std::cin >> valor;
     miles = ((int)valor)/1000;
     cientos = (((int)valor)%1000)/100;
     unidades = ((int)valor)%100;
     decimales = ((int) (valor*100.0))%100 ;
     if (miles)
     std::cout << numeros[miles] << " mil ";
     if (cientos)
     std::cout << centenas[cientos] << " ";
     if (unidades) 
     std::cout << numeros[unidades];
     if (decimales)
      {
     if(miles || cientos || unidades)
     {
     std::cout << " con ";
     }
     std::cout << numeros[decimales] << " centimos.";
     }
     std::cout << std::endl;
     system("pause");
     return 0;
	 } 
  
 
    case 8:cout<<">>Una tabla de multiplicar<<"<<endl;
	  {
     float numero,i;
	 do{
	 cout<<"Ingrese un numero para realizar su tabla de multiplicar: ";
	 cin>>numero;	
	  }while((numero<1) || (numero>10));
     for(int i=1; i<=10; i++){
	 cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
	 }
	 return 0;
	 }
	 
    case 9:cout<<">>Todas las tablas de multiplicar del 1 al 10<<"<<endl;
     {
     float num1 = 1.0, num2 = 1.0, resultado;
     while (num1 <= 10.0) {
        cout << "Tabla del " << num1 << ":" << endl;
        while (num2 <= 10.0) {
            resultado = num1 * num2;
            cout << num1 << " x " << num2 << " = " << resultado << endl;
            num2 += 1.0;
        }
        num2 = 1.0;
        num1 += 1.0;
        cout << endl;
     }
     return 0;
 	}
 	
   case 10:cout<<">>Crear de forma grafica la multiplicacion manual<<"<<endl;
     {
     float num1 = 45.0, num2 = 32.0, resultado, espacio = 0.0;
     cout << "  " << num1 << endl;
     cout << "x " << num2 << endl;
     cout << "-----" << endl;
     while (num2 > 0.0) {
        resultado = num1 * (num2 - int(num2));
        num2 = int(num2);
        espacio += 1.0;
        for (float i = 0.0; i < espacio; i += 1.0) {
            cout << " ";
        }
        cout << resultado << endl;
        resultado = num1 * num2;
        for (float i = 0.0; i < espacio; i += 1.0) {
            cout << " ";
        }
        cout << resultado << endl;
        for (float i = 0.0; i < espacio; i += 1.0) {
            cout << " ";
        }
        cout << "-----" << endl;
        num2 /= 10.0;
     }
     resultado = num1 * int(num2);
     for (float i = 0.0; i < espacio; i += 1.0) {
        cout << " ";
     }
     cout << resultado << endl;
     cout << "-----" << endl;
     cout << " " << num1 * num2 << endl;
     return 0;
	 }
	 
    case 11:cout<<">>Conversion de numeros decimales a binario<<"<<endl;
     {
 	float binario;
 	int n;
 	float x;
 	cout << "Escribe un numero" << endl;
 	cin >> n;
 	cout << "El numero " << n << " convertido a binario es: " << endl;
 	x = 1;
 	binario = 0;
 	while (n>=1) {
		if (n%2==1) {
			binario = binario+x;
		}
		n = int(n/2);
		x = x*10;
 	}
 	cout << binario << endl;
 	return 0;
 	}

    case 12:cout<<">>Conversion de numeros decimales a hexadecimales<<"<<endl; 
     {
     int decimalNumber;
     cout << "Ingrese un numero decimal: ";
     cin >> decimalNumber;
     stringstream ss;
     ss << hex << decimalNumber;
     string hexNumber = ss.str();
	 cout << "El numero hexadecimal equivalente es: " << hexNumber << endl;
     return 0;
	 }
   
    case 13:cout<<">>Crear Figuras Geometricas Basicas<<"<<endl;
	cout << "Triangulo:" << endl;
	cout << "  **  " << endl;
	cout << " **** " << endl;
	cout << "******" << endl;
	cout << "Circulo:" << endl;
	cout << "  ***  " << endl;
	cout << " ***** " << endl;
	cout << "*******" << endl;
	cout << "*******" << endl;
	cout << " ***** " << endl;
	cout << "  ***  " << endl;
	cout << "Cuadrado:" << endl;
	cout << "******" << endl;
	cout << "*    *" << endl;
	cout << "*    *" << endl;
	cout << "*    *" << endl;
	cout << "******" << endl;
	return 0;
     
    case 14:cout<<">>Mover un punto en toda la pantalla<<"<<endl; 
     {
	 int x = 0, y = 0; 
     int dx = 1, dy = 1; 
     while (true)
    {
        system("cls");
        for (int i = 0; i < y; i++)
            std::cout << std::endl;
        for (int i = 0; i < x; i++)
            std::cout << " ";
        std::cout << "*" << std::endl;
        x += dx;
        y += dy;
        if (x == 0 || x == 10) 
            dx = -dx;
        if (y == 0 || y == 10) 
            dy = -dy;

        break;
      }
	  }
     return 0;

    case 15:cout<<">>Simulacion de un Cajero (Automata)<<"<<endl;
     {
 	float contador;
	 string contrasena;
	 float deposito;
	 int respuesta;
	 float retiro;
	 float saldo;
	 saldo = 1000;
	 contador = 1;
 	while (contador<=3) {
		cout << "Escribe la contraseña" << endl;
		cin >> contrasena;
		if (contrasena=="abc") {
			contador = 4;
			respuesta = 0;
			while (respuesta!=4) {
				cout << "1: = Consultar saldo" << endl;
				cout << "2: = Ingresar saldo" << endl;
				cout << "3: = Retirar saldo" << endl;
				cout << "4: = Salir" << endl;
				cin >> respuesta;
				switch (respuesta) {
				case 1:
					cout << "Tu saldo actual es: Q " << saldo << endl;
					break;
				case 2:
					cout << "Ingresa la cantidad a depositar" << endl;
					cin >> deposito;
					saldo = saldo+deposito;
					cout << "Tu saldo actual es es: Q" << saldo << endl;
					break;
				case 3:
					cout << "Ingresa la cantidad a retirar" << endl;
					cin >> retiro;
					if (retiro>saldo) {
						cout << "La cantidad supera el saldo" << endl;
						cout << "Tu saldo actual es: Q" << saldo << endl;
					} else {
						saldo = saldo-retiro;
						cout << "Tu saldo actual es: Q" << saldo << endl;
					}
					break;
				}
			}
		} else {
			contador = contador+1;
			if (contador==4) {
				cout << "Has fallado los 3 intentos" << endl;
			} else {
				cout << "La contraseÃ±a es incorrecta" << endl;
			}
		}
	 }
	 	return 0;
		 }

    case 16:cout<<">>Calcular la hipotenusa<<"<<endl;
     {
     float cateto1 = 5.0;
     float cateto2 = 6.0;
     float hipotenusa = sqrt(pow(cateto1, 2.0) + pow(cateto2, 2.0));
     std::cout << "La hipotenusa es: " << hipotenusa << std::endl;
     return 0;
	 } 
	 
	case 17:cout<<">>Muestre Codigo Area Paises Centroamerica<<"<<endl;
    {
          int pais;
     cout<<"\n"<<"Ingrese el codigo de area: ";
     cin >> pais;
     switch(pais) {
        case 501:
            cout << "Belice";
            break;
        case 506:
            cout << "Costa Rica";
            break;
        case 503:
            cout << "El Salvador";
            break;
        case 502:
            cout << "Guatemala";
            break;
        case 504:
            cout << "Honduras";
            break;
        case 505:
            cout << "Nicaragua";
            break;
        case 507:
            cout << "Panama";
            break;
        default:
            cout << "El número de país ingresado no es válido.\n";
            break;
     }
     }
     return 0;
	 
    case 18:cout<<">>Calcular por regla de 3 notas<<"<<endl;
      {
     double nota1, nota2, nota3, notaFinal, porcentaje1, porcentaje2, porcentaje3;
     std::cout << "Ingrese la nota 1: ";
     std::cin >> nota1;
     std::cout << "Ingrese el porcentaje de la nota 1 (sin el símbolo %): ";
     std::cin >> porcentaje1;
     std::cout << "Ingrese la nota 2: ";
     std::cin >> nota2;
     std::cout << "Ingrese el porcentaje de la nota 2 (sin el símbolo %): ";
     std::cin >> porcentaje2;
     std::cout << "Ingrese la nota 3: ";
     std::cin >> nota3;
     std::cout << "Ingrese el porcentaje de la nota 3 (sin el símbolo %): ";
     std::cin >> porcentaje3;
     porcentaje1 /= 100.0;
     porcentaje2 /= 100.0;
     porcentaje3 /= 100.0;
     notaFinal = (nota1 * porcentaje1 + nota2 * porcentaje2 + nota3 * porcentaje3) / (porcentaje1 + porcentaje2 + porcentaje3);
     std::cout << "La nota final es: " << notaFinal << std::endl;
     return 0;
 	}

    case 19: cout<<">>Mostrar numeros impares hasta 50<<"<<endl;
     {
     for (int i = 1; i <= 50; i += 2) {
        std::cout << i << " ";
     }
     std::cout << std::endl;
	  return 0;
	  }
    
    case 20:cout<<">>Muestre un producto de dos numeros<<"<<endl;
     {
     int num1, num2, resultado;
     std::cout << "Ingrese el primer numero: ";
     std::cin >> num1;
     std::cout << "Ingrese el segundo numero: ";
     std::cin >> num2;
     resultado = num1 * num2;
     std::cout << "El resultado del producto es: " << resultado << std::endl;
     return 0;
	 }
	 
    case 21:cout<<"SALIR"<<endl;
     cout<<"YA NO HAY MAS PROGRAMAS QUE MOSTRAR"<<endl;{
  	 return 0;
	 }
     default: cout<<"El valor ingresado no esta en el menu"<<endl;
     
	 }
	 cin.ignore(); return 0; 
  } 
