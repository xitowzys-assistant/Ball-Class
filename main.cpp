#include <iostream>
#include "Ball.h"

int main() {
    using namespace std;
    
    double radius;              // Радиус
    double limit;               // Предел

    cout << "Введите радиус: ";
    cin >> radius;

    if (radius < 0) {
        cout << "Радиус не может быть отрицательным";
        return -1;
    }
    
    Ball ball(radius);

    cout << "Введите предел. Введите 0 если нету: ";
    cin >> limit;
    
    
    if(limit > 0)
        ball.set_limit(limit);
    
    cout << "----------------------------------\n";
    cout << "Объем:" << ball.get_volume() << "\n";
    cout << "Масса:" << ball.get_weight() << "\n";
    cout << "Плотность:" << ball.get_density() << "\n";
    
    if(ball.is_limit())
    {
        cout << "----------------------------------\n";
        cout << "Внимание!!! Надо уменьшить радиус шара на: " << ball.show_limit() << "\n";
    }
    
    return 0;
}
