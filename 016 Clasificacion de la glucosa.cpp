#include <iostream>
using namespace std;

int main()
{
    float glucosa;
    int categoria;

    cout<<"Ingrese el nivel de glucosa en sangre (mg/dL): ";
    cin>>glucosa;

    if(glucosa<70)
    {
        categoria=1;
    }
    else if(glucosa<100)
    {
        categoria=2;
    }
    else if(glucosa<126)
    {
        categoria=3;
    }
    else
    {
        categoria=4;
    }

    switch(categoria)
    {
        case 1:
            cout<<"\nResultado: HIPOGLUCEMIA"<<endl;
            break;
        case 2:
            cout<<"\nResultado: GLUCOSA NORMAL"<<endl;
            break;
        case 3:
            cout<<"\nResultado: GLUCOSA ELEVADA / PREDIABETES"<<endl;
            break;
        case 4:
            cout<<"\nResultado: POSIBLE DIABETES"<<endl;
            break;
        default:
            cout<<"Categoria no valida."<<endl;
    }

    return 0;
}