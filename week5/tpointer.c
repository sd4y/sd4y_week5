#include <stdio.h>
#include <stdlib.h>

int main(){

    short sArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int* pI = (int*)sArr;

    int iData = *((short*)(pI + 2));

    printf("%d\n", iData);

    iData = (short*)(pI + 2);

    printf("%d\n", iData);

    iData = *(pI + 2);

    printf("%d\n", iData);

    char cArr[2] = {1, 1};
    
    short* pS = (short*)cArr;

    iData = *pS;

    printf("%d\n", iData);

    int** ppI = &pI;

    printf("%d\n", ppI);

    return 0;
}