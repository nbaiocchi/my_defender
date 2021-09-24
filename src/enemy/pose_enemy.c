/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void cds_enemy(v_var *a, int i)
{
    if (a->_enemy[i].check == 0) {
        if (a->_enemy[i].pos_emy.y > 520)
            a->_enemy[i].pos_emy.y -= 15;
        else {
            a->_enemy[i].rect_emy.left = 30;
            a->_enemy[i].check = 1;
        }
    } else if (a->_enemy[i].check == 1) {
        if (a->_enemy[i].pos_emy.x < 1535)
            a->_enemy[i].pos_emy.x += 15;
        else {
            a->_enemy[i].rect_emy.left = 0;
            a->_enemy[i].check = 2;
        }
    } else if (a->_enemy[i].check == 2) {
        if (a->_enemy[i].pos_emy.y > -100)
            a->_enemy[i].pos_emy.y -= 15;
    }
}

void pose_emy(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_clock->clock_emy);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        for (int i = 0; i != a->_champ->size; i += 1) {
            cds_enemy(a, i);
        }
        sfClock_restart(a->_clock->clock_emy);
    }
}