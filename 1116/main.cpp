#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int i;
  int n;
  double x, y, resp;
  cin >> n;

  for(i=0; i<n; i++){
    cin >> x >> y;
    resp = x/y;

    if(y == 0)
        cout << "divisao impossivel" << endl;
    else
        cout <<fixed<<setprecision(1)<< resp <<endl;
  }
    return 0;
}
