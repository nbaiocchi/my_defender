/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void malloc_1(v_var *a)
{
    a->_window = malloc(sizeof(t_window));
    a->_menu = malloc(sizeof(t_menu));
    a->_statut = malloc(sizeof(t_statut));
    a->_champ = malloc(sizeof(t_champ));
    a->_weapon = malloc(sizeof(t_weapon));
    a->_clock = malloc(sizeof(t_clock));
    a->_enemy = malloc(sizeof(t_enemy) * 300);
}

void malloc_struct(v_var *a)
{
    malloc_1(a);
}

void free_all(v_var *a)
{
    free(a->_window);
    free(a->_menu);
    free(a->_statut);
    free(a->_champ);
    free(a->_weapon);
    free(a->_clock);
    free(a->_enemy);
    free(a);
}