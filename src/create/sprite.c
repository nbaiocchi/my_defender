/*
** EPITECH PROJECT, 2021
** sprite
** File description:
** t
*/

#include "../../include/prototype.h"

void sprite_1(v_var *a)
{
    a->_menu->t_menu = sfTexture_createFromFile("./image/menu.png", NULL);
    a->_menu->s_menu = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_menu,
    a->_menu->t_menu, sfTrue);
    a->_menu->t_poulpi = sfTexture_createFromFile("./image/poulpi.png", NULL);
    a->_menu->s_poulpi = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_poulpi,
    a->_menu->t_poulpi, sfTrue);
    a->_menu->s_poulpi2 = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_poulpi2,
    a->_menu->t_poulpi, sfTrue);
    a->_champ->t_choice = sfTexture_createFromFile("./image/choice.png", NULL);
    a->_champ->s_choice = sfSprite_create();
    sfSprite_setTexture(a->_champ->s_choice,
    a->_champ->t_choice, sfTrue);
    a->_menu->t_pause = sfTexture_createFromFile("./image/pause.png", NULL);
    a->_menu->s_pause = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_pause,
    a->_menu->t_pause, sfTrue);
}

void sprite_2(v_var *a)
{
    a->_menu->t_explain = sfTexture_createFromFile("./image/expl.png", NULL);
    a->_menu->s_explain = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_explain,
    a->_menu->t_explain, sfTrue);
    a->_menu->t_red = sfTexture_createFromFile("./image/s_red.png", NULL);
    a->_menu->s_red = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_red,
    a->_menu->t_red, sfTrue);
    a->_weapon->t_agl1 = sfTexture_createFromFile("./image/agl1.png", NULL);
    a->_weapon->s_agl1 = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_agl1,
    a->_weapon->t_agl1, sfTrue);
    a->_weapon->s_agl1b = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_agl1b,
    a->_weapon->t_agl1, sfTrue);
    a->_weapon->t_side1 = sfTexture_createFromFile("./image/side1.png", NULL);
    a->_weapon->s_side1 = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_side1,
    a->_weapon->t_side1, sfTrue);
    a->_weapon->s_side1b = sfSprite_create();
}

void sprite_3(v_var *a)
{
    sfSprite_setTexture(a->_weapon->s_side1b,
    a->_weapon->t_side1, sfTrue);
    a->_weapon->t_up1 = sfTexture_createFromFile("./image/up1.png", NULL);
    a->_weapon->s_up1 = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_up1,
    a->_weapon->t_up1, sfTrue);
    a->_weapon->t_agl2 = sfTexture_createFromFile("./image/agl2.png", NULL);
    a->_weapon->s_agl2 = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_agl2,
    a->_weapon->t_agl2, sfTrue);
    a->_weapon->s_agl2b = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_agl2b,
    a->_weapon->t_agl2, sfTrue);
    a->_weapon->t_side2 = sfTexture_createFromFile("./image/side2.png", NULL);
    a->_weapon->s_side2 = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_side2,
    a->_weapon->t_side2, sfTrue);
    a->_weapon->s_side2b = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_side2b,
    a->_weapon->t_side2, sfTrue);
}

void sprite_4(v_var *a)
{
    a->_weapon->t_up2 = sfTexture_createFromFile("./image/up2.png", NULL);
    a->_weapon->s_up2 = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_up2,
    a->_weapon->t_up2, sfTrue);
    a->_weapon->t_agl3 = sfTexture_createFromFile("./image/agl3.png", NULL);
    a->_weapon->s_agl3 = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_agl3,
    a->_weapon->t_agl3, sfTrue);
    a->_weapon->s_agl3b = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_agl3b,
    a->_weapon->t_agl3, sfTrue);
    a->_weapon->t_side3 = sfTexture_createFromFile("./image/side3.png", NULL);
    a->_weapon->s_side3 = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_side3,
    a->_weapon->t_side3, sfTrue);
    a->_weapon->s_side3b = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_side3b,
    a->_weapon->t_side3, sfTrue);
}

void sprite(v_var *a)
{
    sprite_1(a);
    sprite_2(a);
    sprite_3(a);
    sprite_4(a);
    a->_weapon->t_up3 = sfTexture_createFromFile("./image/up3.png", NULL);
    a->_weapon->s_up3 = sfSprite_create();
    sfSprite_setTexture(a->_weapon->s_up3,
    a->_weapon->t_up3, sfTrue);
    a->_menu->t_win = sfTexture_createFromFile("./image/win.png", NULL);
    a->_menu->s_win = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_win,
    a->_menu->t_win, sfTrue);
    a->_menu->t_lose = sfTexture_createFromFile("./image/lose1.png", NULL);
    a->_menu->s_lose = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_lose,
    a->_menu->t_lose, sfTrue);
}