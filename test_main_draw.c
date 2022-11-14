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

     win = bunny_start(800, 600, false, "fl: Open a window tutorial");
     px = bunny_new_pixelarray(800, 600);
     origin.x = 0;
     origin.y = 0;
     pos_a.x = 800;
     pos_a.y = 0;
     pos_b.x = 0;
     pos_b.y = 600;
     clear_pixelarray(px, WHITE);
     // [votre code ou vous modifiez le pixel buffer]
     stu_draw_line(px, &pos_a, &pos_b, RED);
     bunny_blit(&win->buffer, &px->clipable, &origin);
     bunny_display(win);
     usleep(1e7);
     bunny_stop(win);
     return (EXIT_SUCCESS);
}
