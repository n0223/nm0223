#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include <QVector>

void  BubbleSort(QVector<int> & v)
{
    for(int i = 0 ; i < v.size();i++)
    {
        bool isSorted = true;
        for(int j = 0; j <v.size()-i-1;j++)
        {
            if(v[j+1] <v[j])
            {
                isSorted = false;
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
        if(isSorted)
            break;
    }
}
#endif // BUBBLESORT_H
