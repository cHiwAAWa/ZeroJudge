/*求一元二次方程式 ax2+bx+c=0 的根,每組輸入共一行，內含三個整數 a, b, c 以空白隔開。

Sample Input #1

1 3 -10

Sample Output #1

Two different roots x1=2 , x2=-5

Sample Input #2

1 0 0

Sample Output #2

Two same roots x=0

Sample Input #3

1 1 1

Sample Output #3

No real root

*/

#include <iostream>
#include <cmath> // math

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int d = (b * b) - (4 * a * c);

    if (d > 0) {
        double x1 = ((-b) + std::sqrt(d)) / (2.0 * a); // sqrt() 開根號
        double x2 = ((-b) - std::sqrt(d)) / (2.0 * a);
        if (x1 < x2) std::swap(x1, x2); // 確保 x1 >= x2
        std::cout << "Two different roots x1=" << int(x1) << " , x2=" << int(x2) << "\n";
    } else if (d == 0) {
        double x = (-b) / (2.0 * a);
        std::cout << "Two same roots x=" << int(x) << "\n";
    } else {
        std::cout << "No real root\n";
    }
}

/*std 是 C++ 標準函式庫（Standard Library）的命名空間（namespace）名稱。
C++ 標準函式庫裡的許多功能（像 cout、cin、sqrt、swap 等）都被放在 std 這個命名空間裡。

為什麼要加 std::？
這是為了避免和你自己寫的函式或變數名稱衝突。

std::cout：標準輸出
std::cin：標準輸入
std::sqrt：標準數學開根號
std::swap：標準交換函式*/