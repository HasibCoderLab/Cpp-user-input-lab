// ================================================
//               Language: C++ / Cpp
//               Topic   : [User-Input]
//               Example : 👉👉 [6]
// ================================================
#include <iostream>
using namespace std;
int main(){
    float x;
    int y;
    cout << "Enter 1st Number : ";
    cin>> x;
    cout<<"Enter 2nd Number : ";
    cin>> y;
    cout<<"Sum is " << x/y <<endl;
}

// ====================   Best Way ===============
#include <iostream>
using namespace std;
int main(){
    float x;
    float y;
  cout<< "Enter 1st Number : ";
  cin>> x;
  cout <<"Enter 2nd Number : ";
  cin>> y;
  if(y==0){
    cout<<"Error: Division by zero is not allowed!" << endl;
  }else{
    cout << "Result of division: " << x / y << endl;
  }
    return 0;
}