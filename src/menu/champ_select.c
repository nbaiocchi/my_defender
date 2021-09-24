/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_champ_select(v_var *a)
{
    sfSprite_setPosition(a->_champ->s_choice, a->_champ->pos_choice);
    sfSprite_setPosition(a->_menu->s_red, a->_menu->pos_red);
}

void display_champ_select(v_var *a)
{
    sfSprite_setTextureRect(a->_champ->s_choice, a->_champ->rect_choice);
    sfRenderWindow_drawSprite(a->_window->window, a->_champ->s_choice, NULL);
    if (a->_statut->squa_a == 1) {
        sfSprite_setTextureRect(a->_menu->s_red, a->_menu->rect_red);
        sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_red, NULL);
        a->_statut->squa_a = 0;
    }
}

void my_score(v_var *a)
{
    a->_menu->sco += 1;
    if (a->_menu->sco == 6) {
        a->_statut->money += 1;
        a->_menu->sco = 0;
        a->_menu->str = my_convert_int(a->_statut->money);
    }
    sfText_setString(a->_menu->score, a->_menu->str);
    sfText_setFont(a->_menu->score, a->_menu->font);
    sfText_setCharacterSize(a->_menu->score, 80);
    sfText_setColor(a->_menu->score, sfBlack);
    sfText_setPosition(a->_menu->score, a->_menu->pose_life);
    sfRenderWindow_drawText(a->_window->window, a->_menu->score, NULL);
}