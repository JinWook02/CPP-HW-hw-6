#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"
using namespace std;

int main() {
    vector<int> shapes;
    int choice;

    cout << "그래픽 에디터입니다." << endl;

    while (true) {
        cout << "삽입:1, 삭제 : 2, 모두보기 : 3, 종료 : 4 >> ";
        cin >> choice;

        if (choice == 1) {
            cout << "선:1, 원:2, 사각형:3 >> ";
            int type;
            cin >> type;

            if (type >= 1 && type <= 3) {
                shapes.push_back(type);
            }
            else {
                cout << "잘못된 입력입니다." << endl;
            }
        }
        else if (choice == 2) {
            cout << "삭제하고자 하는 도형의 인덱스 >>";
            int index;
            cin >> index;

            if (index >= 0 && index < shapes.size()) {
                shapes.erase(shapes.begin() + index);
            }
            else {
                cout << "잘못된 인덱스입니다." << endl;
            }
        }
        else if (choice == 3) {
            for (int i = 0; i < shapes.size(); ++i) { 
                cout << i << ": ";
                if (shapes[i] == 1) {
                    cout << "Line" << endl;
                }
                else if (shapes[i] == 2) {
                    cout << "Circle" << endl;
                }
                else if (shapes[i] == 3) {
                    cout << "Rectangle" << endl;
                }
            }
        }
        else if (choice == 4) {
            break;
        }
        else {
            cout << "잘못된 입력입니다." << endl;
        }
    }

    return 0;
}
