/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void cds_upg_b(v_var *a)
{
    if (a->_window->mouse.x > 1356 && a->_window->mouse.x < 1445
    && a->_window->mouse.y > 340 && a->_window->mouse.y < 430 &&
    a->_statut->sq_d == 1 && a->_statut->dd == 1 && a->_statut->money > 100) {
        a->_statut->ddd = 1;
        a->_statut->dd = 0;
        a->_statut->sq_d = 0;
        a->_statut->money -= 100;
    } else if (a->_window->mouse.x > 1685 && a->_window->mouse.x < 1775
    && a->_window->mouse.y > 85 && a->_window->mouse.y < 175 &&
    a->_statut->sq_d == 1 && a->_statut->ee == 1 && a->_statut->money > 100) {
        a->_statut->eee = 1;
        a->_statut->ee = 0;
        a->_statut->sq_d = 0;
    }
}

void cds_upg(v_var *a)
{
    if (a->_window->mouse.x > 1356 && a->_window->mouse.x < 1445
    && a->_window->mouse.y > 340 && a->_window->mouse.y < 430 &&
    a->_statut->sq_d == 1 && a->_statut->d == 1 && a->_statut->money > 100) {
        a->_statut->dd = 1;
        a->_statut->d = 0;
        a->_statut->sq_d = 0;
        a->_statut->money -= 100;
    } else if (a->_window->mouse.x > 1685 && a->_window->mouse.x < 1775
    && a->_window->mouse.y > 85 && a->_window->mouse.y < 175 &&
    a->_statut->sq_d == 1 && a->_statut->e == 1 && a->_statut->money > 100) {
        a->_statut->ee = 1;
        a->_statut->e = 0;
        a->_statut->sq_d = 0;
        a->_statut->money -= 100;
    }
}