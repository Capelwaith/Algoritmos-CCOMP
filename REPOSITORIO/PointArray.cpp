#include <iostream>

using namespace std;

class point
{
private:
    double cx, cy;
public:
    point(){cx=0;cy=0;}

    point(double x, double y){cx=x;cy=y;}

    point(const point &p);

    int getx()
    {
        return cx;
    }
    int gety()
    {
        return cy;
    }
    void setx(int x_1)
    {
        cx=x_1;
    }
    void sety(int y_1)
    {
        cy=y_1;
    }
    void print_point()
    {
        cout << "(" << cx << "," << cy << ")";
    }
    void modify_point(double a, double b)
    {
        cx+=a;
        cy+=b;
    }
};
point::point(const point &p) : cx(p.cx), cy(p.cy) {}

class PointArray
{
public:
    PointArray(const point points[], const int tam)
    {
        point lista[tam];
        int i;
        for(i=0; i<tam; i++)
        {
            lista[i]=points[i];
        }


    }
    PointArray(const PointArray &pv);
    void Push_Back(const point &p)
    {

    }
    PointArray::PointArray(const PointArray &pv):
    void insertar(const int position, const point &p)
    {

    }
    void eliminar(const int posicion)
    {

    }
    void getSize()
    {

    }
    void Clear()
    {

    }

};
int main()
{
    /*point p1(9,5);
    p1.print_point();
    p1.setx(4);
    p1.sety(3);
    p1.print_point();
    p1.modify_point(2,7);
    p1.print_point();
    point p2(p1);
    p2.print_point();*/
    point puntos[3];
    puntos[0]=point(1,2);
    puntos[1]=point(2,3);
    puntos[2]=point(3,4);
    PointArray(puntos, 3);



}
