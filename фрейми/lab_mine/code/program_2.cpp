// Exercise_2_lab_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   cout << "MALYAVA ANDRIY IPZ-13";
   cout << endl;
   double a_value, b_value, c_value, d_value;

   // Require input of 4 values!
   cout << "Enter a value: ";
   cin >> a_value;
   cout << endl;

   cout << "Enter b value: ";
   cin >> b_value;
   cout << endl;

   cout << "Enter c value: ";
   cin >> c_value;
   cout << endl;

   cout << "Enter d value: ";
   cin >> d_value;
   cout << endl;

   // One line function
   // X = ((1-A) * C * e^A) / ((1 - B) * cos(D) )

   float result = ((1 - a_value) * c_value * exp(a_value)) / ((1 - b_value) * cos(d_value));
   cout << "Result: " << result;
   cout << endl;
   //Prevent from instant closing!
   system("pause");
}

