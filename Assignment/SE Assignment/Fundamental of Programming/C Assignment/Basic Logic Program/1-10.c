


//find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h>
int main() {
    int l,w,h;
    int a;
    printf("Enter length ");
    scanf("%d",&l);
     printf("Enter value of width ");
    scanf("%d",&w);
    printf("Enter value of hight ");
    scanf("%d",&h);

    a = 2 * ((w*l)+(h*l)+(h*w));
    printf("area of a rectangular prism  %d",a);
    return 0;
}



