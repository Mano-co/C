 #include<stdio.h>
 int main()
 {
    int x =10;
    int *p=NULL,*q=NULL;
    p=&x;
    //*q=20;
    printf("\n*p=%d",*p);
    //printf("*\n*q=%d",*q);
    int **r;
    r=&p;
    printf("\nx=%d,*p=%d,**r=%d",x,*p,**r);
    return 0;
 }
