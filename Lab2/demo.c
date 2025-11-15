#include<stdio.h>
int main() {
    float a,b, nhan, chia;
    printf("nhap vao hai so thuc: ");
    scanf("%f %f", &a, &b);
    printf("xuat ra hai so thuc: %.2f %.2f",a,b);
    nhan = a*b;
    chia = a/b;
    printf("\nnhan 2 so thuc: %.2f", nhan);
    printf("\nchia 2 so thuc: %.2f",chia);
    return 0;
}