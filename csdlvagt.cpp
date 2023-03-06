#include<stdio.h>
#include<conio.h>
struct Ngay
{
    int D, M, Y;
};
typedef Ngay NGAY;
void NhapNgay(NGAY&);
void XuatNgay(NGAY);
void NhapNgay(NGAY&ng)
{
    printf("\nNhap ngay: ");
    scanf("%d", &ng.D);
    printf("\nNhap thang: ");
    scanf("%d", &ng.M);
    printf("\nNhap nam: ");
    scanf("%d", &ng.Y);
}
void XuatNgay(NGAY ng)
{
    printf("\n%d-%d-%d", ng.D, ng.M, ng.Y);
}
int main()
{
    NGAY ng;
    NhapNgay(ng);
    XuatNgay(ng);
    getch();
    return 0;
}