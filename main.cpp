#include <iostream>
using namespace std;

int main()
{
  float a ,b ,c;
   
    


cin >> a >> b >> c;
  
  float area;
  area=a*a;
  cout<<" l'area del quadrato: "<<area<<endl;
  
  
  area=a*b;
  cout<< "l'area del rettangolo:"<<area<<endl;
  
  
  area=(a*b)/2;
  cout<<"l'area del triangolo:"<<area<<endl;
  
 
  area=((a+b)*c)/2;
  cout<< "l'area del trapezio:"<<area<<endl;
  
  return 0;
}
