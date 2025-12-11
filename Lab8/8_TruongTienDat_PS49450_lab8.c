#include<stdio.h>
#include<string.h>
struct HOCVIEN{
    int MSHV;
    char hoTen[50];
    float diem;
    char hocLuc[10];
};
int main(){
    int x,i,j;
    printf("nhap vao so sinh vien muon nhap:");
    scanf("%d",&x);
    struct HOCVIEN hv[x];
    for(i=0;i<x;i++){
        printf("nhap vao thong tin sinh vien thu %d:\n",i+1);
        printf("MSVH:");
        scanf("%d",&hv[i].MSHV);
        printf("ho va ten:");
        scanf("%s",hv[i].hoTen);
        printf("diem:");
        scanf("%f",&hv[i].diem);

        //tinh hoc luc
        if(hv[i].diem>=9){
            strcpy(hv[i].hocLuc,"Xuat sac");
        }else if(hv[i].diem>=8){
            strcpy(hv[i].hocLuc,"Gioi");
        }else if(hv[i].diem>=7){
            strcpy(hv[i].hocLuc,"Kha");
        }else if(hv[i].diem>=5){
            strcpy(hv[i].hocLuc,"Trung binh");
        }else{
            strcpy(hv[i].hocLuc,"Yeu");
        }
    }
        //in ra danh sach sinh vien
        printf("danh sach sinh vien \n");
        printf("\nSTT\tMSHV\tHo ten\tDiem\tHoc luc\n");
        for(i=0;i<x;i++){
            printf("%d\t %d\t %s\t %.1f\t %s\n",i+1,hv[i].MSHV,hv[i].hoTen,hv[i].diem,hv[i].hocLuc);
        }

        return 0;
        }   

