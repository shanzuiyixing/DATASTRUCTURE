#include <iostream>
#include <vector>
#include <string>

std::vector<int> computeNext(const std::string &pattern) {
    int m = pattern.length();
    std::vector<int> next(m, 0);
    int j = 0;  // j 是前缀长度

    for (int i = 1; i < m; i++) {
        while (j > 0 && pattern[i] != pattern[j]) {
            j = next[j - 1];  // 如果不匹配，回退到前一个最长匹配前缀
        }
        if (pattern[i] == pattern[j]) {
            j++;
        }
        next[i] = j;  // 记录当前前缀最长相等前后缀的长度
    }
    
    return next;
}

int main() {
    std::string pattern = "aaaabaa";
    std::vector<int> next = computeNext(pattern);

    std::cout << "Next array: ";
    for (int i : next) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
