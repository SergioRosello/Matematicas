
/*Se trata de implementar un algoritmo que permita encontrar las raíces de un polinomio utilizando el resultado del Teorema de Bolzano.

Cosas a tener en cuenta :

	Un polinomio de grado n puede llegar a tener n raíces reales.

	Podemos partir de un intervalo inicial conocido, como hacíamos en clase, e ir haciéndolo más pequeño hasta que alcance una longitud deseada, que se pasará como parámetro.

	También se puede hacer una función de búsqueda del intervalo inicial, partiendo de un valor real y dando saltos(que pueden ser grandes) hasta que la función cambie de signo.

	Afrontar el problema con ejemplos sencillos.Por ejemplo ecuaciones de segundo grado de las que conocéis la solución.

	Permitir ecuaciones de cualquier grado(aunque este tenga una cota superior), dará más nota.

	Búsqueda de raíces de un polinomio
*/

/*#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	
	int segundogrado;
	int primergrado;
	int numerolibre;
	int solucion1;
	int solucion2;
	int intervalo1;
	int intervalo2;
	int x1 = 1;
	int x2 = -2;


	cout<<("Introduce el segundo y primer grado y el numero libre. ");
	cin >> segundogrado >> primergrado >> numerolibre;

	solucion1 = numerolibre;
	solucion2 = segundogrado * 1 + primergrado * -1 + numerolibre;


	for ( x1, x2; x1 <= 20, x2 >= -20; x1++, x2--)
	{

		if (solucion1 > 0 && solucion2 > 0 || solucion1 < 0 && solucion2 < 0)
		{
			solucion1 = segundogrado * pow (x1, 2) + primergrado * x1 + numerolibre;
			solucion2 = segundogrado * pow(x2, 2) + primergrado * x2 + numerolibre;
			cout << "Estas son x1 y x2 " << x1 << ", " << x2 << endl;
			cout << solucion1 << ", " << solucion2 << endl;
		}
		else
		{
			intervalo1 = x1;
			intervalo2 = x2;
			break;
		}

	};
	cout << "El intervalo en el que se encuentra F(c) = 0 es: "<< intervalo2 << ", " << intervalo1;
	
	int funcioCompleta = x1;
	return 0;
}
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int coeficienteX = 1;
	int numeroLibre = 0;
	int x = -10;
	cout << "Introduce el valor del coeficiente de x!" << endl;
	cin >> coeficienteX;
	cout << "Introduce el numero libre" << endl;
	cin >> numeroLibre;
	// imaginemos que es y y por tanto debe dar 0 para que el teorema de xxx funcione.
	int funcionCompleta = coeficienteX * pow(x, 2) + numeroLibre; 
	//cout << funcionCompleta;

	while (funcionCompleta > 2 || funcionCompleta < 2)
	{
		x++;
		funcionCompleta = coeficienteX * pow(x, 2) + numeroLibre;
		cout << "Esta es la x " << x << endl;
		cout << "Esta es la funcion completa " << funcionCompleta << endl;
		if (x > 20 || x == 0){
			break;
		}
	}

	return 0;
}*/

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
	int gradofuncion = 0;
	int numerolibre;

	cout << "De  cuantos grados va a ser la funcion " << endl;
	cin >> gradofuncion;

	vector <int> datosfuncion;  //Datos de la funcion hoygan xdxd !!11!!!one!!!

	for (int i = 0, n; gradofuncion > datosfuncion.size(); i++){  //Este for introduce un nuevo coeficiente por cada grado de la funcion. 
		cout << "Introduce los grados de la funcion " << endl;
		// no sería mejor que el programa te los genere automaticamente en vez de meterle uno a uno los grados de la funcion, que normalmente va decreciendo de forma constante?
		cin >> n;
		datosfuncion.push_back(n);
	}
	//cout << datosfuncion[i];  // no va a funcionar porque i está fuera del scope del for.

	
	return 0;
}