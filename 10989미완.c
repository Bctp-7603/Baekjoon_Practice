// merge sort, heap sort, quick sort 등이나 내장 정렬 함수 등도 전부 사용할 수 없음.
/*
메모리 초과
참고 : https://www.acmicpc.net/board/view/152450
*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void* arg1, const void* arg2) {
	int a = *(int*)arg1;    //void를 int형으로 변환
	int b = *(int*)arg2;
	//오름차순 정렬
	if (a > b) return 1;
	else if (a < b) return -1;
	else return 0;
}

int main() {
    int count;

    scanf("%d", &count);

    int* num = (int*)malloc(sizeof(int) * count);

    for(int i = 0; i < count; i++) {
        scanf("%d", &num[i]);
        if(num[i] < -1000000 || num[i] > 1000000) return 0;
    }

    qsort(num, count, sizeof(int), compare);

    for(int i = 0; i < count; i++) {
        printf("%d\n", num[i]);
    }

    free(num);

    return 0;
}