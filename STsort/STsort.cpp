#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> vec;

vec SelectionSort(vec V)
{
    int nSize = V.size();
    for (int i = 0; i < nSize; i++)
    {
        int nMin = V[i];
        int nIndex = i;
        int nTemp = 0;
        for (int j = i; j < nSize; j++)
        {
            nMin > V[j] ? nMin = V[j], nIndex = j : nMin;     
        }

        nTemp = V[i];
        V[i] = nMin;
        V[nIndex] = nTemp;
    }

    return V;
}

void SelectionSort1(int* p)
{
    for (int i = 0; i < 10; i++)
    {
        int nMin = i;
        int nTemp = 0;
        for (int j = i; j < 10; j++)
        {
            p[nMin] > p[j] ? nMin = j : nMin;
        }

        nTemp = p[i];
        p[i] = p[nMin];
        p[nMin] = nTemp;
    }
}


int main()
{
    vec v, vv;
    for (int i = 0; i < 10; i++)
    {
        int num = rand() % 30;
        v.push_back(num);
    }
    vv = SelectionSort(v);


    int szNum[10];
    for (int j = 0; j < 10; j++)
    {
        szNum[j] = rand() % 20;
    }

    SelectionSort1(szNum);
    
    system("pause");
    return 0;
}

