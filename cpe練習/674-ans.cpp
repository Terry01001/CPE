//uva674
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    const int MAX_COIN_VALUE = 7489;
    const int coinValues[] = {1, 5, 10, 25, 50};
    const int MAX_COIN_TYPE = sizeof(coinValues) / sizeof(int);

    int ways[MAX_COIN_VALUE + 5] = {1};
    for (int i = 0; i < MAX_COIN_TYPE; ++i) {
        for (int j = 0; j <= MAX_COIN_VALUE; ++j) {
            if (j + coinValues[i] > MAX_COIN_VALUE) break;
            ways[j + coinValues[i]] += ways[j];
        }
    }

    int amount;
    while (scanf("%d", &amount) != EOF) {
        printf("%d\n", ways[amount]);
    }

    return 0;
}
