/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_red_weapon(v_var *a)
{
    sfSprite_setPosition(a->_weapon->s_agl2, a->_weapon->pos_agl2);
    sfSprite_setPosition(a->_weapon->s_agl2b, a->_weapon->pos_agl2b);
    sfSprite_setPosition(a->_weapon->s_side2, a->_weapon->pos_side2);
    sfSprite_setPosition(a->_weapon->s_side2b, a->_weapon->pos_side2b);
    sfSprite_setPosition(a->_weapon->s_up2, a->_weapon->pos_up2);
    rect_r1(a);
    rect_r2(a);
    rect_r3(a);
}

void display_red_weapon2(v_var *a)
{
    if (a->_statut->ee == 1) {
        sfSprite_setTextureRect(a->_weapon->s_side2b, a->_weapon->rect_side2);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_weapon->s_side2b, NULL);
    }
}

void display_red_weapon(v_var *a)
{
    if (a->_statut->aa == 1) {
        sfSprite_setTextureRect(a->_weapon->s_agl2, a->_weapon->rect_agl2);
        sfRenderWindow_drawSprite(a->_window->window, a->_weapon->s_agl2, NULL);
    }
    if (a->_statut->bb == 1) {
        sfSprite_setTextureRect(a->_weapon->s_side2, a->_weapon->rect_side2);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_weapon->s_side2, NULL);
    }
    if (a->_statut->cc == 1) {
        sfSprite_setTextureRect(a->_weapon->s_up2, a->_weapon->rect_up2);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_weapon->s_up2, NULL);
    }
    if (a->_statut->dd == 1) {
        sfSprite_setTextureRect(a->_weapon->s_agl2b, a->_weapon->rect_agl2);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_weapon->s_agl2b, NULL);
    }
    display_red_weapon2(a);
}