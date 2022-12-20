#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double n, t, s, salario;

    cin >> n >> t >> s;
    
    cout << "NUMBER = " << n << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << t*s << endl;
    
 
    return 0;
}