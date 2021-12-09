#include <iostream>
#include <ctime>
using namespace std;
int* rand(int n, int len) {
    int a[len][len];
    srand((unsigned) time(0));
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
              a[i][j]= rand() %(n) +1;
        }


    }
}
int main() {
    rand(8, 20);
}

