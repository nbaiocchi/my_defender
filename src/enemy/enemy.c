/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_enemy(v_var *a)
{
    for (int i = 0; i != a->_champ->size; i += 1) {
        sfSprite_setPosition(a->_enemy[i].s_emy, a->_enemy[i].pos_emy);
    }
    sfSprite_setPosition(a->_menu->s_win, a->_menu->pos_lose);
    sfSprite_setPosition(a->_menu->s_lose, a->_menu->pos_lose);
    pose_emy(a);
}

void display_end(v_var *a)
{
    if (a->_statut->win == 1) {
        sfSprite_setTextureRect(a->_menu->s_win, a->_menu->rect_win);
        sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_win, NULL);
    }
    if (a->_statut->win == 2) {
        sfSprite_setTextureRect(a->_menu->s_lose, a->_menu->rect_lose);
        sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_lose, NULL);
    }
}

void display_enemy(v_var *a)
{
    for (int i = 0; i != a->_champ->size; i += 1) {
        shoot_life(a, i);
        shoot_life_2(a, i);
        shoot_life_3(a, i);
        shoot_life_4(a, i);
        shoot_life_5(a, i);
        if (a->_enemy[i].life > 0) {
            sfSprite_setTextureRect(a->_enemy[i].s_emy, a->_enemy[i].rect_emy);
            sfRenderWindow_drawSprite(a->_window->window,
            a->_enemy[i].s_emy, NULL);
        }
        if (a->_enemy[i].pos_emy.y < 0 && a->_enemy[i].life > 0)
            a->_statut->win = 2;
    }
    if (a->_enemy[299].life <= 0)
        a->_statut->win = 1;
    display_end(a);
}