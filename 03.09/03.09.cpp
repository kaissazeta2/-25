#include <iostream>
#include <string>
#include <windows.h>
#include <algorithm>
#include <vector>
#include <cmath>


void levelUp1(int lev, int ch) {
    lev += ch;
}
void levelUp2(int* lev, int ch) {
    *lev += ch;
}
void levelUp3(int& lev, int ch) {
    lev += ch;
}







int main()
{
    using namespace std;
    int problem;
    cout << "Number of the problem:" << endl;
    cin >> problem;

    switch (problem) {
    case 1: {
        string name;
        int age;
        cin >> name >> age;
        cout << "Hello, " << name << "! In 10 years you'll be " << age + 10 << " years old and you'll already be cool programer";
    }
          break;
    case 21: {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        cout << (a + b + c + d + e) / 5.0;
        break;
    }
    case 22: {
        int age;
        cin >> age;
        cout << (age >= 18 ? "yes" : "No");
        break;
    }
    case 23: {
        char a;
        cin >> a;
        cout << (int)a;
        break;
    }


    case 3: {
        string ch;
        while (true) {
            cout << "If you want to stop? print 5? else choose 1(left), 2(right), 3(forward), 4(behind)" << endl;
            cin >> ch;
            if (ch == "1") { cout << "You met the dragon" << endl; }
            else if (ch == "2") { cout << "You found gold" << endl; }
            else if (ch == "3") { cout << "You went to the river" << endl; }
            else if (ch == "4") { cout << "You are on the start again" << endl; }
            else if (ch == "5") { break; }
            else { cout << "Wrong input" << endl; }
        }
        break;
    }


    case 4: {
        vector<int>res = { 1,2,3 };
        string ans;
        int answer;
        while (true) {
            cout << "If you want to stop type 'stop'(else type rock, paper or scisors)" << endl;
            cin >> ans;
            random_shuffle(res.begin(), res.end());
            if (ans == "rock") {
                answer = 3;
                if (answer == res[0]) {
                    cout << "draw" << endl;
                }
                else if (res[0] == 1) {
                    cout << "you win" << endl;
                }
                else { cout << "you lose" << endl; }
            }
            else if (ans == "scissors") {
                answer = 2;
                if (answer == res[0]) {
                    cout << "draw" << endl;
                }
                else if (res[0] == 3) {
                    cout << "you win" << endl;
                }
                else { cout << "you lose" << endl; }
            }
            else if (ans == "paper") {
                answer = 1;
                if (answer == res[0]) {
                    cout << "draw" << endl;
                }
                else if (res[0] == 1) {
                    cout << "you win" << endl;
                }
                else { cout << "you lose" << endl; }
            }
            else if (ans == "stop") { break; }
            else { cout << "Wrong input" << endl; }
        }
        break;
    }
    case 5: {
        double money;
        cin >> money;
        cout << ceil(1000 / money);
        break;
    }
    case 6: {
        int numb;
        cin >> numb;
        for (int i = 0; i < numb; i++) { cout << "#"; }
        break;
    }
    case 7: {
        int a;
        cin >> a;
        int* b = &a;
        cout << a << endl << b << endl;
        b += 1;
        cout << a;
        break;
    }


    case 8: {
        int x;
        cin >> x;
        int& xss = x;
        xss -= 1;
        cout << x;
        break;
    }


    case 9: {
        int marks[5];
        cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4];
        cout << "Average: " << (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5.0<<endl;
        for (int i = 0; i < 5; i++) {
            for (int w = 0; w < 4; w++) {
                if (marks[w + 1] < marks[w]) { swap(marks[w], marks[w + 1]); }
            }
        }
        cout << "max: " << marks[4] << ", min: " << marks[0];
        break;
    }

    case 10: {
        int lev,ch;
        cin >> lev>>ch;
        levelUp1(lev, ch);
        cout << lev<<endl;
        levelUp2(&lev, ch);
        cout << lev<<endl;
        levelUp3(lev, ch);
        cout << lev<<endl;
        break;
    }
    }
    return 0;
}

