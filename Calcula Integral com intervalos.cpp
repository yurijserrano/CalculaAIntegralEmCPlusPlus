
#include <iostream>
#include <cmath>
using namespace std;


double fx4(double d){return pow(d,4);}
double somatoria(double ah, double hh, double nn){
       double soma=0;
       double xi=0;
       for(int i=1; i<nn;i++){
               xi=ah+i*hh;
               soma+=fx4(xi);
               }
       return soma;
}

main()
{
    int n;
    double a=0.5, b=1.0, h;
        cout<<"Digite um valor inteiro para N: ";
        cin>>n;
        h=((b-a)/n);
        double resultado=(h/2)*(fx4(a)+2*somatoria(a,h,n)+fx4(b));
        cout<<endl<<"A integral de x^4 com "<<n<<" intervalos internos vale "<<resultado<<endl;                
        fflush(stdin);
        getchar( );
        cout<<"Digite Esc para sair ou qualquer outra tecla para continuar.";
}
