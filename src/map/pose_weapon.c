/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void pose_weapon_first3(v_var *a)
{
    if (a->_window->mouse.x > 1685 && a->_window->mouse.x < 1778
    && a->_window->mouse.y > 53 && a->_window->mouse.y < 175 &&
    a->_statut->sq_a == 1 && a->_statut->money >= 100) {
        a->_statut->eee = 0;
        a->_statut->ee = 0;
        a->_statut->e = 1;
        a->_statut->sq_a = 0;
        a->_statut->money -= 100;
    }
}

void pose_weapon_first2(v_var *a)
{
    if (a->_window->mouse.x > 1023 && a->_window->mouse.x < 1112
    && a->_window->mouse.y > 647 && a->_window->mouse.y < 736 &&
    a->_statut->sq_a == 1 && a->_statut->money >= 100) {
        a->_statut->ccc = 0;
        a->_statut->cc = 0;
        a->_statut->c = 1;
        a->_statut->sq_a = 0;
        a->_statut->money -= 100;
    }
    if (a->_window->mouse.x > 1368 && a->_window->mouse.x < 1458
    && a->_window->mouse.y > 340 && a->_window->mouse.y < 430 &&
    a->_statut->sq_a == 1 && a->_statut->money >= 100) {
        a->_statut->ddd = 0;
        a->_statut->dd = 0;
        a->_statut->d = 1;
        a->_statut->sq_a = 0;
        a->_statut->money -= 100;
    }
    pose_weapon_first3(a);
}

void pose_weapon_first(v_var *a)
{
    if (a->_window->mouse.x > 175 && a->_window->mouse.x < 265
    && a->_window->mouse.y > 340 && a->_window->mouse.y < 430 &&
    a->_statut->sq_a == 1 && a->_statut->money >= 100) {
        a->_statut->aaa = 0;
        a->_statut->aa = 0;
        a->_statut->a = 1;
        a->_statut->sq_a = 0;
        a->_statut->money -= 100;
    }
    if (a->_window->mouse.x > 335 && a->_window->mouse.x < 425
    && a->_window->mouse.y > 647 && a->_window->mouse.y < 736 &&
    a->_statut->sq_a == 1 && a->_statut->money >= 100) {
        a->_statut->bbb = 0;
        a->_statut->bb = 0;
        a->_statut->b = 1;
        a->_statut->sq_a = 0;
        a->_statut->money -= 100;
    }
    pose_weapon_first2(a);
}

void pose_weapon_second(v_var *a)
{
    if (a->_window->mouse.x > 175 && a->_window->mouse.x < 265
    && a->_window->mouse.y > 340 && a->_window->mouse.y < 430 &&
    a->_statut->sq_b == 1 && a->_statut->money >= 200) {
        a->_statut->aaa = 0;
        a->_statut->aa = 1;
        a->_statut->a = 0;
        a->_statut->sq_b = 0;
        a->_statut->money -= 200;
    }
    if (a->_window->mouse.x > 335 && a->_window->mouse.x < 425
    && a->_window->mouse.y > 647 && a->_window->mouse.y < 736 &&
    a->_statut->sq_b == 1 && a->_statut->money >= 200) {
        a->_statut->bbb = 0;
        a->_statut->bb = 1;
        a->_statut->b = 0;
        a->_statut->sq_b = 0;
        a->_statut->money -= 200;
    }
    pose_weapon_second2(a);
}

void pose_weapon_third(v_var *a)
{
    if (a->_window->mouse.x > 175 && a->_window->mouse.x < 265
    && a->_window->mouse.y > 340 && a->_window->mouse.y < 430 &&
    a->_statut->sq_c == 1 && a->_statut->money >= 300) {
        a->_statut->aaa = 1;
        a->_statut->aa = 0;
        a->_statut->a = 0;
        a->_statut->sq_c = 0;
        a->_statut->money -= 300;
    }
    if (a->_window->mouse.x > 335 && a->_window->mouse.x < 425
    && a->_window->mouse.y > 647 && a->_window->mouse.y < 736 &&
    a->_statut->sq_c == 1 && a->_statut->money >= 300) {
        a->_statut->bbb = 1;
        a->_statut->bb = 0;
        a->_statut->b = 0;
        a->_statut->sq_c = 0;
        a->_statut->money -= 300;
    }
    pose_weapon_third2(a);
}