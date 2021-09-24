/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void intro_pose(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_clock->intro);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.02) {
        if (a->_menu->pos_text.y != -2200)
            a->_menu->pos_text.y -= 2;
        else
            a->_statut->statut = 0;
        sfClock_restart(a->_clock->intro);
    }
}

void my_intro(v_var *a)
{
    sfSprite_setPosition(a->_menu->s_intro, a->_menu->pos_intro);
    sfSprite_setPosition(a->_menu->s_text, a->_menu->pos_text);
    intro_pose(a);
}

void display_intro(v_var *a)
{
    sfSprite_setTextureRect(a->_menu->s_intro, a->_menu->rect_intro);
    sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_intro, NULL);
    sfSprite_setTextureRect(a->_menu->s_text, a->_menu->rect_text);
    sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_text, NULL);
}