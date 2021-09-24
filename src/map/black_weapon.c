/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_black_weapon(v_var *a)
{
    sfSprite_setPosition(a->_weapon->s_agl3, a->_weapon->pos_agl3);
    sfSprite_setPosition(a->_weapon->s_agl3b, a->_weapon->pos_agl3b);
    sfSprite_setPosition(a->_weapon->s_side3, a->_weapon->pos_side3);
    sfSprite_setPosition(a->_weapon->s_side3b, a->_weapon->pos_side3b);
    sfSprite_setPosition(a->_weapon->s_up3, a->_weapon->pos_up1);
    rect_b1(a);
    rect_b2(a);
    rect_b3(a);
}

void display_black_weapon2(v_var *a)
{
    if (a->_statut->eee == 1) {
        sfSprite_setTextureRect(a->_weapon->s_side3b, a->_weapon->rect_side3);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_weapon->s_side3b, NULL);
    }
}

void display_black_weapon(v_var *a)
{
    if (a->_statut->aaa == 1) {
        sfSprite_setTextureRect(a->_weapon->s_agl3, a->_weapon->rect_agl3);
        sfRenderWindow_drawSprite(a->_window->window, a->_weapon->s_agl3, NULL);
    }
    if (a->_statut->bbb == 1) {
        sfSprite_setTextureRect(a->_weapon->s_side3, a->_weapon->rect_side3);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_weapon->s_side3, NULL);
    }
    if (a->_statut->ccc == 1) {
        sfSprite_setTextureRect(a->_weapon->s_up3, a->_weapon->rect_up3);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_weapon->s_up3, NULL);
    }
    if (a->_statut->ddd == 1) {
        sfSprite_setTextureRect(a->_weapon->s_agl3b, a->_weapon->rect_agl3);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_weapon->s_agl3b, NULL);
    }
    display_black_weapon2(a);
}