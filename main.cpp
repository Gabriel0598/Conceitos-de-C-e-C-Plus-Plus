#include <iostream> //Biblioteca padrão que sempre deve ser chamada, para chamada da função cout e cin;
#include <iomanip> //Biblioteca para formatar o número de casas decimais, ponto flutuante;
#include <string> //Biblioteca para funções de manipulação de texto;
#include <climits> //Biblioteca para declarar comando INT_MAX, usado para limpar quebra de linha;
#include <cmath> //Biblioteca de funções matemáticas
#include <bits/stdc++.h> //Biblioteca universal para trazer todas as bibliotecas previamente declaradas;

using namespace std; //Organização de arquivos e bibliotecas do projeto, sempre deve ser chamado;

int main()
{
    //Aula 170
    cout << "Hello world!" << endl; //Sintaxe de saída de dados com cout;
    //std::cout << "Hello world!" << std::cout; //Esta sintaxe trás o namespace standard;
    //Para texto o C++ já tem uma biblioteca string, não é necessário criar vetor de char que nem no C;

    //-----------------------------------------------------

    //Aula 171 - Variáveis
    int idade;
    double salario, altura;
    char genero;
    string nome;

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    nome = "Maria Silva";

    cout << fixed << setprecision(2); //Comando para precisão de duas casas decimais;
    cout << "\nIDADE = " << idade << endl; //endl executa quebra de linha,  apenas imprimi texto sem quebra de linha;
    cout << "SALARIO = " << salario << endl;
    cout << "ALTURA = " << altura << endl;
    cout << "GENERO = " << genero << endl;
    cout << "NOME = " << nome << endl;

    //-----------------------------------------------------

    //Aula 173 - Saída de dados
    cout << "\nBom dia/ "; //cout operador de saída de dados (Não ocorre quebra de linha);
    cout << "Boa tarde" << endl; //endl (endlinha), executa a quebra de linha;
    cout << "Boa noite\n"; // \n também executa a quebra de linha;
    //Pode ser usado endl ou \n para quebra de linha;

    int x, y;

    x = 10;
    y = 20;
    double x1 = 2.3456;
    double x2 = 3.7709;
    double x3 = 3.201;

    cout << x << endl;
    cout << y << endl;
    cout << x1 << endl; //Apenas com esse comando ele imprime com a quantidade de casas decimais que achar necessário para expressar o valor na tela;

    cout << fixed << setprecision(4); //Comando de precisão que faz parte da biblioteca iomanip, aqui é indicada a precisão de quatro casas decimais a serem exibidas;
    cout << x2 << endl; //Devido a formatação é exibido o valor 3.7709;

    cout << fixed << setprecision(3) << x3 << endl; //Nesse caso o comando de precisão ocorre na mesma linha do valor a ser exibido;

    cout << fixed << setprecision(2); //Comando para o double exibir com duas casas decimais;
    cout << "A funcionaria " << nome << " do sexo " << genero << " ganha R$ " << salario << " e tem " << idade << " anos." << endl;

    //-------------------------------------------------------

    //Aula 174 - Processamento de dados e casting
    int a, b;
    double resultado;
    a = 5;
    b = 2;
    resultado = (double) a / b; //É necessário fazer o casting (conversão) de uma das variáveis, nesse caso o int a, para que seja exibido como ponto flutuante;
    cout << resultado << endl;

    // Em C e C++, o casting de double pra int é opcional, diferente de Java e C# que é obrigatório; Ex:

    double a1;
    int b1;
    a1 = 5.0;
    b1 = (int) a1; //Esse (int) faz o casting (conversão) de a1 do tipo double para o tipo int;
    cout << b1 << endl;

    //-------------------------------------------------------

    //Aula 175 - Entrada de dados
    double salario1, salario2;
    string nome1, nome2;
    int idade1;
    char sexo;

    cout << "\nNome da primeira pessoa: ";
    //cin >> nome1; //Só lê dados até uma QUEBRA DE LINHA OU ESPAÇO, para reverter esta situação é necessário o uso de getline;
    getline (cin, nome1); //Usar esta sintaxe para duas ou mais palavras;
    cout << "Salario da primeira pessoa: ";
    cin >> salario1; //cin registra entrada de dados;

    cout << "Nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n'); //Esse comando faz a limpeza do buffer depois da quebra de linha;
    getline (cin, nome2); //Usar esta sintaxe para duas ou mais palavras;
    cout << "Salario da segunda pessoa: ";
    cin >> salario2; //cin registra entrada de dados;

    cout << "Digite uma idade: ";
    cin >> idade1;

    cout << "Digite um sexo (F/M): ";
    cin >> sexo;

    cout << fixed << setprecision(2); //Precisão de duas casas pois trata - se de valor monetário;
    cout << "\nNome 1: " << nome1 << endl;
    cout << "Salario 1: " << salario1 << endl;
    cout << "Nome 2: " << nome2 << endl;
    cout << "Salario 2: " << salario2 << endl;
    cout << "Idade: " << idade1 << endl;
    cout << "Sexo: " << sexo << endl;

    //----------------------------------------------------

    //Aula 176 - Estruturas condicionais

    //if, else, for e while seguem o mesmo parâmetro da linguagem C;

    //----------------------------------------------------

    //Aula 177 - Arranjos

    //Vetores
    int N, i;

    cout << "\nQuantos numeros voce vai digitar? ";
    cin >> N;

    double vet[N]; //Criação de vetor com N posicões;

    for (i = 0; i < N; i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl << "NUMEROS DIGITADOS: " << endl;
    cout << fixed << setprecision(1);
    for (i = 0; i < N; i++)
    {
        cout << vet[i] << endl;
    }

    //Matrizes
    int M2, N2, i2, j2;

    // i2 armazena os números a serem preenchidos nas colunas;
    // j2 armazena os números a serem preenchidos nas linhas;

    cout << "\nQuantas linhas vai ter a matriz? ";
    cin >> M2; //Esta variável armazena o número de linhas;
    cout << "Quantas colunas vai ter a matriz? ";
    cin >> N2; //Esta variável armazena o número de colunas;
    //Usuário portanto informa qual vai ser o alcance desse arranjo bidimensional;

    int mat[M2][N2]; //Sintaxe para criação de matriz, coluna no primeiro espaço e linha no segundo espaço (Padrão para criação de arranjo bidimensional);
    // Sintaxe: tipo/ nome da matriz (mat nesse caso)/ [linhas][colunas];

    for (i2 = 0; i2 < M2; i2++) //Paramêtro for para preencher os números (i2) dentro das linhas M2;
    //Ou seja, enquanto o número de valores (i2) for menor que o número de linhas (M2), ele vai incrementando de um em um (começando a partir do zero);
    {
        for (j2 = 0; j2 < N2; j2++)
        //Ou seja, enquanto o número de valores (j2) for menor que o número de colunas (N2), ele vai incrementando de um em um (começando a partir do zero);
        {
            cout << "Elemento [" << i2 << "," << j2 << "]: "; //Esse parâmetro exibe os números na ordem que forem incrementados;
            cin >> mat[i2][j2]; //Números que forem digitados serão inclusos nas posições de linha e coluna;
        }
    }

    cout << endl << "MATRIZ DIGITADA: " << endl;
    for (i2 = 0; i2 < M2; i2++) //Apresentação da matriz que foi digitada, seguindo a lógica de estrutura de incluir números enquanto forem menor que as linhas;
    {
        for (j2 = 0; j2 < N2; j2++) //Após apresentar os números implementados nas colunas;
        {
            cout << mat[i2][j2] << " "; //Exibição da matriz na ordem linhas(i2) e colunas(j2);
        }
        cout << endl; //Quebra de linha para limpeza de buffer;
    }

    //-------------------------------------------------------

    //Aula 178 - Problema retângulo
    double base2, altura2, area2, perimetro2, diagonal2;

    cout << "\nBase do retangulo: ";
    cin >> base2;
    cout << "Altura do retangulo: ";
    cin >> altura2;

    area2 = base2 * altura2;
    perimetro2 = 2 * (base2 + altura2);
    //diagonal = sqrt(base * base + altura * altura); //É possível usar base*base para potenciar;
    //Função sqrt faz a raiz quadrada da expressão entre parênteses;
    diagonal2 = sqrt(pow(base2, 2.0) + pow(altura2, 2.0)); //Função pow executa exponenciação da expressão indicada (Sintaxe: pow(variavel, expoente));

    cout << fixed << setprecision(4);
    cout << "AREA = " << area2 << endl;
    cout << "PERIMETRO = " << perimetro2 << endl;
    cout << "DIAGONAL = " << diagonal2 << endl << "\n";

    //------------------------------------------------------

    //Aula 179 - Problemas idades
    string nome3, nome4;
    int idade3, idade4;
    double media2;

    cin.ignore(INT_MAX, '\n');

    cout << "Dados da primeira pessoa: " << endl;
    cout << "Nome: ";
    getline(cin, nome3);
    cout << "Idade: ";
    cin >> idade3;

    cout << "Digite dados da segunda pessoa: " << endl;
    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n'); //Executa limpeza de buffer;
    getline(cin, nome4);
    cout << "Idade: ";
    cin >> idade4;

    media2 = (double)(idade3 + idade4) / 2.0; //Usar casting E/ OU numero com casa decimal converte a expressão como um todo para ponto flutuante;

    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome3 << " e " << nome4 << " e de " << media2 << " anos." << endl;

    //------------------------------------------------------

    //Aula 180 - Problema menor de três
    int a2, b2, c2, menor;

    cout << "\nPrimeiro valor: ";
    cin >> a2;
    cout << "Segundo valor: ";
    cin >> b2;
    cout << "Terceiro valor: ";
    cin >> c2;

    if(a2 < b2 && a2 < c2)
    {
        menor = a2;
    }
    else if(b2 < c2)
    {
        menor = b2;
    }
    else
    {
        menor = c2;
    }

    cout << "MENOR = " << menor << endl;

    //----------------------------------------------------

    //Aula 181 - Problema crescente
    int x4, y4;

    cout << "\nDigite dois numeros: " << endl;
    cin >> x4 >> y4;

    while(x4 != y4)
    {
        if (x4 > y4)
        {
            cout << "DECRESCENTE!" << endl;
        }
        else
        {
            cout << "CRESCENTE!" << endl;
        }

        cout<< "Digite outros dois numeros:" << endl;
        cin >> x4 >> y4;
    }

    //------------------------------------------------------

    //Aula 182 - Problema soma impares
    int x5, y5, troca, soma;

    cout << "\nDigite dois numeros: " << endl;
    cin >> x5 >> y5;

    if(x5 > y5) //Parâmetro para troca de valores;
    {
        troca = x5;
        x5 = y5;
        y5 = troca;
    }

    soma = 0; //Para soma acumulada, a variável soma começa com zero sempre;
    for(int i = x5+1; i < y5; i++)
    {
        if(i % 2 != 0)
        {
            soma = soma + i;
        }
    }

    cout << "SOMA DOS IMPARES = " << soma << endl;

    //Aula 183 - Problema alturas
    int N3, cont;
    double soma2, media3, percentual;

    cout << "\nQuantas pessoas serao digitadas? ";
    cin >> N3;

    string nomes[N3]; //Vetor chamado nomes para armazená - los em sequência;
    //Vetores sempre começam na posição zero;
    int idades[N3]; //Vetor para armazenar idades digitadas;
    double alturas[N3]; //Vetor para armazenar alturas digitadas;

    for (int i = 0; i < N3; i++) //For padrão para percorrer todas as posições do vetor;
    {
        cout << "Dados da " << i+1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n'); //Para limpeza de buffer;
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Alturas: ";
        cin >> alturas[i];
    }

    soma2 = 0; //Soma acumulada começando com zero;
    for(int i = 0; i < N3; i++)
    {
        soma2 = soma2 + alturas[i];
    }
    media3 = soma2 / N3;

    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << media3 << endl;

    cont = 0; //Soma acumulada;
    for(int i = 0; i < N3; i++)
    {
        if(idades[i] < 16)
        {
            cont++;
        }
    }
    percentual = (double)cont * 100.0 / N3; //Casting realizado através de double E/ OU .0;

    cout << fixed << setprecision(1); //Precisão de uma casa decimal;
    cout << "Pessoas com menos de 16 anos: " << percentual << "%" << endl;

    for(int i = 0; i < N3; i++)
    {
        if(idades[i] < 16)
        {
            cout << nomes[i] << endl;
        }
    }

    //------------------------------------------------------

    //Aula 184 - Problema diagonal negativos
    int N4, cont2;
    cout << "\nQual a ordem da matriz? ";
    cin >> N4;

    int mat2 [N4][N4]; //Criação de matriz de N posições;

    for(int i = 0; i < N4; i++)
    {
        for(int j = 0; j < N4; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat2[i][j];
        }
    }

    cout << "DIAGONAL PRINCIPAL:" << endl;

    for(int i = 0; i < N4; i++)
    {
        cout << mat2[i][i] << " ";
    }

    cout << endl;

    cont2 = 0;
    for(int i = 0; i < N4; i++)
    {
        for(int j = 0; j < N4; j++)
        {
            if(mat2[i][j] < 0)
            {
                cont2++; //Cont2 vai ser incrementada;
            }
        }
    }

    cout << "QUANTIDADE DE NEGATIVOS = " << cont2 << endl;

    return 0;
}
