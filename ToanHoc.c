#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int choose,choose1=1;
int dung=1;
int a,b,kq,chuoi=0;
int ran,ranin;
// chia
int tu,mau,c=0;
int x,y;
// tinh phan so
int tu1,mau1,tu2,mau2,tukq,maukq;
void GCD (){
    x=tu;
    y=mau;
    while (y!=0){
        c=x%y;
        x=y;
        y=c;
    }
}
void De(){
    while (dung){
        ran=rand()%2+1;
        a=rand ()%50+1;
        b=rand ()%50+1;
        if (ran==1){
            printf ("%d+%d=?\n",a,b);
            scanf ("%d",&kq);
            if (kq==a+b){
                printf("Dung Roi!\n");
                dung=1;
                chuoi=chuoi+1;
            }else {
                printf ("Sai Roi!\n");
                dung=0;
            }
        }else if(ran==2){
            if (a>b){
                printf ("%d-%d=?\n",a,b);
                scanf("%d",&kq);
                if (kq==a-b){
                    printf ("Dung Roi! Qua Gioi\n");
                    dung=1;
                    chuoi=chuoi+1;
                }else{
                    printf ("Sai roi huhu :(\n");
                    dung=0;
                }
            }else if (b>a){
                printf ("%d-%d=?\n",b,a);
                scanf("%d",&kq);
                if (kq==b-a){
                    printf ("Dung Roi! Qua Gioi\n");
                    dung=1;
                    chuoi=chuoi+1;
                }else{
                    printf ("Sai roi huhu :(\n");
                    dung=0;
                }
            }
        }
    }
}
void BinhThuong(){
    while (dung){
        ran=rand()%4+1;
        if (ran==1){
            a=rand ()%50+51;
            b=rand ()%50+51;
            ranin=rand()%2+1;
            if (ranin==1){
                printf ("%d+%d=?\n",a,b);
                scanf ("%d",&kq);
                if (kq==a+b){
                    printf ("Dung!!GOOD\n");
                    dung=1;
                    chuoi=chuoi+1;
                }else {
                    printf ("Sai r HAHAHn\n");
                    dung=0;
                }
            }else if (ranin==2){
                if (a>b){
                printf ("%d-%d=?\n",a,b);
                scanf("%d",&kq);
                if (kq==a-b){
                    printf ("Wow,Gioi theee\n");
                    dung=1;
                    chuoi=chuoi+1;
                }else{
                    printf ("Sai roi baby\n");
                    dung=0;
                }
            }else if (b>a){
                printf ("%d-%d=?\n",b,a);
                scanf("%d",&kq);
                if (kq==b-a){
                    printf ("Dung Roi qua dinh\n");
                    dung=1;
                    chuoi=chuoi+1;
                }else{
                    printf ("Sai roi leu leu\n");
                    dung=0;
                    }
                }
            }
        }else if (ran==3){
            a=rand()%10+1;
            b=rand()%9+1;
            printf ("%dx%d=?\n",a,b);
            scanf ("%d",&kq);
            if (kq==a*b){
                printf ("Dung Roi Be iu\n");
                dung=1;
                chuoi =chuoi+1;
            }else {
                printf ("Sai r kia :)\n");
                dung=0;
            }
        }else if (ran==4){
            a=rand()%10+1;
            b=rand()%9+1;
            printf ("%d:%d=?\nnhap phan so (vd 3 1 là 3/1)\n",a,b);
            scanf ("%d%d",&tu,&mau);
            GCD();
            if (tu*b==mau*a&&x==1){
                printf ("Dung Roi\n");
                dung=1;
                chuoi=chuoi+1;
            }else {
                printf ("Sai!\n");
                dung=0;
            }
        }
    }
}
void Kho(){
    while (dung){
        ran=rand()%2+1;
        if (ran==1){
            a=rand()%90+10;
            b=rand()%90+10;
            printf ("%dx%d=?\n",a,b);
            scanf ("%d",&kq);
            if (kq==a*b){
                printf ("Amazing Goood Job em\n");
                dung=1;
                chuoi=chuoi+1;
            }else {
                printf ("Wrong roi:)))\n");
                dung=0;
            }
        }else if (ran==2){
            ranin=rand()%3+1;
            tu1=rand()%10+1;
            tu2=rand()%10+1;
            mau1=rand()%20+1;
            mau2=rand()%20+1;
            if (ranin==1){
                printf ("%d/%d+%d/%d=?\n(tra loi vd '5 1' la 5/1)\n",tu1,mau1,tu2,mau2);
                scanf ("%d%d",&tu,&mau);
                GCD();
                tukq=tu1*mau2+tu2*mau1;
                maukq=mau1*mau2;
                if (tukq*mau==tu*maukq&&x==1){ 
                    printf ("Dung\n");
                    dung=1;
                    chuoi=chuoi+1;
                }else {
                    printf ("Sai roiiiiiiii\n");
                    dung=0;
                }        
            }else if (ranin==2){
                if (tu1*mau2>tu2*mau1){
                    printf ("%d/%d-%d/%d=?\n(tra loi vd '5 1' la 5/1)\n",tu1,mau1,tu2,mau2);
                    scanf("%d%d",&tu,&mau);
                    tukq=tu1*mau2-tu2*mau1;
                    maukq=mau2*mau1;
                    GCD();
                    if (tukq*mau==tu*maukq&&x==1){
                        printf ("Dung Roi! Qua Gioi ne\n");
                        dung=1;
                        chuoi=chuoi+1;
                    }else{
                        printf ("Chuc ban may man lan sau :(\n");
                        dung=0;
                    }
                }else if (tu2*mau1>tu1*mau2){
                    printf ("%d/%d-%d/%d=?\n(tra loi vd '5 1' la 5/1)\n",tu2,mau2,tu1,mau1);
                    scanf("%d%d",&tu,&mau);
                    tukq=tu2*mau1-tu1*mau2;
                    maukq=mau2*mau1;
                    GCD();
                    if (tukq*mau==tu*maukq&&x==1){
                        printf ("How? sao Gioi vay\n");
                        dung=1;
                        chuoi=chuoi+1;
                    }else{
                        printf ("Bye nha:)\n");
                        dung=0;
                    }
                }
            } else if (ranin==3){
                printf ("%d/%d:%d/%d=?\n(tra loi vd '5 1' la 5/1)\n",tu1,mau1,tu2,mau2);
                scanf ("%d%d",&tu,&mau);
                tukq=tu1*mau2;
                maukq=mau1*tu2;
                GCD();
                if (tukq*mau==maukq*tu&&x==1){
                    printf ("YESSSSSSS SIRR\n");
                    dung=1;
                    chuoi=chuoi+1;
                }else {
                    printf ("NOOOOOOOOOOO\n");
                    dung=0;
                }
            }
        }
    }
}
void ask(){
    while (dung==0){
        printf("Choi Tiep Ko?\n1.Ok\n2.Ko\n");
        scanf("%d",&choose1);
        switch (choose1){
            case 1:
            choose1=1;
            dung=1;
            break;
            case 2:
            printf ("Bye Bye nhoa");
            break;
            default:
            printf("Nhap Sai, vui long nhap lai");
            continue;
        }chuoi=0;
         break;
    }
}
int main(){
    srand(time(NULL));
    while (choose1==1){
        printf ("\nChon Che Do:\n1.De\n2.Binh Thuong\n3.Kho\n");
        scanf ("%d",&choose);
        switch (choose){
            case 1:
            De();
            break;
            case 2:
            BinhThuong();
            break;
            case 3:
            Kho();
            break;
            default:
            printf("Nhap Sai, vui long nhap lai");
            continue;
        
        }printf ("Win streak:%d\n",chuoi);
        ask();
    }
    return 0;
}