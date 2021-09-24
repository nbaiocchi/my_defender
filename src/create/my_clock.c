/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_clock(v_var *a)
{
    a->_clock->clock1 = sfClock_create();
    a->_clock->clock2 = sfClock_create();
    a->_clock->clock3 = sfClock_create();
    a->_clock->clock4 = sfClock_create();
    a->_clock->clock5 = sfClock_create();
    a->_clock->clock6 = sfClock_create();
    a->_clock->clock7 = sfClock_create();
    a->_clock->clock8 = sfClock_create();
    a->_clock->clock9 = sfClock_create();
    a->_clock->intro = sfClock_create();
    a->_clock->clock_emy = sfClock_create();
}