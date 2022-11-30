#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx-linux/mlx.h"
# include "ft_printf/include/ft_printf.h"
# include "get_next_line/get_next_line.h"

# define TILE_WIDTH 80

# define WALL1 "./assets/wall_1.xpm"
# define WALL2 "./assets/wall_2.xpm"
# define WALL3 "./assets/wall_3.xpm"
# define HEART "./assets/heart.xpm"
# define EXIT "./assets/exit.xpm"
# define FLOOR "./assets/floor.xpm"

# define ENEMY1 "./assets/enemy1.xpm"
# define ENEMY2 "./assets/enemy2.xpm"

# define WINNER "You won!"
# define LOSER "You lose!"

# define RED 0xFF0000
# define GREEN 0x00FF00

typedef struct s_game_map
{
	int		map_height;
	int		map_length;
	int		player_position_x;
	int		player_position_y;
	int		game_score;
	int		max_score;
	char	**map_data;
	int		game_over;
	int		steps;
	void	*end_img;
	void	*wall;
	void	*exit;
	void	*player;
	void	*floor;
	void	*items;
	void	*enemy;
	void	*main_hero;
	void	*heart;
	int		drawpos;
	int		*enemypos;
	int		enemyset;
	char	*error_mes;
}	t_game_map;

typedef struct s_render_v {
    void	*mlx;
    void	*win;
}	t_render_v;

int		create_map(int	argc, char	*argv[], t_game_map	**map);
int		check_mapdata(t_game_map	**map);

int		is_wall(char	*wall);
int		verify_mapname(char	*name);
void	find_player(t_game_map	*map, int *x, int *y);
char	*single_character(char	*line, char	c);
int		checkfy_map(t_game_map	*map);

t_render_v	*start_render(t_game_map	*map);
t_game_map	*control_player(int key, t_game_map	*map);
t_game_map	*key_action(t_game_map	*map, int keycode);
void        	render_basic(t_game_map	*map, t_render_v	**vars);

void	set_start_render(int *c, int *cc);
void	put_img(t_render_v	**vars, void	*p, int x, int y);

int		window_width(t_game_map	*map);
int		window_height(t_game_map	*map);
int		wwc(t_game_map	*map);
int		whc(t_game_map	*map);

int		get_max_score(t_game_map	*map);
int		game_over_score(t_game_map	*map);

void	cleaner(t_game_map	**game_map, t_render_v	**var);
void	clean_mapdata(char	***map_data, int size);
int		error_message(void);

void	wall_img(t_render_v	**vars, t_game_map	**map);
void	heart_img(t_render_v	**vars, t_game_map	**map);
void	exit_img(t_render_v	**vars, t_game_map	**map);
void	floor_img(t_render_v	**vars, t_game_map	**map);

void	main_hero_1(t_render_v	**vars, t_game_map	**map);
void	main_hero_2(t_render_v	**vars, t_game_map	**map);
void	main_hero_3(t_render_v	**vars, t_game_map	**map);
void	main_hero_4(t_render_v	**vars, t_game_map	**map);

void	enemy1(t_render_v	**vars, t_game_map	**map);
void	enemy2(t_render_v	**vars, t_game_map	**map);
int		animation(t_game_map	**map, t_render_v	**var);

int		randomizer(void);
void	set_enemy_pos(t_game_map	**map);
void	enemy_move(t_game_map	**map);
int		game_over(t_game_map	**map, t_render_v	**vars);
void	bonus_enemy(t_game_map	**map);
void	make_steps(t_render_v	**vars, t_game_map	**map);

#endif
