/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void sprite_b(v_var *a)
{
    a->_enemy->t_emy = sfTexture_createFromFile("./image/emy.png", NULL);
    for (int i = 0; i != a->_champ->size; i += 1) {
        a->_enemy[i].s_emy = sfSprite_create();
        sfSprite_setTexture(a->_enemy[i].s_emy,
        a->_enemy->t_emy, sfTrue);
    }
}

void sprite_intro(v_var *a)
{
    a->_menu->t_intro = sfTexture_createFromFile("./image/intro_i.png", NULL);
    a->_menu->s_intro = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_intro,
    a->_menu->t_intro, sfTrue);
    a->_menu->t_text = sfTexture_createFromFile("./image/intro.png", NULL);
    a->_menu->s_text = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_text,
    a->_menu->t_text, sfTrue);
}

void rect_intro(v_var *a)
{
    a->_menu->rect_intro.top = 0;
    a->_menu->rect_intro.left = 0;
    a->_menu->rect_intro.width = 1920;
    a->_menu->rect_intro.height = 1080;

    a->_menu->rect_text.top = 0;
    a->_menu->rect_text.left = 0;
    a->_menu->rect_text.width = 640;
    a->_menu->rect_text.height = 2102;
}

void sprite_emy(v_var *a)
{
    sprite_b(a);
    sprite_intro(a);
    rect_intro(a);
}