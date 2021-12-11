#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    cout<<"Rownanie liniowe"<<endl;


    //pobranie danych
    float a,b;
    cout<<"a= ";
    cin>>a;
    cout<<endl<<"b= ";
    cin>>b;

    //sprawdzenie typu rownania

    if(a==b && b==0)
        cout<<endl<<"Rownanie tozsamosciowe, nieskonczenie wiele rozwiazan!"<<endl;

    else if(a==0 && b!=0)
        cout<<endl<<"Rownanie sprzeczne, brak rozwiazan!"<<endl;

    else{
        float x;
        if(a!=0 && b!=0)
            x=-b/a;
        cout<<"x ="<<x;

    }





}
