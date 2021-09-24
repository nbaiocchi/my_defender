/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_green_weapon(v_var *a)
{
    sfSprite_setPosition(a->_weapon->s_agl1, a->_weapon->pos_agl1);
    sfSprite_setPosition(a->_weapon->s_agl1b, a->_weapon->pos_agl1b);
    sfSprite_setPosition(a->_weapon->s_side1, a->_weapon->pos_side1);
    sfSprite_setPosition(a->_weapon->s_side1b, a->_weapon->pos_side1b);
    sfSprite_setPosition(a->_weapon->s_up1, a->_weapon->pos_up1);
    rect_g1(a);
    rect_g2(a);
    rect_g3(a);
}

void display_green_weapon2(v_var *a)
{
    if (a->_statut->e == 1) {
        sfSprite_setTextureRect(a->_weapon->s_side1b, a->_weapon->rect_side1);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_weapon->s_side1b, NULL);
    }
}

void display_green_weapon(v_var *a)
{
    if (a->_statut->a == 1) {
        sfSprite_setTextureRect(a->_weapon->s_agl1, a->_weapon->rect_agl1);
        sfRenderWindow_drawSprite(a->_window->window, a->_weapon->s_agl1, NULL);
    }
    if (a->_statut->b == 1) {
        sfSprite_setTextureRect(a->_weapon->s_side1, a->_weapon->rect_side1);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_weapon->s_side1, NULL);
    }
    if (a->_statut->c == 1) {
        sfSprite_setTextureRect(a->_weapon->s_up1, a->_weapon->rect_up1);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_weapon->s_up1, NULL);
    }
    if (a->_statut->d == 1) {
        sfSprite_setTextureRect(a->_weapon->s_agl1b, a->_weapon->rect_agl1);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_weapon->s_agl1b, NULL);
    }
    display_green_weapon2(a);
}