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

    cout << "�׷��� �������Դϴ�." << endl;

    while (true) {
        cout << "����:1, ���� : 2, ��κ��� : 3, ���� : 4 >> ";
        cin >> choice;

        if (choice == 1) {
            cout << "��:1, ��:2, �簢��:3 >> ";
            int type;
            cin >> type;

            if (type >= 1 && type <= 3) {
                shapes.push_back(type);
            }
            else {
                cout << "�߸��� �Է��Դϴ�." << endl;
            }
        }
        else if (choice == 2) {
            cout << "�����ϰ��� �ϴ� ������ �ε��� >>";
            int index;
            cin >> index;

            if (index >= 0 && index < shapes.size()) {
                shapes.erase(shapes.begin() + index);
            }
            else {
                cout << "�߸��� �ε����Դϴ�." << endl;
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
            cout << "�߸��� �Է��Դϴ�." << endl;
        }
    }

    return 0;
}
