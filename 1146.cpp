#include <iostream>

int main(){

    int n;

    while (n!=0)
    {
        std::cin >> n;

        for(int i=1; i<=n; i++){
            std::cout << i;
            std::cout << ((i == n) ? "\n" : " ");
        }
        
     
    }
     
    return 0;
}