/*第一行是數列的數目t（0 <= t <= 20）。 以下每行均包含四個整數，表示數列的前四項。 約定數列的前五項均為不大於的自然數，等比數列的比值也是自然數。
input:
2
1 2 3 4
1 2 4 8*/

// 迴圈
// 陣列

#include <iostream>

int main() {
    int t, a, b, c, d, e, x, r;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> a >> b >> c >> d;

        x = b - a;
        r = b / a;

        if ((b - a == c - b) && (c - b == d - c)) {
            std::cout << a << " " << b << " " << c << " " << d << " " << d + x << "\n";
        } else if ((b / a == c / b) && (c / b == d / c)) {
            std::cout << a << " " << b << " " << c << " " << d << " " << d * r << "\n";
        }
    }
}