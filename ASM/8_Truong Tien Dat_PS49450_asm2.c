#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    do{
    printf("\n|----------------------------------------|\n");
    printf("\n|--welcome to ASM_PS49450_TruongTienDat--|\n");
    printf("\n|==================MENU==================|\n");
    printf("\n|----------------------------------------|\n");
      int choice;
         printf("1.kiem tra so nguyen\n");
         printf("2.tim uoc so chung va boi so chung cua 2 so nguyen\n");
         printf("3.tinh tien cho quan karaoke\n");
         printf("4.tinh tien dien\n");
         printf("5.chuc nang doi tien\n");
         printf("6.tinh lay suat vay ngan hang vay tra gop\n");
         printf("7.vay tien mua xe\n");
         printf("8.sap xep thong tin sinh vien\n");
         printf("9.xay dung game FPOLY-LOTT \n");
         printf("10.tinh toan phan so\n");
         printf("11.thoat!!!\n");
         printf("Nhập lựa chọn của bạn:");
         scanf("%d", &choice);
         
         switch(choice){
            case 1:
            //khai bao n
            printf("1.kiem tra so nguyen\n");
            int n;
            printf("nhap vao so x de kiem tra:");
            scanf("%d", &n);

            //kiem tra so nguyen to 
            if(n%1==0||n%n==1||n%1==0){
                printf("%d la so nguyen to\n", n);
            }else if(n<1){
                printf("khong phai la so nguyen to\n");
            }else if(n>0){
                printf("%d la so nguyen", n);
            }else{
                printf("so nhap khong co trong khoan", n);
            }
            
            //so chinh phuong
            if (n < 0) {
                printf("Khong phai la so chinh phuong\n");
            } else {
                int y = sqrt(n);   // Lấy căn bậc 2
                    if (y * y == n) {  // Nếu y*y đúng bằng x -> chính phương
                        printf("%d la so chinh phuong\n", n);
                    } else {
                        printf("%d khong phai la so chinh phuong\n", n);
                    }   
            }
            break;
            case 2:
            printf("2.tim uoc so chung va boi so chung cua 2 so nguyen\n");
            int a,b;
            int x,y;
            do{
            printf("nhap vao a va b(khac 0):");
            scanf("%d %d",&a, &b);
            }while (a==0||b==0);

            x=a;
            y=b;
            
            //tim uoc chung
             while (x != y) {
                if (x > y)
                    x = x - y;
                else
                    y = y - x;
            }
            int ucln = x;
            int bcnn = (a*b)/ucln;

            printf("uoc chung lon nhat la:%d\n", ucln);
            printf("boi chung nho nhat la:%d\n", bcnn);
            break;
            case 3:
            printf("tinh tien cho quan karaoke\n");
            float start, end;
            printf("nhap vao gio bat dau va gio ket thuc:");
            scanf("%f %f", &start, &end);

               //tinh tien
            float time=end-start;
            float money=0;
            if(start<12||end>23||start>=end){
                printf("quan chua mo cua hen gap lai!!!\n");
               return 0;
           }

           //tien 3h dau
            if(time<=3){
                money=150000;
            }else{
                money = 150000 + (time - 3) * 50000 * 0.7;
            }
            //tien neu 14h->17h
            if(start>=14&&start<=17){
                money=money*0.9;
            }
            printf("tien cua ban la %f\n", money);
            break;
            case 4:
            printf("4.tinh tien dien\n");
            float kwh;
            float tien=0;
            printf("nhap vao (kwh) dien su dung:");
            scanf("%f", &kwh);
            
            //tinh tien dien
            if(kwh<50){
                tien=kwh*1.678;
            }else if(kwh<= 50 && 100>=kwh){
                tien=kwh*1.734;
            }else if(kwh<=10 && 200>=kwh){
                tien=kwh*2.014;
            }else if(kwh<=201 && 300>=kwh){
                tien=kwh*2.536;
            }else if(kwh<=301 && 400>=kwh){
                tien=kwh*2.834;
            }else{
                tien=kwh*2.927;
            }
            printf("gia tien dien cua ban la %.2f", tien);
            break;
            case 5:
                printf("5.chuc nang doi tien\n");
                int soTien;
                printf("nhap vao so tien can doi:");
                scanf("%d", &soTien);

                //doi tien
                int menhGia[]={200,200,100,50,20,10,5,2,1};
                int soLuong,i;

                for(i=0;i<9;i++){
                    soLuong=soTien/menhGia[i];
                    if(soLuong!=0){
                    }
                    printf("%d to %d\n", soLuong, menhGia[i]);
                }

            break;
            case 6:
            printf("6.tinh lay suat ngan hang vay tra gop\n");
            int tienVay;
            int thoiHan
            printf("nhap vao so tien can vay:");
            scanf("%d", &tienVay);
            //tinh lai suat
            if(thoiHan<12){
            float laiSuat=tienVay * 0.5;
            }else if()
                
            
            break;
            case 7:
            printf("7.vay tien mua xe\n");
            break;
            case 8:
            printf("8.xap sep thong tin sinh vien\n");
            break;
            case 9:
            printf("9.xay dung game FPOLY-LOTT\n");
            break;
            case 10:
            printf("10.tinh toan phan so\n");
            break;
            case 11:
            printf("thoát chương trình\n");
            exit(0);
            default:
            printf("lựa chọn của bạn không hợp lệ vui lòng chọn lại\n");
        }
     
    }while(1);
     
 return 0;
}
