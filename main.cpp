#include <iostream>
#include"lib.h"

using namespace std;

int main()
{
    cerc c;
    patrat p;
    dreptunghi d;
    c.SetCerc(1,2,3);
    p.SetPatrat(0,2,2,0,2);
    d.SetDreptunghi(0,4,6,0,4,6);
    cout<<"arie cerc "<<c.ariec()<<endl;
    cout<<"arie dreptunghi "<<d.aried()<<endl;
    cout<<"arie patrat "<<p.ariep()<<endl;
    cout<<"perimetru cerc "<<c.perimetruc()<<endl;
    cout<<"perimetru dreptunghi "<<d.perimetrud()<<endl;
    cout<<"perimetru patrat "<<p.perimetrup()<<endl;
    return 0;
}
