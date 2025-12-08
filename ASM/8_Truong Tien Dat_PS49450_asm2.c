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
struct phanSo{
    int tu;
    int mau;
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
            }else if(kwh<=100){
                tien=50*1.678+((kwh-50)*1.734);
            }else if(kwh<=200){
                tien=50*1.678+50*1.734+((kwh-100)*2.014);
            }else if(kwh<=300){
                tien=50*1.678+50*1.734+50*2.014+((kwh-200)*2.536);
            }else if(kwh<=400){
                tien=50*1.678+50*1.734+50*2.014+50*2.536+((kwh-300)*2.834);
            }else{
                tien=50*1.678+50*1.734+50*2.014+50*2.536+50*2.834+((kwh-400)*2.927);
            }
            printf("\ngia tien dien cua ban la %.2f\n", tien);
            break;
            case 5:
                printf("5.chuc nang doi tien\n");
                int soTien;
                printf("\nnhap vao so tien can doi:");
                scanf("%d", &soTien);

                //doi tien
                int menhGia[]={200,100,50,20,10,5,2,1};
                int soLuong,i;

                //tinh toan va in ket qua 
                for(i=0;i<8;i++){
                    soLuong=soTien/menhGia[i];
                    if(soLuong>0){
                        printf("\n%d to %d\n", soLuong, menhGia[i]);
                        soTien=soTien-(soLuong*menhGia[i]);
                    }
                }

            break;
            case 6:
            printf("6.tinh lay suat ngan hang vay tra gop\n");
            int tienVay;
            //nhap vao so tien vay va ky han
            printf("\nnhap vao so tien can vay:");
            scanf("%d", &tienVay);

            //tinh lai suat
            printf("\nKy hang\tLai phai tra\t Goc phai tra \t So tien phai tra \t So tien con lại\n");
            for(int i=1;i<=12;i++){
            float gocMoiThang = tienVay / 12;
            float soTienConLai = tienVay - gocMoiThang * (i-1);
            float laiMoiThang = soTienConLai * 0.05;
            float tienMoiThang = gocMoiThang + laiMoiThang;
            printf("%d\t %.0f\t\t %.0f\t %.0f\t\t %.0f\n",
                i,laiMoiThang, gocMoiThang, tienMoiThang, soTienConLai - gocMoiThang);
            }
            break;
            case 7:
            printf("7.vay tien mua xe\n");
            float phanTramVay;
            int kyHan;
            //nhap vao pha tram vay va ky han
            printf("\nnhap vao so phan tram vay va ky han se tra:");
            scanf("%f %d", &phanTramVay, &kyHan);
            
            //tinh tien vay
            float giaXe=500000000;
            float soTienVay = giaXe * (phanTramVay / 100);
            float traTruoc= giaXe - soTienVay;
            printf("\nso tien can truoc la:%.0f\n", traTruoc);

                //tinh 
            printf("\nKy hang\tLai phai tra\t Goc phai tra \t So tien phai tra \t So tien con lại\n");
            for(int i=1;i<=kyHan;i++){
                //15%năm=0.0125 tháng
                float tienMoiThang = soTienVay / kyHan;
                float soDuDauKy = soTienVay - tienMoiThang * (i - 1);
                float laiHangThang = soDuDauKy * 0.0125;
                float tienHangThang = tienMoiThang + laiHangThang;
                float tienConLai = soDuDauKy - tienMoiThang;
                //in ket qua
                printf("%d\t %.0f\t\t %.0f\t %.0f\t\t %.0f\n",
                    i,laiHangThang,tienMoiThang, tienHangThang, tienConLai);
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
                printf("\nten sinh vien:%s - tuoi:%d - diem:%.1f - hoc luc:%s\n",
                     sv[s].hoTen, sv[s].tuoi, sv[s].diem, sv[s].hocLuc);
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
                printf("\nchuc mung ban da trung giai!!!\n");
            }else{
                printf("\nban da du doan sai, chuc ban may man lan sau\n");
            }
            break;
            case 10:
            printf("10.tinh toan phan so\n");

            //nhap phan so
            struct phanSo e,f,tong, hieu, tich, thuong;
            printf("\nnhap vao tu va mau phan so thu 1:");
            scanf("%d %d", &e.tu, &e.mau);
            printf("nhap vao tu va mau phan so thu 2:");
            scanf("%d %d", &f.tu, &f.mau);

            //tinh toan
            //tinh tong
            tong.tu= e.tu* f.mau + f.tu * e.mau;
            tong.mau= e.mau* f.mau;
            //tinh hieu
            hieu.tu= e.tu* f.mau - f.tu*e.mau;
            hieu.mau= e.mau* f.mau;
            //tinh tich
            tich.tu= e.tu* f.tu;
            tich.mau= e.mau*f.mau;
            //tich thuong
            thuong.tu= e.tu* f.mau;
            thuong.mau= e.mau* f.tu;
            
            //in ra ket qua
            printf("\n tong cua phan so la: %d/%d\n",tong.tu, tong.mau);
            printf("hieu cua phan sola: %d/%d\n",hieu.tu, hieu.mau);
            printf("tich cua phan so la:%d/%d\n", tich.tu, tich.mau);
            printf("thuong cua phan so la:%d/%d\n", thuong.tu, thuong.mau);
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
