#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int quantidade,n,i;
    float soma,count;
    
    cin >> quantidade;

    while(quantidade > 0){
            cin >> n;
            soma = 0;
            count = 0;
            
            int numeros[n];
            
            for(i = 0; i < n; i++){
                    cin>> numeros[i];
                    soma+=numeros[i];
            }
            soma /= n;
            for(i = 0; i < n; i++){
                    if(numeros[i] > soma) count++;
            }
            
            cout<< fixed << setprecision(3) << count/n*100 << "%" << endl;
            quantidade--;
    }
    return 0;
}