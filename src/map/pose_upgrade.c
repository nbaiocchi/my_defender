/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void cds_upgrade(v_var *a)
{
    if (a->_window->mouse.x > 1020 && a->_window->mouse.x < 1110
    && a->_window->mouse.y > 650 && a->_window->mouse.y < 736 &&
    a->_statut->sq_d == 1 && a->_statut->c == 1 && a->_statut->money > 100) {
        a->_statut->cc = 1;
        a->_statut->c = 0;
        a->_statut->sq_d = 0;
        a->_statut->money -= 100;
    }
    cds_upg(a);
}

void pose_upgrade(v_var *a)
{
    if (a->_window->mouse.x > 175 && a->_window->mouse.x < 260
    && a->_window->mouse.y > 340 && a->_window->mouse.y < 430 &&
    a->_statut->sq_d == 1 && a->_statut->a == 1 && a->_statut->money > 100) {
        a->_statut->aa = 1;
        a->_statut->a = 0;
        a->_statut->sq_d = 0;
        a->_statut->money -= 100;
    }
    if (a->_window->mouse.x > 335 && a->_window->mouse.x < 425
    && a->_window->mouse.y > 645 && a->_window->mouse.y < 735 &&
    a->_statut->sq_d == 1 && a->_statut->b == 1 && a->_statut->money > 100) {
        a->_statut->bb = 1;
        a->_statut->b = 0;
        a->_statut->sq_d = 0;
        a->_statut->money -= 100;
    }
    cds_upgrade(a);
}

void cds_b_upgrade(v_var *a)
{
    if (a->_window->mouse.x > 1020 && a->_window->mouse.x < 1110
    && a->_window->mouse.y > 650 && a->_window->mouse.y < 736 &&
    a->_statut->sq_d == 1 && a->_statut->cc == 1 && a->_statut->money > 100) {
        a->_statut->ccc = 1;
        a->_statut->cc = 0;
        a->_statut->sq_d = 0;
        a->_statut->money -= 100;
    }
    cds_upg_b(a);
}

void pose_upgrade_2(v_var *a)
{
    if (a->_window->mouse.x > 175 && a->_window->mouse.x < 260
    && a->_window->mouse.y > 340 && a->_window->mouse.y < 430 &&
    a->_statut->sq_d == 1 && a->_statut->aa == 1 && a->_statut->money > 100) {
        a->_statut->aaa = 1;
        a->_statut->aa = 0;
        a->_statut->sq_d = 0;
        a->_statut->money -= 100;
    }
    if (a->_window->mouse.x > 335 && a->_window->mouse.x < 425
    && a->_window->mouse.y > 645 && a->_window->mouse.y < 735 &&
    a->_statut->sq_d == 1 && a->_statut->bb == 1 && a->_statut->money > 100) {
        a->_statut->bbb = 1;
        a->_statut->bb = 0;
        a->_statut->sq_d = 0;
        a->_statut->money -= 100;
    }
    cds_b_upgrade(a);
}