#include <lapin.h>
#include <unistd.h>
#include <stdlib.h>
void clear_pixelarray(t_bunny_pixelarray *pxa, unsigned int color);




void stu_draw_line(t_bunny_pixelarray *px,
                   t_bunny_position   *pos_a,
                   t_bunny_position   *pos_b,
                   unsigned int       color);

int main(void)
{
    t_bunny_window *win;
    t_bunny_pixelarray *px;
    t_bunny_position origin;
    t_bunny_position pos_a;
    t_bunny_position pos_b;
    int l;
    int h;

    l = 800;
    h = 600;
    win = bunny_start(l, h, false, "fl: Open a window tutorial");
    px = bunny_new_pixelarray(l, h);
    origin.x = 0;
    origin.y = 0;
    pos_a.x = l ;
    pos_a.y = 0;
    pos_b.x = 0;
    pos_b.y = h;
    clear_pixelarray(px, YELLOW);
    stu_draw_line(px, &pos_a, &pos_b, RED);
    bunny_blit(&win->buffer, &px->clipable, &origin);
    bunny_display(win);
    /*int i;
    int j;
    j = 0;
    i = 0;
    while(pos_a.x < l) {
        pos_a.x += 1;
        pos_b.x -= 1;
        i += 1;
    }
        while(pos_a.y < h) {
         stu_draw_line(px, &pos_b, &pos_a, RED);
         bunny_blit(&win->buffer, &px->clipable, &origin);
         bunny_display(win);
         pos_a.y += 1;
         pos_b.y -= 1;
         j += 1;
         }*/
    usleep(1e6);
    bunny_stop(win);
    return (EXIT_SUCCESS);
}
