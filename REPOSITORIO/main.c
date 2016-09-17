#include <stdio.h>
#include <string.h>
#include <math.h>
int lower()
{
    char c, minuscula;
    while(c<'Z' && c>'A');
        printf("\nInserte la letra en mayuscula:\n");
        scanf("%c", &c);
        minuscula=c+' ';
        printf("%c\n", minuscula);
        printf("\n\n");

}
int strindex(char palabra[], int t, int s)
{
    /*Posicion desde punto de vista del programador*/
    int posicion;
    posicion=t+s;
    if(palabra[t+s]=='\0' || posicion>strlen(palabra))
    {
        printf("La posicion no se encuentra, se retornara -1\n");
        return -1;
    }
    else
        printf("El caracter es %c y la posicion es %d\n",palabra[t+s], posicion);


}
int conversor(char num[])
{

	int i,x, len, pot_1, pot_2;
	float dec= 0.0, temp=0.0, temp_2;
	len = strlen(num);
	for(i=0; i<len; i++)
    {
        if(num[i]=='.')
        {
            pot_1=i+1;
            for(x=i+1; x<len; x++)
            {
                temp= temp*10.0 + ( num[x] - '0' );
            }
            pot_2=len-pot_1;
            temp_2=temp/pow(10,pot_2);
            dec+=temp_2;
            return dec;

        }


        else
            dec = dec * 10.0 + ( num[i] - '0' );

	}

}
float elevado(char expo[])
{
    int i;
    float ex=0;
    if(expo[0]!='e')
    {
        printf("Exponente debe llevar una e");
        return 0;
    }
    else
    {
        for (i=2;i<strlen(expo);++i)
        {
            ex= ex*10.0 + ( expo[i] - '0' );
        }
        ex= (pow(10, ex));
        return ex;
    }


}
conversion(char num[], char expo[])
{
    float x, y, resultado;
    int h;

    if(expo[1]=='-')
    {
        x=conversor(num);
        y=elevado(expo);
        resultado=x/y;
        printf("%f", resultado);
        return resultado;
    }
    else
    {
        float x, y, resultado;
        x=conversor(num);
        y=elevado(expo);
        resultado=x*y;
        printf("%f \n", resultado);
        return resultado;
    }



}

void invertir(char palabra[])
{
    /*No pude hacerlo recursivo*/
    int lenght;
    int x, ult_pos;
    printf("%s\n", palabra);
    for(lenght=0; palabra[lenght]!='\0'; lenght++);
    ult_pos=lenght-1;
    for (x=ult_pos; x>=0; x--)
        printf("%c", palabra[x]);





}
main(void)
{
    conversion("123.45", "e-6");
    lower();
    strindex("Hola", 2, 1);
    strindex("Hola", 0, 2);
    strindex("Hola", 2, 64);
    invertir("ENCRIPTEMOS ARCHIVOS");
}
