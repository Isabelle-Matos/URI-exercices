#include <iostream>
#include <iomanip>

int main(){

    float x, y, media;
    std:: cin >> x >> y;

    media = (x*3.5+y*7.5)/(11);

    std::cout << std::fixed << std::setprecision(5) << "MEDIA = " << media <<std::endl;

    return 0;


}