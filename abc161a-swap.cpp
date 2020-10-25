#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x,y,z;
  int a,b,c,d;
  cin >> x >> y >> z;
  
  //AとBchange
  a = x;
  b = y;
  x = b;
  y = a;
  
  //AとCchange
  c = x;
  d = z;
  x = d;
  z = c;
  
  cout << x <<" "<< y << " "<< z <<endl;
}
