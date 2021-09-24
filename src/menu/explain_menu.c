/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_explain(v_var *a)
{
    sfSprite_setPosition(a->_menu->s_explain, a->_menu->pos_explain);
}

void display_explain(v_var *a)
{
    sfSprite_setTextureRect(a->_menu->s_explain, a->_menu->rect_explain);
    sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_explain, NULL);
}