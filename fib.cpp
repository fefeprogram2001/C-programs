#include <iostream>
using namespace std;

int recursive_function(int n) {
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return recursive_function(n - 1) + recursive_function(n - 2);
    }
}

int main() {
    int n = 10;
    int result = recursive_function(n);
    cout << "Result = " << result;
    return 0;
}
