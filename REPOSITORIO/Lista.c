#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ElementoLista
{
    int dato;
    struct ElementoLista *Siguiente;
}Elemento;


Elemento crear_lista(Elemento *inicio, int n)
{
    int i;
    Elemento *ant, *act;
    ant= inicio;
    for(i=2; i<=n; i++)
    {

        act=malloc(sizeof(Elemento));
        act->dato=i;
        ant->Siguiente=act;
        ant=act;
    }
    ant->Siguiente=NULL;
}
imprimir_lista(Elemento *inicio)
{
    Elemento *t;
    t = inicio;
    while(t != NULL)
    {
        printf("%d", t->dato);
        t=t->Siguiente;
    }
    printf("\n");
}
eliminar_nodo(Elemento *inicio, int clave)
{
    Elemento *pre, *cur;
    pre=inicio;
    cur=inicio->Siguiente;
    while(cur != NULL )
    {
        if(cur->dato==clave)
        {
            pre->Siguiente=cur->Siguiente;
            free(cur);
            break;
        }
        pre=cur;
        cur=cur->Siguiente;
    }
}
main()
{
    Elemento *inicio;
    inicio= malloc(sizeof(Elemento));
    inicio->dato=1;
    crear_lista(inicio, 9);
    imprimir_lista(inicio);
    eliminar_nodo(inicio,4);
    imprimir_lista(inicio);
}
