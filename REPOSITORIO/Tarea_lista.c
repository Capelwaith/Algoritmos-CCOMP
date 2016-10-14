#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

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

insertar_nodo_inicio(Elemento *inicio, int valor)
{
    Elemento *nuevo;
    nuevo=malloc(sizeof(Elemento));
    nuevo->dato=valor;
    nuevo->Siguiente= inicio;
    inicio=nuevo;
}
insertar_nodo_medio(Elemento *inicio, int valor, int tamaño)
{
    Elemento *act;
    Elemento *p= inicio;
    while(true)
    {
        p=p->Siguiente;
        if(p==tamaño/2)
        {
            Elemento *nuevo;
            nuevo=malloc(sizeof(Elemento));
            nuevo->dato=valor_2;
            nuevo->Siguiente=p;
            act=nuevo->dato;
            p->Siguiente=act;
            p=act;
            break;
        }
    }
}
insertar_en_orden(Elemento *inicio, int valor_2)
{
    Elemento *act;
    Elemento *p= inicio;
    while(true)
    {
        p=p->Siguiente;
        if(p>=valor_2)
        {
            Elemento *nuevo;
            nuevo=malloc(sizeof(Elemento));
            nuevo->dato=valor_2;
            nuevo->Siguiente=p;
            act=nuevo->dato;
            p->Siguiente=act;
            p=act;
            break;
        }
    }


}
main()
{
    Elemento *inicio;
    inicio= malloc(sizeof(Elemento));
    inicio->dato=1;
    crear_lista(inicio, 5);
    imprimir_lista(inicio);
    insertar_nodo_inicio(inicio, 9);
    imprimir_lista(inicio);
    insertar_en_orden(inicio, 3);
    imprimir_lista(inicio);
}
