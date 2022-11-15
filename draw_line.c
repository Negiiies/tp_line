/*
 * E89 Pedagogical & Technical Lab
 * project:     je suis chinois
 * created on:  2022-11-08 - 16:41 +0100
 * 1st author:  dylan.le - dylan.le
 * description: je fais des nike
 */

#include <lapin.h>
float get_ratio(int a, int b, int x);

int get_value(int a, int b, float ratio);

void put_pixel(t_bunny_pixelarray *pxa,
               t_bunny_position *pos,
               unsigned int color);



void stu_draw_line(t_bunny_pixelarray *px,
                   t_bunny_position   *pos_a,
                   t_bunny_position   *pos_b,
                   unsigned int       color)
{
    int i;
    int j;
    t_bunny_position pos;
    //int z;
    int a;
    int b;
    int c;
    int d;
    // int m;

    a = pos_a->x;
    b = pos_a->y;
    c = pos_b->x;
    d = pos_b->y;
    /*  if (pos_a->x >= pos_b->x) {
        z = pos_a->x;
        pos_a-> x = pos_b->x;
        pos_b-> x = z ;
    }
    if (pos_a-> y >= pos_b->y){
        m = pos_a-> y;
        pos_a-> y = pos_b->y;
        pos_b-> y = m;
    }
    */

    i = pos_a-> x;
    j = pos_a-> y;
    if (pos_b-> x - pos_a-> x >= pos_b-> y - pos_a-> y) {
        while(i != pos_b-> x){
            pos.x = i;
            pos.y = get_value(b, d, get_ratio(a, c, i));
            put_pixel(px, &pos, color);
            i += 1;
        }
    } else {
        while(j != pos_b-> y ){
            pos.y = j;
            pos.x = get_value(a, c, get_ratio(b, d, j));
            put_pixel(px, &pos, color);
            j += 1;
        }
    }
}
