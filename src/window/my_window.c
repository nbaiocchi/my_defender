/*
** EPITECH PROJECT, 2021
** window
** File description:
** c
*/

#include "../../include/prototype.h"

void open_window(v_var *a)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    a->_window->window = sfRenderWindow_create(video_mode, "My_window",
    sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(a->_window->window, 30);
}

void my_pool_event(v_var *a)
{
    while (sfRenderWindow_pollEvent(a->_window->window, &a->_window->event)) {
        if (a->_window->event.type == sfEvtClosed)
            sfRenderWindow_close(a->_window->window);
        if (a->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(a->_window->window);
        if (a->_window->event.type == sfEvtMouseButtonPressed)
            event_mousepress(a);
    }
}

void display(v_var *a)
{
    sfRenderWindow_clear(a->_window->window, sfBlack);
    if (a->_statut->statut == 0)
        display_menu(a);
    if (a->_statut->statut == 1) {
        display_champ_select(a);
        display_green_weapon(a);
        display_red_weapon(a);
        display_black_weapon(a);
        display_enemy(a);
        my_score(a);
    }
    if (a->_statut->statut == 2)
        display_pause(a);
    if (a->_statut->statut == 3)
        display_explain(a);
    if (a->_statut->statut == 4)
        display_intro(a);
    sfRenderWindow_display(a->_window->window);
}