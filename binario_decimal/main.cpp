#include <iostream>

using namespace std;

int elevado(int x, int y)
{
    if (y==0)
    {
        return 1;
    }
    else
    {
        return (x * elevado(x,y-1));
    }
}

int main()
{
    cout <<"(WHILE)coloque un numero para pasarlo a binario:  ";
    int numero;
    cin >> numero;
    int nbinario = 0;
    int exponente=0;
    while( numero > 0 )
    {
        int digito=numero%2;
        numero=numero/2;
        nbinario = nbinario + digito*elevado(10,exponente);
        exponente = exponente+1;
    }
    cout << nbinario << endl;


    cout <<"(FOR)coloque un numero para pasarlo a binario:  ";
    cin >> numero;
    nbinario = 0;
    for (exponente=0; numero > 0; exponente = exponente +1)
    {
        int digito=numero%2;
        numero=numero/2;
        nbinario = nbinario + digito*elevado(10,exponente);
    }
    cout<<nbinario<<endl;

    cout <<"(WHILE)coloque un numero binario para pasarlo a base 10:  ";
    int binario;
    cin >> binario;
    int nnumero=0;
    int expo=0;
    while(binario!=0)
    {
        if (binario%2!=0)
        {
            nnumero = nnumero + elevado(2,expo);
        }
        expo=expo+1;
        binario= binario/10;
    }
    cout << nnumero << endl;


    cout <<"(FOR)coloque un numero binario para pasarlo a base 10:  ";

    cin >> binario;
    nnumero=0;
    for (expo=0; binario!=0; expo=expo+1)
    {
        if (binario%2!=0)
        {
            nnumero = nnumero + elevado(2,expo);
        }
        binario= binario/10;
    }
    cout << nnumero << endl;

    return 0;
}

