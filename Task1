#include <iostream>

using namespace std;

int main() {
    cout << "Enter integers - only integers entered before 0 will be assessed" << endl;
    int n, maxCount = 0, nWithMaxCount, latestN = 0, latestNCount = 1;
    do {
        cin >> n;
        if (n == latestN && n != 0)

            latestNCount++;
        else {
            if (latestNCount > maxCount) {
                maxCount = latestNCount;
                nWithMaxCount = latestN;
            }
            latestNCount = 1;
        }
        latestN = n;
    } while (n != 0);
    cout << "Longest sequence: " << nWithMaxCount << " times " << maxCount << std::endl;

}
