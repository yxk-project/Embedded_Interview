//参考 https://www.jb51.net/article/259518.htm

#include "./include/class.h"
#include <stdio.h>  /* for printf() */
 
// 构造函数
void Shape_ctor(Shape * const me, int16_t x, int16_t y)
{
    me->x = x;
    me->y = y;
}
 
void Shape_moveBy(Shape * const me, int16_t dx, int16_t dy) 
{
    me->x += dx;
    me->y += dy;
}
 
// 获取属性值函数
int16_t Shape_getX(Shape const * const me) 
{
    return me->x;
}
int16_t Shape_getY(Shape const * const me) 
{
    return me->y;
}

int main() 
{
    Shape s1, s2; /* multiple instances of Shape */
 
    Shape_ctor(&s1, 0, 1);
    Shape_ctor(&s2, -1, 2);
 
    printf("Shape s1(x=%d,y=%d)\n", Shape_getX(&s1), Shape_getY(&s1));
    printf("Shape s2(x=%d,y=%d)\n", Shape_getX(&s2), Shape_getY(&s2));
 
    Shape_moveBy(&s1, 2, -4);
    Shape_moveBy(&s2, 1, -2);
 
    printf("Shape s1(x=%d,y=%d)\n", Shape_getX(&s1), Shape_getY(&s1));
    printf("Shape s2(x=%d,y=%d)\n", Shape_getX(&s2), Shape_getY(&s2));
 
    return 0;
}