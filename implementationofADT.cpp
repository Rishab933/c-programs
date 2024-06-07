#include<stdio.h>
#include<stdlib.h>
struct myArray
{
    int totalsize;
    int usedsize;
    int *ptr;
};
void creatArray(struct myArray*a,int tsize,int usize)
{
    a->totalsize=tsize;
    a->usedsize=usize;
    int *ptr=(int*)malloc(sizeof(int));
    a->ptr=(int*)malloc(tsize*sizeof(int));
}

void show(struct myArray*a)
{
    for(int i=0;i<a->usedsize;i++)
    {
        printf("%d ",(a->ptr)[i]);
    }
    }
    void setval(struct myArray*a){
        int n;
        for(int i=0;i<a->usedsize;i++)
        {
            printf("enter the element: ");
            scanf("%d",&n);
            (a->ptr)[i]=n;
        }

    }
    int main()
    {
        struct myArray marks;
        int a,b=0;
        printf("enter the total size of the array: ");
        scanf("%d",&a);
        printf("enter the size of the array that is to be used: ");
        scanf("%d",&b);
        creatArray(&marks,a,b);
        setval(&marks);
        printf("The elements in the array are:\n");
        show(&marks);
        return 0;
    }
