#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

int main() {
    std::map<std::string, int> monthCount;
    int n = 0;
    std::string date;

    while (std::cin >> n && n > 0 && n <= 1000) {
        for (int i = 0; i < n; ++i) {
            std::cin >> date;
            // 提取年份和月份，构造键名 "YYYY-MM"
            std::string key = date.substr(0, 7);
            // 增加对应月份的计数
            monthCount[key]++;
        }

        // 将map的键转换为vector，以便排序
        std::vector<std::string> sortedKeys;
        for (const auto& pair : monthCount) {
            sortedKeys.push_back(pair.first);
        }

        // 排序vector，以确保月份从小到大的顺序
        std::sort(sortedKeys.begin(), sortedKeys.end());

        // 遍历排序后的vector并输出结果
        for (const auto& key : sortedKeys) {
            std::cout << key << ":" << monthCount[key] << std::endl;
        }

        // 清空map，为下一个测试用例做准备
        monthCount.clear();
    }

    return 0;
}