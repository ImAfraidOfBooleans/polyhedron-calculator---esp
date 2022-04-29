#include <iostream>

using namespace std;

    int x;
    int c;
    int v;
    int a;
    int repetir = 1;
    string msg1 = "Bienvenido a el comprobador de Poliedros simples. \n";
    string msg2 = "\nIntroduzca el numero de caras: ";
    string msg3 = "\nIntroduzca el numero de vertices: ";
    string msg4 = "\nIntroduzca el numero de aristas: ";
    string msg5 = "\nEl poliedro es simple.\n";
    string msg6 = "\nEl poliedro no es simple.\n";
/*----------------------------------------------------------------------------------*/
int main()
{	
	cout << msg1;
	
	do 
	{
    	
    	cout << msg2;
    	cin >> c;
    	cout << msg3;
    	cin >> v;
    	cout << msg4;
    	cin >> a;

    	if (x = c + v - a == 2)
    	{
    	  cout << msg5;
    	}
		
    	else if (x =c+v-a !=2)
    	{
    	  cout << msg6;
   		}
		
		cout << "\npara hacer otros calculo presione 1, para salir 0 \n";
		cin >> repetir;
		if (repetir == 1)
		system("cls");	    
 	} while (repetir == 1);
		
		
    return 0; 
}

//version original: @BrunoxFakeCoder. 
//version mejorada: @IvanIxZrix.
