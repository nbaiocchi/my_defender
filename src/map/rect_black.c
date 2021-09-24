/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void rect_b1(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_clock->clock1);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        if (a->_weapon->rect_agl3.left == 140) {
            a->_weapon->rect_agl3.left = 0;
        } else {
            a->_weapon->rect_agl3.left = 140;
        }
        sfClock_restart(a->_clock->clock1);
    }
}

void rect_b2(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_clock->clock2);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        if (a->_weapon->rect_up3.left == 140) {
            a->_weapon->rect_up3.left = 0;
        } else {
            a->_weapon->rect_up3.left = 140;
        }
        sfClock_restart(a->_clock->clock2);
    }
}

void rect_b3(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_clock->clock3);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        if (a->_weapon->rect_side3.left == 140) {
            a->_weapon->rect_side3.left = 0;
        } else {
            a->_weapon->rect_side3.left = 140;
        }
        sfClock_restart(a->_clock->clock3);
    }
}