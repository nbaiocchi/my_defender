/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_pause(v_var *a)
{
    sfSprite_setPosition(a->_menu->s_pause, a->_menu->pos_pause);
}

void display_pause(v_var *a)
{
    sfSprite_setTextureRect(a->_menu->s_pause, a->_menu->rect_pause);
    sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_pause, NULL);
}