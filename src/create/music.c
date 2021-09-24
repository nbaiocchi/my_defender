/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

int music(v_var *a)
{
    a->_menu->music = sfMusic_createFromFile("./song/intro.ogg");
    if (!a->_menu->music)
        return (0);
    a->_window->clic = sfSound_create();
    a->_window->bclic = sfSoundBuffer_createFromFile("./song/clic.ogg");
    sfSound_setBuffer(a->_window->clic, a->_window->bclic);
    a->_window->gun = sfSound_create();
    a->_window->bgun = sfSoundBuffer_createFromFile("./song/gun.ogg");
    sfSound_setBuffer(a->_window->gun, a->_window->bgun);
    return (0);
}