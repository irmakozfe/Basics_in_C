#include <stdio.h>
long **foo1[10];
//pointer of pointer


int foo(int (*f) ())
{
    int r= f();
    return r;
}

int random()
{

}
int main()
{
    long a=1;
    long *pa=&a;
    foo1[0]=&pa;

    foo(&random);
}