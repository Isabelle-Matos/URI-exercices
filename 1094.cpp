#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, x;
    int n;
    char t;
    double total = 0, totc = 0, totr = 0, tots = 0;
    cin >> n;

    for(i=0; i<n; i++){
        cin >> x >> t;
        total+= x;

        if(t == 'C'){totc += x;}
        else if(t == 'R'){totr += x;}
        else{tots += x;}

    }
    cout<<"Total: " << total << " cobaias" <<endl;
    cout <<"Total de coelhos: " <<totc<<endl;
    cout<<"Total de ratos: "<< totr <<endl;
    cout<<"Total de sapos: "<< tots <<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<totc*100/total <<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<totr*100/total <<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<tots*100/total <<" %"<<endl;
    return 0;
}
