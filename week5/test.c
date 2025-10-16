#include <stdio.h>
#include <stdlib.h>

int main(){

    int A = 5;
    int B = A;

    printf("1번 문제 답 : ");
    if (&A == &B) {
        printf("%d\n",1);
    }else{
        printf("%d\n",0);
    }

    char cArr[2] = {1, 1};

    short* pS = (short*)cArr;

    printf("2번 문제 답 : ");
    if (pS == (char*)cArr) {
        printf("%d\n",1);
    } else {
        printf("%d\n",0);
    }

    printf("3번 문제 답 : ");
    if (*pS == *cArr){
        printf("%d\n",1);
    }else{
        printf("%d\n",0);
    }

    printf("4번 문제 답 : ");
    printf("%d\n",  *pS);

    // 문제5. 
    short sArr[10] = {-3, -4, -1, -2, 1, 0, 3, 2, 5, 4};

    int* pI = (int*)sArr;

    unsigned int iData1 = *(pI + 2); 

    printf("5번 문제 답 : ");    
    printf("%d\n", iData1);


    // 문제6.
    int iData2 = *(short*)(pI + 2); 

    printf("6번 문제 답 : ");  
    printf("%d\n", iData2);


    // 문제7.
    int iData3 = ((char*)(pI + 2)); 

    printf("7번 문제 답 : ");  
    printf("%d\n", iData3);

    // 문제8  ppI를 사용하여 sArr[4]을 출력하기
    int** ppI = &pI;

    printf("%d\n", ppI /*add code*/ );

    return 0;
}