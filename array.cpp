#include <iostream>

using namespace std;

class point
{
private:
    double cx, cy;
public:
    point(){};
    point(double x, double y){cx=x; cy=y;};
};


class PointArray
{
private:
    point *pt;
    int size_2;
    void resize_2(int dim_2)
    {
        point *p;
        p= new point[dim_2];
        for(int i=0; i<dim_2; i++)
            p[i]=pt[i];
        delete[] pt;
        pt=p;
        this->size_2=dim_2;

    }
public:
    PointArray(const point points[], const int tam)
    {
        this->size_2=tam;
        for(int i=0; i<tam; i++)
            pt[i]=points[i];
    }
    PointArray(const PointArray &pv);

    void Push_Back(const point &p)
    {
        this->resize_2(size_2+1);
        pt[size_2-1]=p;

    }
    void insertar(const int position, const point &p )
    {
        this->resize_2(size_2+1);
        int i;
        for(i=size_2; i>position; i--)
            pt[i]=pt[--i];
        pt[position]=p;


    }
    void eliminar(const int posicion)
    {
        int i=posicion+1;
        for(i;i<size_2; i++)
            pt[i-1]=pt[i];
        resize_2(size_2-1);

    }
    int getSize()
    {
        return this->size_2;
    }
    void Clear()
    {
        delete[] pt;
    }

};

int main()
{
    point p1;





}
