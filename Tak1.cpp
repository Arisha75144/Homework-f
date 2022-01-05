#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// For 0 < Number < 10000

int func(int num) {

    int sum = {0};
    for (int i = 0; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}


// 1+2+4 = 7
int main() {
    int d;
    cin >> d;
    cout << func(d);
}
