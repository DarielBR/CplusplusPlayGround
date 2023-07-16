#include <iostream>
#include <vector>

using namespace std;

vector<int> sumZero(int N) {
    vector<int> result(N, 0);
    int mark = 0;
    int i = [](int N) { if (N % 2 == 0) return 0; else return 1; }(N);

    while (i < N) {
        mark++;
        result[i] = mark;
        result[i + 1] = mark * -1;
        i += 2;
    }
    return result;
}