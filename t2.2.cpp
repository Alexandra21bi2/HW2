#include "t2.h";
void change(int* arr, int N) {//??????? ??? ????????????? ?????????

    int* pa = &arr[0];//????????? ????????? ?? ?????? ??????? ???????
    int* pla = &arr[N - 1];//????????? ?? ????????? ??????? ???????
    //???????????? ??????????
    int  tmp = *pa;
    *pa = *pla;
    *pla = tmp;
    for (int i = 0; i < N; i++)//????? ???????
    {
        std::cout << arr[i] << " ";

    }
}