/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void rect_1(v_var *a)
{
    a->_menu->rect_menu.top = 0;
    a->_menu->rect_menu.left = 0;
    a->_menu->rect_menu.width = 1920;
    a->_menu->rect_menu.height = 1080;
    a->_menu->rect_poulpi.top = 0;
    a->_menu->rect_poulpi.left = 0;
    a->_menu->rect_poulpi.width = 130;
    a->_menu->rect_poulpi.height = 129;
    a->_champ->rect_choice.top = 0;
    a->_champ->rect_choice.left = 0;
    a->_champ->rect_choice.width = 1920;
    a->_champ->rect_choice.height = 1080;
    a->_menu->rect_pause.top = 0;
    a->_menu->rect_pause.left = 0;
    a->_menu->rect_pause.width = 1920;
    a->_menu->rect_pause.height = 1080;
    a->_menu->rect_explain.top = 0;
    a->_menu->rect_explain.left = 0;
    a->_menu->rect_explain.width = 1920;
    a->_menu->rect_explain.height = 1080;
}

void rect_2(v_var *a)
{
    a->_menu->rect_red.top = 0;
    a->_menu->rect_red.left = 0;
    a->_menu->rect_red.width = 110;
    a->_menu->rect_red.height = 110;
    a->_weapon->rect_agl1.top = 0;
    a->_weapon->rect_agl1.left = 0;
    a->_weapon->rect_agl1.width = 140;
    a->_weapon->rect_agl1.height = 140;
    a->_weapon->rect_side1.top = 0;
    a->_weapon->rect_side1.left = 0;
    a->_weapon->rect_side1.width = 140;
    a->_weapon->rect_side1.height = 140;
    a->_weapon->rect_up1.top = 0;
    a->_weapon->rect_up1.left = 0;
    a->_weapon->rect_up1.width = 140;
    a->_weapon->rect_up1.height = 140;
    a->_weapon->rect_agl2.top = 0;
    a->_weapon->rect_agl2.left = 0;
    a->_weapon->rect_agl2.width = 140;
    a->_weapon->rect_agl2.height = 140;
}

void rect_3(v_var *a)
{
    a->_weapon->rect_side2.top = 0;
    a->_weapon->rect_side2.left = 0;
    a->_weapon->rect_side2.width = 140;
    a->_weapon->rect_side2.height = 140;
    a->_weapon->rect_up2.top = 0;
    a->_weapon->rect_up2.left = 0;
    a->_weapon->rect_up2.width = 140;
    a->_weapon->rect_up2.height = 140;
    a->_weapon->rect_agl3.top = 0;
    a->_weapon->rect_agl3.left = 0;
    a->_weapon->rect_agl3.width = 140;
    a->_weapon->rect_agl3.height = 140;
    a->_weapon->rect_side3.top = 0;
    a->_weapon->rect_side3.left = 0;
    a->_weapon->rect_side3.width = 140;
    a->_weapon->rect_side3.height = 140;
    a->_weapon->rect_up3.top = 0;
    a->_weapon->rect_up3.left = 0;
    a->_weapon->rect_up3.width = 140;
    a->_weapon->rect_up3.height = 140;
}

void rect_enemy(v_var *a)
{
    for (int i = 0; i != a->_champ->size; i += 1) {
        a->_enemy[i].rect_emy.top = 0;
        a->_enemy[i].rect_emy.left = 0;
        a->_enemy[i].rect_emy.width = 30;
        a->_enemy[i].rect_emy.height = 35;
    }
    a->_menu->rect_win.top = 0;
    a->_menu->rect_win.left = 0;
    a->_menu->rect_win.width = 303;
    a->_menu->rect_win.height = 143;
    a->_menu->rect_lose.top = 0;
    a->_menu->rect_lose.left = 0;
    a->_menu->rect_lose.width = 429;
    a->_menu->rect_lose.height = 143;
}

void rect(v_var *a)
{
    rect_1(a);
    rect_2(a);
    rect_3(a);
    rect_enemy(a);
}