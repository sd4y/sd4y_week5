#include "tList.h"

int main()
{
    tList MyList ;
    init_List(&MyList);
    push_back(&MyList, 10);
    push_back(&MyList, 20);
    push_back(&MyList, 30);
    push_back(&MyList, 40);
    push_back(&MyList, 50);
    push_front(&MyList, 5);
    push_front(&MyList, 4);
    push_front(&MyList, 3);
    push_front(&MyList, 2);
    push_front(&MyList, 1);
    erase(&MyList, 5);

    return 0;
}