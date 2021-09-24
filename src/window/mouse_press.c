/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void mouse_stat_zero(v_var *a)
{
    if (a->_statut->statut == 0) {
        if (a->_window->mouse.x > 785 && a->_window->mouse.x < 1137
        && a->_window->mouse.y > 750 && a->_window->mouse.y < 870) {
            sfSound_play(a->_window->clic);
            a->_statut->statut = 1;
        }
        if (a->_window->mouse.x > 785 && a->_window->mouse.x < 1137
        && a->_window->mouse.y > 910 && a->_window->mouse.y < 1034) {
            sfSound_play(a->_window->clic);
            sfRenderWindow_close(a->_window->window);
        }
        if (a->_window->mouse.x > 1790 && a->_window->mouse.x < 1920
        && a->_window->mouse.y > 0 && a->_window->mouse.y < 125) {
            sfSound_play(a->_window->clic);
            a->_statut->statut = 3;
        }
    }
}

void mouse_stat_un(v_var *a)
{
    if (a->_statut->statut == 1) {
        if (a->_window->mouse.x > 775 && a->_window->mouse.x < 865
        && a->_window->mouse.y > 10 && a->_window->mouse.y < 100)
            a->_statut->statut = 2;
        check_square(a);
    }
}

void mouse_stat_deux(v_var *a)
{
    if (a->_statut->statut == 2) {
        if (a->_window->mouse.x > 1530 && a->_window->mouse.x < 1890
        && a->_window->mouse.y > 550 && a->_window->mouse.y < 670)
            a->_statut->statut = 0;
        if (a->_window->mouse.x > 1530 && a->_window->mouse.x < 1890
        && a->_window->mouse.y > 706 && a->_window->mouse.y < 828)
            a->_statut->statut = 1;
        if (a->_window->mouse.x > 1530 && a->_window->mouse.x < 1890
        && a->_window->mouse.y > 877 && a->_window->mouse.y < 1000)
            sfRenderWindow_close(a->_window->window);
    }
}

void mouse_stat_trois(v_var *a)
{
    if (a->_statut->statut == 3) {
        if (a->_window->mouse.x > 1484 && a->_window->mouse.x < 1847
        && a->_window->mouse.y > 635 && a->_window->mouse.y < 758)
            a->_statut->statut = 0;
    }
    if (a->_statut->statut == 4) {
            a->_statut->statut = 0;
    }
}

void event_mousepress(v_var *a)
{
    mouse_stat_zero(a);
    mouse_stat_un(a);
    mouse_stat_deux(a);
    mouse_stat_trois(a);
}