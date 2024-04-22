#include <iostream>
int sequence(int n) {
    if (n == 1) {
        return 7;
    }
    else {
        return sequence(n - 1) + 10;
    }
}

int main() {
    setlocale(LC_ALL, "ukr");
    using namespace std;
    int n;
    cout << "Введiть номер елемента ряду, щоб отримати його значення: ";
    cin >> n;
    if (n < 1 || n > 10) {
       cout << "Введiть число вiд 1 до 10." << std::endl;
    }
    else {
        cout << "n-й елемент ряду: " << sequence(n) << std::endl;
    }
    return 0;
}
