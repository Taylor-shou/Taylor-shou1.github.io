#include <stdio.h>
#define MaxSize 100

// 顺序表结构体定义（缺失的核心代码）
typedef struct {
    int data[MaxSize];
    int length;
} SqList;

// 标准C使用指针传参，替代C++引用&
void InsertOrder(SqList *L, int x) {
    int pos = 0;
    while (pos < L->length && L->data[pos] < x) {
        pos++;
    }
    // 元素后移
    for (int i = L->length; i > pos; i--) {
        L->data[i] = L->data[i - 1];
    }
    L->data[pos] = x;
    L->length++;
}

// 打印顺序表
void PrintList(SqList L) {
    for (int i = 0; i < L.length; i++)
        printf("%d ", L.data[i]);
    printf("\n");
}

int main() {
    SqList L;
    L.data[0] = 1; L.data[1] = 3; L.data[2] = 5;
    L.length = 3;
    printf("原表: ");
    PrintList(L);

    InsertOrder(&L, 4);
    printf("插入4后: ");
    PrintList(L);

    InsertOrder(&L, 0);
    printf("插入0后: ");
    PrintList(L);

    InsertOrder(&L, 9);
    printf("插入9后: ");
    PrintList(L);
    return 0;
}