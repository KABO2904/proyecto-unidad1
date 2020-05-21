#include <windows.h>
#include "uframework.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>






int main()
{initialize("Honey & Money", 800, 600, false);








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
create_sprite("s_block4",1);
create_sprite("s_block5",1);
create_sprite("s_block6",1);
create_sprite("s_block7",1);
create_sprite("s_block8",1);
create_sprite("s_block9",1);
create_sprite("s_block10",1);
create_sprite("s_block11",1);
create_sprite("s_block12",1);
create_sprite("s_telon",1);
create_sprite("s_comp",1);
create_sprite("s_comp2",1);
create_sprite("s_background",1);
create_sprite("s_obs",1);
create_sprite("s_obs1",1);
create_sprite("s_obs2",1);
create_sprite("s_obs3",1);
create_sprite("s_obs4",1);
create_sprite("s_obs5",1);
create_sprite("s_obs6",1);
create_sprite("s_obs7",1);
create_sprite("s_obs8",1);






add_frame_to_sprite("s_background","block_07.png");

add_frame_to_sprite("s_obs","crate_02.png");
add_frame_to_sprite("s_obs1","crate_22.png");


add_frame_to_sprite("s_comp2","crate_08.png");
add_frame_to_sprite("s_comp","crate_08 - copia.png");
add_frame_to_sprite("s_block9","block_05 - copia (7).png");
add_frame_to_sprite("s_block10","block_05 - copia (8).png");
add_frame_to_sprite("s_block11","block_05 - copia (9).png");
add_frame_to_sprite("s_block12","block_05 - copia (10).png");
add_frame_to_sprite("s_block8","block_05 - copia.png");
add_frame_to_sprite("s_block5","block_05 - copia (3).png");
add_frame_to_sprite("s_block6","block_05 - copia (4).png");
add_frame_to_sprite("s_block7","block_05 - copia (5).png");
add_frame_to_sprite("s_block4","block_05 - copia (2).png");
add_frame_to_sprite("s_block","crate_03.png");
add_frame_to_sprite("s_block1","crate_15.png");
add_frame_to_sprite("s_block2","crate_06.png");
add_frame_to_sprite("s_block3","block_05.png");




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



float x_player;
float y_player;

    x_player=370;
    y_player=25;


    float speed;
    speed=1;

float x_block;
float y_block;
x_block=590;
y_block=144;


{add_indexed_object("o_background",-200,0,1200,600,"s_background");
{
    add_indexed_object("o_player",x_player , y_player, 64, 64, "s_player0");

{
    add_indexed_object("o_obs",590,184,64,64,"s_obs");
    add_indexed_object("o_crate2",306,144,192,64,"s_block2");
    add_indexed_object("o_box",370,184,64,64,"s_block1");
    add_indexed_object("o_crate",x_block,y_block,64,64,"s_block");
    add_indexed_object("o_obs1",590,224,64,64,"s_obs1");


    //encima de todo

    {

    add_indexed_object("o_1",0,568,160,64,"s_block3");
    add_indexed_object("o_2",160,568,160,64,"s_block4");
    add_indexed_object("o_3",320,568,160,64,"s_block5");
    add_indexed_object("o_4",480,568,160,64,"s_block6");
    add_indexed_object("o_5",640,568,160,64,"s_block7");
    add_indexed_object("o_6",0,-32,160,64,"s_block8");
    add_indexed_object("o_7",160,-32,160,64,"s_block9");
    add_indexed_object("o_8",320,-32,160,64,"s_block10");
    add_indexed_object("o_9",480,-32,160,64,"s_block11");
    {add_indexed_object("o_co2",736,0,64,600,"s_comp2");
    add_indexed_object("o_co",0,0,64,600,"s_comp");
    add_indexed_object("o_10",640,-32,160,64,"s_block12");


    }


    }

}
}
}





while(!is_window_closed())
{
    bool k_left = is_key_pressed("left");
    bool k_right = is_key_pressed("right");
    bool k_up = is_key_pressed("up");
    bool k_down = is_key_pressed("down");




    if(k_right==false&k_left==false&k_up==false&k_down==false)
    {
     set_indexed_object_sprite("o_player","s_player0");
    }

     if(k_left == true&k_down==false&k_up==false&k_right==false)
    {
     if (x_player+7>=64)
    {
     set_indexed_object_sprite("o_player","s_player3");
     x_player=x_player-speed;
    }
    }
     else if ( k_right == true&k_down==false&k_up==false&k_left==false )
    {
         if (x_player+57<=736)
        {
     set_indexed_object_sprite("o_player", "s_player1");
     x_player=x_player+speed;
        }
    }
    if(k_down==true&k_up==false)
    {
    if (y_player+60<=568)
    {
     set_indexed_object_sprite("o_player","s_player");
     y_player=y_player+speed;
    }
    }
     else if (k_up==true&k_down==false)
    {
    if (y_player+10>=36)
    {
     set_indexed_object_sprite("o_player","s_player5");
     y_player=y_player-speed;
    }
    }
     set_indexed_object_origin("o_player",x_player,y_player);




Sleep(3);
}
return 0;
}
