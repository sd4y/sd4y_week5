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

    return 0;
}