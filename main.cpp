#include <iostream>
#include <cstdlib>
#include <vector>
#include <stack>
#include <queue>
#define tam 5

using namespace std;

int main()
{
//VECTOR
    vector<int> v;
    for(int i=0; i<tam; i++)
        v.push_back(i);
    vector<int>::iterator x;
    x= v.begin();
    x= v.insert(x, 15);
    v.push_back(14);
    cout << "Tama~o: " << v.size() << '\n';
    cout << "Imprimir v:" << endl;
    for( x = v.begin(); x != v.end(); x++ )
        cout << *x << endl;

    cout << "============" << endl;

    vector<int> v2(tam);
    for (int i=0; i<v2.size(); i++)
        v2.at(i)=i;
    vector<int>::iterator y;
    y= v2.begin()+2;
    v2.emplace(y, 23);
    cout << "Imprimir v2:" << endl;
    for( y = v2.begin(); y != v2.end(); y++ )
        cout << *y << endl;

    cout << "============" << endl;

    vector<int> v3;
    vector<int>::iterator z;
    int var;
    int sum=0;
    for(int i=0; i<tam; i++)
        v3.push_back(i);
    cout << "Imprimir v3:" << endl;
    for( z = v3.begin(); z != v3.end(); z++ )
    {
        cout << *z << endl;
    }
    for(int i=0; i<tam; i++)
    {
        var=v3.back();
        sum+=var;
        v3.pop_back();
    }
    cout << "Suma de los elementos:" << endl;
    cout << sum << endl;
    cout << "La lista ya esta vacia :D" << endl;

    cout << "============" << endl;
    cout << "============" << endl;

//STACK
    stack<char> s1;
    for (char x = 'A'; x <= 'G'; x++)
        s1.emplace(x);
    cout << "Imprimir s1" << endl;
    while (!s1.empty())
    {
        cout << s1.top() << '\n';
        s1.pop();
    }

    cout << "============" << endl;

    stack<int> s2;
    cout << "Tama~o del stack al inicializarlo vacio: " << s2.size() << endl;
    for (int i=0; i<tam+3; ++i)
        s2.push(i);
    cout << "Tama~o del stack despues del .push(): " << s2.size() << endl;
    s2.pop();
    cout << "Tama~o del stack despues del .pop(): " << s2.size() << endl;


    cout << "============" << endl;
    cout << "============" << endl;
//QUEUE
    queue<double> q1;
    for (int i=tam; i>0; i--)
        q1.push(i);
    double resta;
    resta= q1.front()-q1.back();
    cout << "Resta del primer elemento con el ultimo" << endl;
    cout << resta << endl;

    cout << "============" << endl;

    queue<int> q2, q3;
    q2.push(10);
    q2.push(30);
    q2.push(50);
    q2.push(70);
    //q2 tiene 4 elementos
    q3.push(20);
    q3.push(40);
    //q3 tiene 2 elementos
    q2.swap(q3);
    cout << "Elementos q2: " << q2.size() << '\n';
    cout << "Elementos q3: " << q3.size() << '\n';






}
