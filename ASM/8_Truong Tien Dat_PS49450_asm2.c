#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
struct sinhVien{
    char hoTen[50];
    int tuoi;
    float diem;
    char hocLuc[10];
};
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
            printf("\n1.kiem tra so nguyen va so chinh phuong\n");
            int n;
            printf("nhap vao so x de kiem tra:");
            scanf("%d", &n);

            //kiem tra so nguyen to 
            if(n%1==0||n%n==1||n%1==0){
                printf("\n%d la so nguyen to\n", n);
            }else if(n<1){
                printf("\nkhong phai la so nguyen to\n");
            }else if(n>0){
                printf("%d la so nguyen", n);
            }else{
                printf("\nso nhap khong co trong khoan", n);
            }
            
            //so chinh phuong
            if (n < 0) {
                printf("\nKhong phai la so chinh phuong\n");
            } else {
                int y = sqrt(n);   // Lấy căn bậc 2
                    if (y * y == n) {  // Nếu y*y đúng bằng x -> chính phương
                        printf("\n%d la so chinh phuong\n", n);
                    } else {
                        printf("\n%d khong phai la so chinh phuong\n", n);
                    }   
            }
            break;
            case 2:
            printf("\n2.tim uoc so chung va boi so chung cua 2 so nguyen\n");
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

            printf("\nuoc chung lon nhat la:%d\n", ucln);
            printf("boi chung nho nhat la:%d\n", bcnn);
            break;
            case 3:
            printf("tinh tien cho quan karaoke\n");
            float start, end;
            printf("nhap vao gio bat dau va gio ket thuc:");
            scanf("%f %f", &start, &end);

               //tinh tien
            float thoiGian=end-start;
            float money=0;
            if(start<12||end>23||start>=end){
                printf("quan chua mo cua hen gap lai!!!\n");
               return 0;
           }

           //tien 3h dau
            if(thoiGian<=3){
                money=150000;
            }else{
                money = 150000 + (thoiGian - 3) * 50000 * 0.7;
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
            printf("\nnhap vao (kwh) dien su dung:");
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
            printf("\ngia tien dien cua ban la %.2f\n", tien);
            break;
            case 5:
                printf("5.chuc nang doi tien\n");
                int soTien;
                printf("\nnhap vao so tien can doi:");
                scanf("%d", &soTien);

                //doi tien
                int menhGia[]={200,200,100,50,20,10,5,2,1};
                int soLuong,i;

                for(i=0;i<9;i++){
                    soLuong=soTien/menhGia[i];
                    if(soLuong!=0){
                    }
                    printf("\n%d to %d\n", soLuong, menhGia[i]);
                }

            break;
            case 6:
            printf("6.tinh lay suat ngan hang vay tra gop\n");
            int tienVay;
            printf("\nnhap vao so tien can vay:");
            scanf("%d", &tienVay);

            //tinh lai suat
            for(int i=1;i<=12;i++){
            float gocMoiThang = tienVay / 12;
            float soTienConlai = tienVay - gocMoiThang * i;
            float laiMoiThang = soTienConlai * 0.05;
            float tienMoiThang = gocMoiThang + laiMoiThang;
            printf("\nki han %d lai phai tra %.2f goc phai tra %.2f so tien con lai %.2f\n",
                 i,laiMoiThang,gocMoiThang,soTienConlai, soTienConlai);
            }
            break;
            case 7:
            printf("7.vay tien mua xe\n");
            float phanTramVay;
            printf("\nnhap vao so phan tram vay toi da:");
            scanf("%f", &phanTramVay);
            
            //tinh tien vay
            float giaXe=500000000;
            float soTienVay = giaXe * (phanTramVay / 100);
            float traTruoc= giaXe - soTienVay;

                printf("\nso tien can truoc la:%.0f\n", traTruoc);
            for(int i=1;i<=288;i++){
                //15%năm=0.0125 tháng
                float tienMoiThang= soTienVay/288;
                float laiHangThang = soTienVay*0.0125;//=500000
                float tienHangThang = tienMoiThang+laiHangThang;
                float tienConLai = soTienVay - (tienMoiThang)*i;
                printf("\nthang %d tien lai hang thang %.0f so tien phai tra hang thang %.0f so tien con lai %.0f \n",
                    i,laiHangThang, tienHangThang, tienConLai);
            }
            
            break;
            case 8:
            printf("8.xap sep thong tin sinh vien\n");
            struct sinhVien sv[50];
            int sl,s,l;
            struct sinhVien stemp;
            float diem;
            char hocLuc[10];
            printf("\nnhap vao so luong sinh vien:");
            scanf("%d", &sl);
            
            //nhap thong tin sinh vien
            for(s=0; s<sl; s++){
                printf("\nnhap vao ten sinh vien thu %d:", s+1);
                scanf("%s", sv[s].hoTen);
                printf("nhap vao tuoi sinh vien thu %d:", s+1);
                scanf("%d", &sv[s].tuoi);
                printf("nhap vap diem sinh vien thu %d:", s+1);
                scanf("%f", &sv[s].diem);
            }
            for (int s=0;s<sl; s++){
            if(sv[s].diem>=9){
                strcpy(sv[s].hocLuc,"xuat sac");
            }else if(sv[s].diem>=8){
                strcpy(sv[s].hocLuc,"gioi");
            }else if(sv[s].diem>=7){
                strcpy(sv[s].hocLuc,"kha");
            }else if(sv[s].diem>=5){
                strcpy(sv[s].hocLuc,"trung binh");
            }else{
                strcpy(sv[s].hocLuc,"yeu");
            }
            }   
            //sap xep diem
            for (s=0; s<sl-1;s++){
                for ( l=s+1;l<sl;l++){
                    if(sv[s].diem<sv[l].diem){
                        stemp=sv[s];
                        sv[s]=sv[l];
                        sv[l]=stemp;
                    }
                }
            }
            //in ra danh sach sinh vien va sap xep
            printf("\ndanh sach sinh vien sau khi sap xep la:\n");
            for(s=0;s<sl;s++){
                printf("\nten sinh vien:%s - tuoi:%d - diem:%.1f - hoc luc:%s\n", sv[s].hoTen, sv[s].tuoi, sv[s].diem, sv[s].hocLuc);
            }
            
            break;
            case 9:
            printf("9.xay dung game FPOLY-LOTT\n");
            int soTrung,soDoan;
            //tao so ngau nhien
            srand(time(NULL));
            soTrung=rand()%15+1;
            
            //nhap vao so du doan
            printf("\n Nhap vao so du doan cua ban(1-15): ");
            scanf("%d", &soDoan);
            //kiem tra so da du doan
            if(soDoan<1 || soDoan>15){
                printf("\nso ban du doan khong hop le\n");
                return 0;
            }
            printf("\n so trung thuong la:%d", soTrung);
            if(soDoan==soTrung){
                printf("\nchuc mung ban da trung giai!!!");
            }else{
                printf("\nban da du doan sai, chuc ban may man lan sau");
            }
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
