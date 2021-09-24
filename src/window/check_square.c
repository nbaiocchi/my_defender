/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void check_squareb(v_var *a)
{
    if (a->_window->mouse.x > 450 && a->_window->mouse.x < 541
    && a->_window->mouse.y > 12 && a->_window->mouse.y < 101) {
        sfSound_play(a->_window->gun);
        a->_menu->pos_red.x = 440;
        a->_menu->pos_red.y = 2;
        a->_statut->squa_a = 1;
        a->_statut->sq_c = 1;
    }
    if (a->_window->mouse.x > 666 && a->_window->mouse.x < 754
    && a->_window->mouse.y > 12 && a->_window->mouse.y < 101) {
        a->_menu->pos_red.x = 656;
        a->_menu->pos_red.y = 2;
        a->_statut->squa_a = 1;
        a->_statut->sq_d = 1;
    }
    pose_weapon_first(a);
    pose_weapon_second(a);
    pose_weapon_third(a);
    pose_upgrade(a);
    pose_upgrade_2(a);
}

void check_square(v_var *a)
{
    if (a->_window->mouse.x > 44 && a->_window->mouse.x < 134
    && a->_window->mouse.y > 12 && a->_window->mouse.y < 101) {
        sfSound_play(a->_window->gun);
        a->_menu->pos_red.x = 34;
        a->_menu->pos_red.y = 2;
        a->_statut->squa_a = 1;
        a->_statut->sq_a = 1;
    }
    if (a->_window->mouse.x > 242 && a->_window->mouse.x < 332
    && a->_window->mouse.y > 12 && a->_window->mouse.y < 101) {
        sfSound_play(a->_window->gun);
        a->_menu->pos_red.x = 233;
        a->_menu->pos_red.y = 2;
        a->_statut->squa_a = 1;
        a->_statut->sq_b = 1;
    }
    check_squareb(a);
}