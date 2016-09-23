#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
int concatenar(char *palabra, char *palabra_2)
{
    char cadena[15];
    int pos=0;
    int n=1;
    while(n<=strlen(palabra)+strlen(palabra_2))
    {
        n++;
        cadena[pos]=*palabra;
        palabra++;
        pos++;
        if(*palabra=='\0')
        {
            palabra=&*palabra_2;
        }

    }
    printf("%s", cadena);
    return 0;
}
strend(char *palabra, char *palabra_2)
{
    while(true)
    {
        palabra++;
        if(*palabra==*palabra_2)
        {
            if(*palabra=='\0' && *palabra_2=='\0')
                return 1;
            else
                palabra_2++;
        }
        else if(*palabra=='\0')
            return 0;
    }
}

int main()
{
    concatenar("ola"," k ase");
    strend("hola", "la");
    strend("Hola", "NO");
}
