#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cout << "045206003326 " <<" Dương Như Phong Sơn"<< endl;

    ifstream file("data.txt");
    if (!file.is_open()) {
        cout << "Không thể mở file data.txt" << endl;
        return 1;
    }

    string line;
    int lineCount = 0;
    vector<string> negativeLines;

    while (getline(file, line)) {
        lineCount++;
        if (line.size() > 0 && line[0] == '-') {
            negativeLines.push_back(line);
        }
    }

    file.close();

    cout << "Tổng số dòng: " << lineCount << endl;
    cout << "Các dòng bắt đầu bằng '-':" << endl;
    for (string l : negativeLines) {
        cout << l << endl;
    }

    return 0;
}