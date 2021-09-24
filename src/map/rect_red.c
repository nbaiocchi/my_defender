/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void rect_r1(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_clock->clock4);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        if (a->_weapon->rect_agl2.left == 140) {
            a->_weapon->rect_agl2.left = 0;
        } else {
            a->_weapon->rect_agl2.left = 140;
        }
        sfClock_restart(a->_clock->clock4);
    }
}

void rect_r2(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_clock->clock5);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        if (a->_weapon->rect_up2.left == 140) {
            a->_weapon->rect_up2.left = 0;
        } else {
            a->_weapon->rect_up2.left = 140;
        }
        sfClock_restart(a->_clock->clock5);
    }
}

void rect_r3(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_clock->clock6);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        if (a->_weapon->rect_side2.left == 140) {
            a->_weapon->rect_side2.left = 0;
        } else {
            a->_weapon->rect_side2.left = 140;
        }
        sfClock_restart(a->_clock->clock6);
    }
}