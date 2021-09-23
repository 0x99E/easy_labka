// Ex_3_lab_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "ANDRIY MALYAVA IPZ-13" << endl;
    cout << "[(distance = initial_speed) * time + ((acceleration * pow(time, 2)) / 2)]" << endl;
    cout << endl;

    double initial_speed, acceleration, time, distance;

    cout << "Input initial_speed (meters per second): ";
    cin >> initial_speed;
    cout << endl;

    cout << "Input acceleration(meters squared per second): ";
    cin >> acceleration;
    cout << endl;

    cout << "Input time (seconds) : ";
    cin >> time;
    cout << endl;

    distance = (initial_speed * time) + ((acceleration * pow(time, 2) ) / 2);
    cout << "Distance: " << distance << endl;

    // Prevent program from closing!
    system("pause");

    
}