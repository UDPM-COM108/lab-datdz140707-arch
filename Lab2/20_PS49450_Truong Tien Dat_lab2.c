#include <stdio.h>
int main(){ 
    // Bai 1: Cộng trừ 2 số nguyên
    int x, y;
    printf("Nhap vao so nguyen x va y: ");
    scanf("%d %d", &x, &y);
    printf("Tong cua %d va %d la: %d\n", x, y, x + y);
    printf("Hieu cua %d va %d la: %d\n", x, y, x - y);

    // Bai 2: Chu vi, diện tích hình chữ nhật
    float dai, rong;
    printf("Nhap vao chieu dai va chieu rong hinh chu nhat: ");
    scanf("%f %f", &dai, &rong);
    printf("Chu vi HCN co chieu dai %.2f va chieu rong %.2f la: %.2f\n", dai, rong, (dai + rong) * 2);
    printf("Dien tich HCN co chieu dai %.2f va chieu rong %.2f la: %.2f\n", dai, rong, dai * rong);

    // Bai 3: Chu vi, diện tích hình tròn
    float r;
    const float pi = 3.14;
    printf("Nhap vao ban kinh hinh tron: ");
    scanf("%f", &r);
    printf("Chu vi hinh tron co ban kinh %.2f la: %.2f\n", r, 2 * pi * r);
    printf("Dien tich hinh tron co ban kinh %.2f la: %.2f\n", r, pi * r * r);

    // Bai 4: Tính điểm trung bình
    float toan, ly, hoa, dtb;
    printf("Nhap vao diem Toan, Ly, Hoa: ");
    scanf("%f %f %f", &toan, &ly, &hoa);
    dtb = (toan * 3 + ly * 2 + hoa) / 6;
    printf("Diem trung binh cua ban la: %.2f\n", dtb);

    // Bai 5: Chu vi, diện tích tam giác vuông
    float canh1, canh2, canh3;
    printf("Nhap vao do dai 3 canh cua tam giac vuong: ");
    scanf("%f %f %f", &canh1, &canh2, &canh3);
    printf("Dien tich tam giac vuong la: %.2f\n", (canh1 * canh2) / 2);
    printf("Chu vi tam giac vuong la: %.2f\n", canh1 + canh2 + canh3);

    return 0;
}
