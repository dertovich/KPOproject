#include "../game_head.h"

int	enemy_animation(t_var *var)
{
	if (var->enemy.pos.x % 2 == 0)
		var->img.img_ptr = mlx_xpm_file_to_image(var->mlx, "./img/enemy1.xpm",
				&var->img.size.x, &var->img.size.y);
	else
		var->img.img_ptr = mlx_xpm_file_to_image(var->mlx, "./img/enemy2.xpm",
				&var->img.size.x, &var->img.size.y);
	return (0);
}
