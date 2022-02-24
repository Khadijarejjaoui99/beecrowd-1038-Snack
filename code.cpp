//  beecrowd 1038 Snack
#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
    int X , Y;
    cin >> X >> Y;
    switch(X){
      case 1:
      cout << "Total: R$ " << fixed << setprecision(2) << Y * 4.0<< endl;
      break;
      case 2:
      cout << "Total: R$ " << fixed << setprecision(2) << Y * 4.5<< endl;
      break;
      case 3:
      cout << "Total: R$ " << fixed << setprecision(2) << Y* 5.0<< endl;
      break;
      case 4:
      cout << "Total: R$ " << fixed << setprecision(2) << Y * 2.0<< endl;
      break;
      case 5:
      cout << "Total: R$ " << fixed << setprecision(2) << Y * 1.5<< endl;
      break;
      default:
      cout << "Please enter a number between 1 and 5" <<endl;
      break;
    }
    system("pause");
    return 0;
}