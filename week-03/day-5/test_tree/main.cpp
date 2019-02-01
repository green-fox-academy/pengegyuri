#include <iostream>
#include <cmath>

int tree(int x1, int y1, float angle, int length)
{
    int x2, y2;
    x2 = x1 + int((cos(M_PI * (angle / 180)) * length));
    y2 = y1 + int((sin(M_PI * (angle / 180)) * length));
    std::cout << x1 << "," << y1 << " -- " << x2 << "," << y2 << std::endl;
    //draw(x1, y1, x2, y2);
    if (length <= 0)
    {
        return 0;
    } else {
        tree(x2, y2, angle - 15, length - 5);
        tree(x2, y2, angle + 15, length - 5);
        tree(x2, y2, angle, length - 5);
    }

}

int main() {
    tree(100, 100, 90, 40);
    return 0;
}