/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void rect_g1(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_clock->clock7);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        if (a->_weapon->rect_agl1.left == 140) {
            a->_weapon->rect_agl1.left = 0;
        } else {
            a->_weapon->rect_agl1.left = 140;
        }
        sfClock_restart(a->_clock->clock7);
    }
}

void rect_g2(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_clock->clock8);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        if (a->_weapon->rect_up1.left == 140) {
            a->_weapon->rect_up1.left = 0;
        } else {
            a->_weapon->rect_up1.left = 140;
        }
        sfClock_restart(a->_clock->clock8);
    }
}

void rect_g3(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_clock->clock9);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        if (a->_weapon->rect_side1.left == 140) {
            a->_weapon->rect_side1.left = 0;
        } else {
            a->_weapon->rect_side1.left = 140;
        }
        sfClock_restart(a->_clock->clock9);
    }
}