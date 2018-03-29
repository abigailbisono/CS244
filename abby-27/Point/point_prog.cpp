#include <iostream>
#include <stdlib.h>
#include "point.h"
using namespace std;

int main(){
 point p1;
 point p2;

 p1.initialize(-1.0, 0.8);
 cout <<  p1.get_x() << "  " << p1.get_y()  << endl;
 p2.initialize(p1.get_x(), p1.get_y());
 cout << p2.get_x() << "  " << p2.get_y() << endl;
 p2.shift(1.3, -1.4);
 cout << p2.get_x() <<  "  "  << p2.get_y() << endl;

return 0;
}
