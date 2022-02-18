#include <iostream>
#include <vector>

//  ≤Â»Î≈≈–Ú
//  œ£∂˚≈≈–Ú
//  —°‘Ò≈≈–Ú
//  ∂—≈≈–Ú
//  √∞≈›≈≈–Ú
//  øÏÀŸ≈≈–Ú
//  πÈ≤¢≈≈–Ú
//  º∆ ˝≈≈–Ú
//  Õ∞≈≈–Ú
//  ª˘ ˝≈≈–Ú

using namespace std;
typedef vector<int> vec;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

vec SelectionSort(vec V)
{
    int nSize = V.size();
    for (int i = 0; i < nSize; i++)
    {
        int nMin = V[i];
        int nIndex = i;
        int nTemp = 0;
        for (int j = i + 1; j < nSize; j++)
        {
            nMin > V[j] ? nMin = V[j], nIndex = j : nMin;     
        }

        nTemp = V[i];
        V[i] = nMin;
        V[nIndex] = nTemp;
    }

    return V;
}

void SelectionSort1(int* p, int nSize)
{
    for (int i = 0; i < nSize; i++)
    {
        int nMin = i;
        for (int j = i+1; j < nSize; j++)
        {
            p[nMin] > p[j] ? nMin = j : nMin;
        }
        swap(p[i], p[nMin]);
    }
}

void InsertionSort(int* p, int nSize)
{
    for (int i = 1; i < nSize; i++)
    {
        int temp = p[i];
        int nIndex = i;
        for (int j = i - 1; j >= 0 && temp < p[j]; j--)
        {
            p[j + 1] = p[j];
            nIndex = j;
        } 
        p[nIndex] = temp;
    }
}


// ¥Ú”° ˝æ›
void print(int* p, int n)
{
    while (n)
    {
        cout << *p << endl;
        ++p;
        --n;
    }
}

void print(vec v, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << endl;
	}
}

int main()
{
    vec v, vv;
    for (int i = 1; i <= 10; i++)
    {
        int num = rand() % 30;
        v.push_back(num);
    }
    vv = SelectionSort(v);
   // print(vv, 10);
   // printf("\n");

    int szNum[10];
    for (int j = 0; j < 10; j++)
    {
        szNum[j] = rand() % 20;
    }

   // SelectionSort1(szNum,10);
   // print(szNum, 10);

    InsertionSort(szNum, 10);
    print(szNum, 10);

    system("pause");
    return 0;
}

