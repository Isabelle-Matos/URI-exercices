#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double s, ns, rg;
    int perc;

    cin >> s;
   if(s>0 && s<=400.00){perc = 15;}
   else if(s>400.00 && s<=800.00){perc = 12;}
   else if(s>800.00 && s<= 1200.00){perc = 10;}
   else if(s>1200.00 && s<=2000.00){perc = 7;}
   else {perc = 4;}

   rg = s*perc/100;
   cout <<"Novo salario: " <<fixed<<setprecision(2)<< s+rg <<endl;
   cout <<"Reajuste ganho: "<<fixed<<setprecision(2)<< rg <<endl;
   cout <<"Em percentual: " <<fixed<<setprecision(2)<< perc <<" %"<<endl;
    return 0;
}
