/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void variable_1(v_var *a)
{
    a->_statut->statut = 4;
    a->_statut->squa_a = 0;
    a->_statut->a = 0;
    a->_statut->b = 0;
    a->_statut->c = 0;
    a->_statut->d = 0;
    a->_statut->e = 0;
    a->_statut->sq_a = 0;
    a->_statut->sq_b = 0;
    a->_statut->sq_c = 0;
    a->_statut->sq_d = 0;
    a->_champ->size = 300;
    a->_statut->money = 300;
    a->_menu->sco = 0;
    a->_statut->win = 0;
    a->_statut->rand = 0;
}

void variable_2(v_var *a)
{
    for (int i = 0; i != a->_champ->size; i += 1) {
        a->_enemy[i].a = 0;
    }
    for (int i = 0; i != a->_champ->size; i += 1) {
        a->_enemy[i].b = 0;
    }
    for (int i = 0; i != a->_champ->size; i += 1) {
        a->_enemy[i].c = 0;
    }
    for (int i = 0; i != a->_champ->size; i += 1) {
        a->_enemy[i].d = 0;
    }
    for (int i = 0; i != a->_champ->size; i += 1) {
        a->_enemy[i].e = 0;
    }
    for (int i = 0; i != a->_champ->size; i += 1) {
        a->_enemy[i].check = 0;
    }
    a->_menu->volume = 10;
}

void pose_intro(v_var *a)
{
    a->_menu->pos_intro.x = 0;
    a->_menu->pos_intro.y = 0;
    a->_menu->pos_text.x = 640;
    a->_menu->pos_text.y = 1100;
    for (int i = 0; i != 50; i += 1) {
        a->_enemy[i].life = 100;
    }
    for (int i = 50; i != 150; i += 1) {
        a->_enemy[i].life = 125;
    }
    for (int i = 150; i != 300; i += 1) {
        a->_enemy[i].life = 175;
    }
    a->_window->volume = 5;
    a->_statut->aa = 0;
    a->_statut->bb = 0;
    a->_statut->cc = 0;
    a->_statut->dd = 0;
    a->_statut->ee = 0;
    a->_statut->aaa = 0;
}

void variable_3(v_var *a)
{
    a->_statut->bbb = 0;
    a->_statut->ccc = 0;
    a->_statut->ddd = 0;
    a->_statut->eee = 0;
}

void variable(v_var *a)
{
    variable_1(a);
    variable_2(a);
    variable_3(a);
    pose_intro(a);
}