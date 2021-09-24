/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void destroy2(v_var *a)
{
    sfClock_destroy(a->_clock->clock3);
    sfClock_destroy(a->_clock->clock4);
    sfClock_destroy(a->_clock->clock5);
    sfClock_destroy(a->_clock->clock6);
    sfClock_destroy(a->_clock->clock7);
    sfClock_destroy(a->_clock->clock8);
    sfClock_destroy(a->_clock->clock9);
    sfClock_destroy(a->_clock->intro);
    sfClock_destroy(a->_clock->clock_emy);
    sfMusic_destroy(a->_menu->music);
    for (int i = 0; i != a->_champ->size; i += 1) {
        sfSprite_destroy(a->_enemy[i].s_emy);
    }
    sfSound_destroy(a->_window->clic);
    sfSound_destroy(a->_window->gun);
    sfSoundBuffer_destroy(a->_window->bclic);
    sfSoundBuffer_destroy(a->_window->bgun);
}

void destroy(v_var *a)
{
    sfRenderWindow_destroy(a->_window->window);
    sfSprite_destroy(a->_menu->s_menu);
    sfSprite_destroy(a->_champ->s_choice);
    sfSprite_destroy(a->_menu->s_poulpi);
    sfSprite_destroy(a->_menu->s_poulpi2);
    sfSprite_destroy(a->_weapon->s_agl1);
    sfSprite_destroy(a->_weapon->s_agl2);
    sfSprite_destroy(a->_weapon->s_agl3);
    sfSprite_destroy(a->_weapon->s_up1);
    sfSprite_destroy(a->_weapon->s_up2);
    sfSprite_destroy(a->_weapon->s_up3);
    sfSprite_destroy(a->_weapon->s_side1);
    sfSprite_destroy(a->_weapon->s_side2);
    sfSprite_destroy(a->_weapon->s_side3);
    sfSprite_destroy(a->_weapon->s_side1b);
    sfSprite_destroy(a->_weapon->s_side2b);
    sfSprite_destroy(a->_weapon->s_side3b);
    sfClock_destroy(a->_clock->clock1);
    sfClock_destroy(a->_clock->clock2);
    destroy2(a);
}