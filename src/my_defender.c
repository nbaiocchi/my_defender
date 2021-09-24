/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** donjon and octopus
*/

#include "../include/prototype.h"

void start_game(v_var *a)
{
    open_window(a);
    while (sfRenderWindow_isOpen(a->_window->window)) {
        a->_window->mouse = sfMouse_getPosition((sfWindow *)a->_window->window);
        my_pool_event(a);
        if (a->_statut->statut == 0)
            menu(a);
        if (a->_statut->statut == 1)
            champ_select(a);
        if (a->_statut->statut == 2)
            pause_menu(a);
        if (a->_statut->statut == 3)
            explain(a);
        if (a->_statut->statut == 4)
            intro(a);
    }
    destroy(a);
}

void usage(void)
{
    my_putstr("USAGE\n     ./my_defender\n\n");
    my_putstr("DESCRIPTION\n    castle defender game:\n");
    my_putstr("you have to protect your base from enemy\n");
    my_putstr("chose your weapon and kill them all\n");
    my_putstr("you can skip the intro by clicking on the screen\n");
}

int main(int ac, char **av)
{
    av[0][0] = av[0][0];
    v_var *a = malloc(sizeof(v_var));
    if (ac == 1) {
        create_all(a);
        sfMusic_play(a->_menu->music);
        sfMusic_setVolume(a->_menu->music, a->_menu->volume);
        sfMusic_setLoop(a->_menu->music, sfTrue);
        start_game(a);
        free_all(a);
    } else if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        usage();
    return (0);
}
