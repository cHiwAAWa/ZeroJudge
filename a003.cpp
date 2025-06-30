/*兩光法師時常替人占卜，由於他算得又快有便宜，因此生意源源不絕，時常大排長龍，他想算得更快一點，因此找了你這位電腦高手幫他用電腦來加快算命的速度。

　　他的占卜規則很簡單，規則是這樣的，輸入一個日期，然後依照下面的公式：

M=月
D=日
S=(M*2+D)%3

得到 S 的值，再依照 S 的值從 0 到 2 分別給與 普通、吉、大吉 等三種不同的運勢*/

#include <iostream>

int main() {
    int month, day, S;
    std::cout << "";
    std::cin >> month >> day;

    S = (month * 2 + day) % 3;
    switch(S) {
        case 0:
            std::cout << "普通\n";
            break;
        case 1:
            std::cout << "吉\n";
            break;
        case 2:
            std::cout << "大吉\n";
            break;
    }
}
