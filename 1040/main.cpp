#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n1, n2, n3, n4, media, mediaf, exame;
  

    cin >> n1 >> n2 >> n3 >> n4;
    media = ((n1*2)+(n2*3)+(n3*4)+n4)/10;

    cout <<"Media: "<<fixed << setprecision(1)<<media<<endl;

    if(media<5.0){cout <<"Aluno reprovado." << endl;}
    else if (media>=5.0 && media <=6.9)
    {   cout<<"Aluno em exame."<<endl;
        cin >> exame;
        cout <<"Nota do exame: " << exame << endl;
        mediaf = (exame+media)/2;
        if(mediaf >5.0){cout<<"Aluno aprovado."<<endl;}
        else{cout<<"Aluno reprovado."<<endl;}
        cout<<"Media final: " << mediaf <<endl;

    }
    else {cout <<"Aluno aprovado."<<endl;}
    return 0;
}
