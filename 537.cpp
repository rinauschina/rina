#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    int mlen, len, temp;
    int i;
    string str1;

    //Введем максимальный размер строки
    cout << "Enter max number of string:\t";
    cin >> mlen;
    cout << "\n";

    char *str = new char[mlen];

    cout << "Enter string: \t";
    cin.getline(str, mlen);
    cout << "\n";

    cout << "You entered: \t" << str << endl;

    len = strlen(str);

    //Произведем перестановки правой и левой частей заданной строки
    //для четного количества элементов в строке
    if (len%2 == 0)
    {
        for (i = 0; i < len/2-1; i++)
        {
          temp = str[i];
          str[i] = str[len/2+i];
          str[len/2+i] = temp;
        }
        cout << "New string: \t" << str << endl;
    }
    else
    {
        for (i = 0; i < len/2; i++)
        {
          temp = str[i];
          str[i] = str[len/2+i];
          str[len/2+i] = temp;
        }
        cout << "New string: \t" << str << endl;
    }
    delete(str);//освобождение памяти
    return 0;  
}

