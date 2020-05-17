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

add_indexed_object("o_player", 100, 400, 64, 64, "s_player0");


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

    if(k_left == true)
    {
        set_indexed_object_sprite("o_player","s_player3");
        move_indexed_object_origin("o_player", -1, 0);

        down==false;
        der==false;
        up==false;
        izq==true;
    }
    else if( k_right == true )
    {
        set_indexed_object_sprite("o_player", "s_player1");
        move_indexed_object_origin("o_player", +1, 0);
        down==false;
        der==true;
        up==false;
        izq==false;

    }
    if(k_up==true)
    {
        set_indexed_object_sprite("o_player","s_player5");
        move_indexed_object_origin("o_player", 0,-1);

        down==false;
        der==false;
        up==true;
        izq==false;
    }
     else if(k_down==true)
    {
        set_indexed_object_sprite("o_player","s_player");
        move_indexed_object_origin("o_player", 0,+1);

        down==true;
        der==false;
        up==false;
        izq==false;
    }



    if(k_down&k_right==true)
    {
        move_indexed_object_origin("o_player",-1,0);
    }
    if(k_down&k_left==true)
    {
      move_indexed_object_origin("o_player",+1,0);
    }
    if(k_right&k_left==true)
    {
        move_indexed_object_origin("o_player",+1,0);
    }
     if(k_up&k_right==true)
    {
        move_indexed_object_origin("o_player",-1,0);
    }
    if(k_up&k_left==true)
    {
      move_indexed_object_origin("o_player",+1,0);
    }






Sleep(3);
}
return 0;
}
