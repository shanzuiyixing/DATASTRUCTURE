#include <iostream>
#include <vector>
#include <string>

void computeNextval(const std::string &pattern, std::vector<int> &nextval) {
    int m = pattern.length();
    std::vector<int> next(m, 0);
    nextval.resize(m, 0);

    // Compute the next array
    int j = 0;
    for (int i = 1; i < m; ++i) {
        while (j > 0 && pattern[i] != pattern[j]) {
            j = next[j - 1];
        }
        if (pattern[i] == pattern[j]) {
            ++j;
        }
        next[i] = j;
    }

    // Compute the nextval array
    for (int i = 0; i < m; ++i) {
        if (i == 0 || pattern[i] != pattern[next[i] - 1]) {
            nextval[i] = next[i];
        } else {
            nextval[i] = nextval[next[i] - 1];
        }
    }
}

int main() {
    std::string pattern = "abcdabd";
    std::vector<int> nextval;
    computeNextval(pattern, nextval);

    std::cout << "Nextval array: ";
    for (int val : nextval) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
