#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compareStrings(const string& str1, const string& str2) {
    return str1.length() < str2.length();
}

int main() {
    vector<string> strings;
    strings.push_back("Mother");
    strings.push_back("Apple");
    strings.push_back("Sea");
    strings.push_back("Knife");
    strings.push_back("Yeet");

    sort(strings.begin(), strings.end(), compareStrings);

    for (const auto& str : strings) {
        cout << str << " ";
    }

    return 0;
}