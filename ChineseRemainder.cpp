#include <math.h>
#include <iostream>

using namespace std;



class XModPair{
public:
  int x;
  int mod;
};

void Map_Input(){
}


int main(){
  int x1;
  int mod1;
  XModPair a;
  
  cout << "input variable 1: \n";
  cin >> x1;
  cout<< "input remainder for variable 1 \n";  
  cin >> mod1;
  a.x = x1;
  a.mod = mod1;
  cout << a.x << " " << a.mod << "\n";  
}  

