/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:42:42 by mtrautne          #+#    #+#             */
/*   Updated: 2023/07/30 21:05:52 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// base variables
typedef struct s_vars {
	// !game environment
	// image and window size
	double img_width;
	double img_height;
	// mlx pointers/values
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;
	char	*img_data_addr;
	// mlx random values
	int		bits_p_px;
	int		ln_len;
	int		endian;
	// source file adresses
	char	*map_filename;
	int		mapfile_fd; //close on return
	char	map_str[2048];
	int		map_width;
	int		map_height;
	char	**map; //free on return
	char	*tx_n;
	char	*tx_s;
	char	*tx_e;
	char	*tx_w;
	// floor and sky color;
	int		floor_clr;
	int		sky_clr;

	// !player
	// player position
	double	pos_x;
	double	pos_y;
	int		grid_x;
	int		grid_y;
	// len of ray to next grid block border
	double	side_dist_x;
	double	side_dist_y;
	// len of ray from one grid block border to the next
	double	full_dist_x;
	double	full_dist_y;
	// view direction
	double	v_dir_x;
	double	v_dir_y;
	// real x translated into camera plane space
	double	cam_x;
	// camera plane vector
	double	plane_x;
	double	plane_y;
	// ray direction
	double	r_dir_x;
	double	r_dir_y;
	// perpendicular wall distance to camera plane (avoid fisheye effect)
	double	p_w_dist;
	// calculation steps and variables for ray propagation
	double	step_x;
	double	step_y;
	// which side was hit (w for side facing to the west, n for side facing towards north)?
	char	side;

	//wall height
	unsigned int		wall_height;
	unsigned int		wall_color;
	

	// !delete later
	char	**av;
	int		ac;
}	t_vars;
