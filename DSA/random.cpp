#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int number : numbers) {
        sum += number;
    }

    cout << "The sum of the numbers is: " << sum << endl;
    return 0;
}
