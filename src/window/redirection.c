/*
** EPITECH PROJECT, 2021
** redirection
** File description:
** t
*/

#include "../../include/prototype.h"

void menu(v_var *a)
{
    my_menu(a);
    display(a);
}

void champ_select(v_var *a)
{
    my_champ_select(a);
    my_green_weapon(a);
    my_red_weapon(a);
    my_black_weapon(a);
    my_enemy(a);
    display(a);
}

void pause_menu(v_var *a)
{
    my_pause(a);
    display(a);
}

void explain(v_var *a)
{
    my_explain(a);
    display(a);
}

void intro(v_var *a)
{
    my_intro(a);
    display(a);
}