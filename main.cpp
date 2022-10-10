#include <vector>
#include <iostream>

using namespace std;
/*
12. Даны строки S, S1 и S2. Заменить в строке S последнее вхождение строки S1 на строку S2.
*/
int main()
{

    system("chcp 1251");
    string s, s1, s2;
    cin >> s >> s1 >> s2;
    int pos = s.rfind(s1);

    if (pos + 1) {
        s.replace(pos, s1.length(), s2);
    }
    cout << s;
    //Работает только с анллийским языком
	return 0;
}
