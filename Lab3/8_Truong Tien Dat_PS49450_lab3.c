#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int choine;
    printf("1. Tinh diem hoc luc\n");
    printf("2. Giai phuong trinh bac nhat\n");
    printf("3. Giai phuong trinh bac hai\n");
    printf("4. Tinh tien dien\n");
    printf("5. Thoat\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choine);
    switch (choine) {

        // Bai 1:tinh diem hoc luc
        case 1: {
            float diem;
            printf("Nhap diem cua ban: ");
            scanf("%f", &diem);

            if (diem >= 9)
                printf("Hoc luc xuat sac\n");
            else if (diem >= 8)
                printf("Hoc luc gioi\n");
            else if (diem >= 7)
                printf("Hoc luc kha\n");
            else if (diem >= 5)
                printf("Hoc luc trung binh\n");
            else
                printf("Hoc luc yeu\n");
            break;
        }

        // bai 2: giai pt bac nhat
        case 2: {
            float a1, b1;
            printf("Nhap vao gia tri a va b: ");
            scanf("%f %f", &a1, &b1);

            if (a1 == 0) {
                if (b1 == 0)
                    printf("Phuong trinh vo so nghiem\n");
                else
                    printf("Phuong trinh vo nghiem\n");
            } else {
                printf("Phuong trinh co nghiem x = %f\n", -b1 / a1);
            }
            break;
        }

        // bai 3: giai pt bac hai
        case 3: {
            float a2, b2, c2;
            printf("Nhap vao cac gia tri a, b, c: ");
            scanf("%f %f %f", &a2, &b2, &c2);

            if (a2 == 0) {
                if (b2 == 0) {
                    if (c2 == 0)
                        printf("Phuong trinh vo so nghiem\n");
                    else
                        printf("Phuong trinh vo nghiem\n");
                } else {
                    printf("Phuong trinh tro thanh bac nhat, x = %f\n", -c2 / b2);
                }
            } else {
                float delta = b2*b2 - 4*a2*c2;
                if (delta < 0)
                    printf("Phuong trinh vo nghiem\n");
                else if (delta == 0)
                    printf("Phuong trinh co nghiem kep: %f\n", -b2/(2*a2));
                else {
                    printf("x1 = %f\n", (-b2 + sqrt(delta)) / (2*a2));
                    printf("x2 = %f\n", (-b2 - sqrt(delta)) / (2*a2));
                }
            }
            break;
        }

        // bai 4: tinh tien dien
        case 4: {
            float kw;
            printf("Nhap so dien da su dung: ");
            scanf("%f", &kw);

            float tien;

            if (kw > 0 && kw <= 50)
                tien = kw * 1678;
            else if (kw <= 100)
                tien = kw * 1734;
            else if (kw <= 200)
                tien = kw * 2014;
            else if (kw <= 300)
                tien = kw * 2536;
            else if (kw <= 400)
                tien = kw * 2834;
            else
                tien = kw * 2927;

            printf("So tien phai tra: %.2f VND\n", tien);
            break;
        }

        // thoat
        case 5:
            exit(0);
        default:
            printf("Vui long chon dung so tu 1 den 5.\n");
    }

    return 0;
}
