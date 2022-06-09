//Primeiro projeto de algoritmo criado por mim em 2016, recuperado através de app de notas;
#include <iostream>
#include <math.h> //Biblioteca para cálculos matemáticos;
using namespace std;
int main()
{
	cout <<"Bem vindo a calculadora\n\n";

	int termoA; //Coeficiente de x²;
	int termoB; //Coeficiente de x;
	int termoC; //Coeficiente do Termo independente;

	inicio:

	cout << "Digite o valor do termo A e pressione enter: ";
	cin >> termoA;

	if (termoA==0) //Pelas regras da equação de 2° grau, A deve ser diferente de zero;
	{
		cout << "\nTermo A não pode ser nulo\n\n";
		goto inicio;
    }

	cout << "\nDigite o valor do termo B e pressione enter: ";
	cin >> termoB;

	cout << "\nDigite o valor do termo independente C e pressione enter: ";
	cin >> termoC;

	int termo_especial_1; //Comparação de sinais para formação do -b na conta do delta;
	if (termoB < 0) //O valor de B sempre sai positivo;
	{
        termo_especial_1 = + termoB;
	}
	else
	{
		termo_especial_1 = + termoB;
	}

	int delta = (termo_especial_1 * termo_especial_1) - (4 * termoA * termoC); //∆=b²-4ac

	int termo_especial_2; //Comparação de sinais para formação do -b nas contas do x1 e x2;

    if (termoB < 0) //Se B for menor que 0, -b será positivo;
    {
        termo_especial_2 = + termoB;
    }
    else //Se B for maior que 0, -b será negativo;
    {
        termo_especial_2 = - termoB;
    }

	int x1 = (termo_especial_2 + pow (delta, 2)) / (2 * termoA);
	//-b+√∆/2a (pow é a função da raiz, delta é a base e 2 é expoente);

	int x2 = (termo_especial_2 - pow (delta, 2)) / (2 * termoA);
	//-b-√∆/2a (pow é a função da raiz, delta é a base e 2 é expoente);

	cout << "\n\nDelta: " << delta;

	if (delta<0) //Pelas regras da equação de 2° grau, Delta não pode ser negativo;
	{
		cout << "\nSolucao impossivel (Delta nao pode ser negativo).\n\n";
	}
	else
	{
        cout << "\n\nX1: " << x1;
        cout << "\nX2: " << x2;

        cout << "\n\nS = {" << x1 << "," << x2 << "}\n\n";
	}

	system ("pause");
}
