/*Вывести на экран значение самого часто повторяющегося элемента массива.
Если в массиве несколько таких элементов, вывести из них тот, который имеет самый меньший номер.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str;
    cin >> str;
    int counter;
    char symbol;
    vector<int> often;
    for (int i = 0; i < str.size(); i++) {
        counter = 0;
        symbol = str[i];
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == symbol) {
                counter++;
            }
        }
        often.push_back(counter); //сколько раз встречается i-й символ строки в самой строке 
    }
    int max_count = 0, max_index = 0;
    for (int i = 0; i < often.size(); i++) {
        if (often[i] > max_count) {
            max_count = str[i];
            max_index = i;
        }
    }
    cout << str[max_index] << endl;
    return 0;
}
