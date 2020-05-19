#include <windows.h>
#include "uframework.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{initialize("Ejemplo uFramework", 800, 600, false);
create_sprite("s_player1", 10);
create_sprite("s_player", 10);
create_sprite("s_player2", 1);
create_sprite("s_player0", 1);
create_sprite("s_player3", 10);
create_sprite("s_player4", 1);
create_sprite("s_player5", 10);
create_sprite("s_player6", 1);
create_sprite("s_block",1);
create_sprite("s_block1",1);
create_sprite("s_block2",1);
create_sprite("s_block3",1);
create_sprite("s_background",1);


int x_wall;
int y_wall;
x_wall=0;
y_wall=536;




add_frame_to_sprite("s_background","block_07.png");

add_frame_to_sprite("s_block","crate_03.png");
add_frame_to_sprite("s_block1","crate_15.png");
add_frame_to_sprite("s_block2","crate_06.png");
add_frame_to_sprite("s_block3","block_05.png");

{


add_frame_to_sprite("s_player0", "player_23.png");

add_frame_to_sprite("s_player", "player_23.png");
add_frame_to_sprite("s_player", "player_24.png");
add_frame_to_sprite("s_player", "player_23.png");
add_frame_to_sprite("s_player", "player_01.png");

add_frame_to_sprite("s_player2","player_11.png");

add_frame_to_sprite("s_player1", "player_11.png");
add_frame_to_sprite("s_player1", "player_12.png");
add_frame_to_sprite("s_player1", "player_11.png");
add_frame_to_sprite("s_player1", "player_13.png");

add_frame_to_sprite("s_player4","player_14.png");

add_frame_to_sprite("s_player3","player_14.png");
add_frame_to_sprite("s_player3","player_15.png");
add_frame_to_sprite("s_player3","player_14.png");
add_frame_to_sprite("s_player3","player_16.png");

add_frame_to_sprite("s_player6","player_02.png");

add_frame_to_sprite("s_player5","player_02.png");
add_frame_to_sprite("s_player5","player_03.png");
add_frame_to_sprite("s_player5","player_02.png");
add_frame_to_sprite("s_player5","player_04.png");
}


{add_indexed_object("o_background",-200,0,1200,600,"s_background");

{
    add_indexed_object("o_player", 370, 20, 64, 64, "s_player0");
{
    add_indexed_object("o_crate2",306,144,192,64,"s_block2");
    add_indexed_object("o_box",370,184,64,64,"s_block1");
    add_indexed_object("o_crate",50,120,64,64,"s_block");
    add_indexed_object("o_3",x_wall,y_wall,64,64,"s_block3");
    if (x_wall=800==false)
{
        move_indexed_object_origin("o_3",64,0);
        x_wall=x_wall+64;
}





int izq;
int der;
int up;
int down;


while(!is_window_closed())
{
    bool k_left = is_key_pressed("left");
    bool k_right = is_key_pressed("right");
    bool k_up = is_key_pressed("up");
    bool k_down = is_key_pressed("down");







Sleep(3);
}
return 0;
}
