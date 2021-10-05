#include <iostream>
using namespace std;

void Euclides_extendido(int a, int b, int *d, int *x, int *y){
  int x1,y1;//variables auxiliares para el desarrollo del algoritmo

  if(a%b==0){//Caso base o final de Euclides normal
    *d=b;//Sabemos cual es el gcd(a,b)
    *x=0;//Valores para el caso base
    *y=1;
  }else{//En caso aun no se encuentre un b que cumpla la condicion (un gcd)
    Euclides_extendido(b,a%b,d,x,y);//Aplicamos recursividad con la teoria vista en clase
    x1=*x;y1=*y;*x=y1;//Los valores x1 y y1 los guardamos para el calculo de y mientras el valor de x pasa a ser el almacenado en y1
    *y=x1-(a/b)*y1;//Calculamos y con la formula vista en clase donde (a/b) es q y y1
  }
}

int main() {
  int a,b,d,x,y;
  
  cout<<"Bienvenidos al simulador de Euclides_extendido"<<endl;

  cout<<"Ingrese la variable a de gcd(a,b): ";cin>>a;
  cout<<"Ingrese la variable b de gcd(a,b): ";cin>>b;
  cout<<endl;

  Euclides_extendido(a,b,&d,&x,&y);

  cout<<"gcd("<<a<<","<<b<<"): "<<d<<", x: "<<x<<", y: "<<y;


}



