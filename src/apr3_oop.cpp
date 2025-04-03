
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Triangle::SetBase(double userBase) {
   base = userBase;
}

void Triangle::SetHeight(double userHeight) {
   height = userHeight;
}

double Triangle::GetArea() const {
   return 0.5 * base * height;
}

void Triangle::PrintInfo() const {
   cout << fixed << setprecision(2);
   cout << "Base: " << base << endl;
   cout << "Height: " << height << endl;
   cout << "Area: " << GetArea() << endl;
}


using namespace std;

int main() {
   Triangle triangle1;
   Triangle triangle2;

   // TODO: Read and set base and height for triangle1 (use SetBase() and SetHeight())
      
   // TODO: Read and set base and height for triangle2 (use SetBase() and SetHeight())
       
   cout << "Triangle with smaller area:" << endl;
   
   // TODO: Determine smaller triangle (use GetArea())  
   //       and output smaller triangle's info (use PrintInfo())
   
   return 0;
}




#ifndef TRIANGLEH
#define TRIANGLEH

class Triangle {
   private:
      double base;
      double height;
   
   public:
      void SetBase(double userBase);
      void SetHeight(double userHeight);
      double GetArea() const;
      void PrintInfo() const;
};

#endif