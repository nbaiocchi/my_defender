/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void shoot_life(v_var *a, int i)
{
    if (a->_enemy[i].pos_emy.y > 480 && a->_enemy[i].pos_emy.y < 590 &&
    a->_enemy[i].pos_emy.x > 150 && a->_enemy[i].pos_emy.x < 300 &&
    a->_statut->a == 1 && a->_enemy[i].a == 0) {
        a->_enemy[i].life -= 35;
        a->_enemy[i].a = 1;
    }
    if (a->_enemy[i].pos_emy.y > 480 && a->_enemy[i].pos_emy.y < 590 &&
    a->_enemy[i].pos_emy.x > 150 && a->_enemy[i].pos_emy.x < 300 &&
    a->_statut->aa == 1 && a->_enemy[i].a == 0) {
        a->_enemy[i].life -= 65;
        a->_enemy[i].a = 1;
    }
    if (a->_enemy[i].pos_emy.y > 480 && a->_enemy[i].pos_emy.y < 590 &&
    a->_enemy[i].pos_emy.x > 150 && a->_enemy[i].pos_emy.x < 300 &&
    a->_statut->aaa == 1 && a->_enemy[i].a == 0) {
        a->_enemy[i].life -= 95;
        a->_enemy[i].a = 1;
    }
}

void shoot_life_2(v_var *a, int i)
{
    if (a->_enemy[i].pos_emy.y > 630 && a->_enemy[i].pos_emy.y < 750 &&
    a->_statut->b == 1 && a->_enemy[i].b == 0) {
        a->_enemy[i].life -= 35;
        a->_enemy[i].b = 1;
    }
    if (a->_enemy[i].pos_emy.y > 630 && a->_enemy[i].pos_emy.y < 750 &&
    a->_statut->bb == 1 && a->_enemy[i].b == 0) {
        a->_enemy[i].life -= 65;
        a->_enemy[i].b = 1;
    }
    if (a->_enemy[i].pos_emy.y > 630 && a->_enemy[i].pos_emy.y < 750 &&
    a->_statut->bbb == 1 && a->_enemy[i].b == 0) {
        a->_enemy[i].life -= 95;
        a->_enemy[i].b = 1;
    }
}

void shoot_life_3(v_var *a, int i)
{
    if (a->_enemy[i].pos_emy.x > 1040 && a->_enemy[i].pos_emy.x < 1110 &&
    a->_statut->c == 1 && a->_enemy[i].c == 0) {
        a->_enemy[i].life -= 35;
        a->_enemy[i].c = 1;
    }
    if (a->_enemy[i].pos_emy.x > 1040 && a->_enemy[i].pos_emy.x < 1110 &&
    a->_statut->cc == 1 && a->_enemy[i].c == 0) {
        a->_enemy[i].life -= 65;
        a->_enemy[i].c = 1;
    }
    if (a->_enemy[i].pos_emy.x > 1040 && a->_enemy[i].pos_emy.x < 1110 &&
    a->_statut->ccc == 1 && a->_enemy[i].c == 0) {
        a->_enemy[i].life -= 95;
        a->_enemy[i].c = 1;
    }
}

void shoot_life_4(v_var *a, int i)
{
    if (a->_enemy[i].pos_emy.y > 460 && a->_enemy[i].pos_emy.y < 600 &&
    a->_enemy[i].pos_emy.x > 1500 && a->_enemy[i].pos_emy.x < 1620 &&
    a->_statut->d == 1 && a->_enemy[i].d == 0) {
        a->_enemy[i].life -= 35;
        a->_enemy[i].d = 1;
    }
    if (a->_enemy[i].pos_emy.y > 460 && a->_enemy[i].pos_emy.y < 600 &&
    a->_enemy[i].pos_emy.x > 1500 && a->_enemy[i].pos_emy.x < 1620 &&
    a->_statut->dd == 1 && a->_enemy[i].d == 0) {
        a->_enemy[i].life -= 65;
        a->_enemy[i].d = 1;
    }
    if (a->_enemy[i].pos_emy.y > 460 && a->_enemy[i].pos_emy.y < 600 &&
    a->_enemy[i].pos_emy.x > 1500 && a->_enemy[i].pos_emy.x < 1620 &&
    a->_statut->ddd == 1 && a->_enemy[i].d == 0) {
        a->_enemy[i].life -= 95;
        a->_enemy[i].d = 1;
    }
}

void shoot_life_5(v_var *a, int i)
{
    if (a->_enemy[i].pos_emy.y > 100 && a->_enemy[i].pos_emy.y < 180 &&
    a->_statut->e == 1 && a->_enemy[i].e == 0) {
        a->_enemy[i].life -= 35;
        a->_enemy[i].e = 1;
    }
    if (a->_enemy[i].pos_emy.y > 100 && a->_enemy[i].pos_emy.y < 180 &&
    a->_statut->ee == 1 && a->_enemy[i].e == 0) {
        a->_enemy[i].life -= 65;
        a->_enemy[i].e = 1;
    }
    if (a->_enemy[i].pos_emy.y > 100 && a->_enemy[i].pos_emy.y < 180 &&
    a->_statut->eee == 1 && a->_enemy[i].e == 0) {
        a->_enemy[i].life -= 95;
        a->_enemy[i].e = 1;
    }
}