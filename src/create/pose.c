/*
** EPITECH PROJECT, 2021
** pose
** File description:
** t
*/

#include "../../include/prototype.h"

void pose_1(v_var *a)
{
    a->_menu->pos_menu.x = 0;
    a->_menu->pos_menu.y = 0;
    a->_menu->pos_poulpi.x = 650;
    a->_menu->pos_poulpi.y = 740;
    a->_menu->pos_poulpi2.x = 650;
    a->_menu->pos_poulpi2.y = 910;
    a->_champ->pos_choice.x = 0;
    a->_champ->pos_choice.y = 0;
    a->_menu->pos_pause.x = 0;
    a->_menu->pos_pause.y = 0;
    a->_menu->pos_explain.x = 0;
    a->_menu->pos_explain.y = 0;
    a->_weapon->pos_agl1.x = 150;
    a->_weapon->pos_agl1.y = 317;
    a->_weapon->pos_agl1b.x = 1340;
    a->_weapon->pos_agl1b.y = 317;
    a->_weapon->pos_side1.x = 312;
    a->_weapon->pos_side1.y = 626;
    a->_weapon->pos_side1b.x = 1660;
    a->_weapon->pos_side1b.y = 63;
}

void pose_2(v_var *a)
{
    a->_weapon->pos_up1.x = 1000;
    a->_weapon->pos_up1.y = 623;
    a->_weapon->pos_agl2.x = 150;
    a->_weapon->pos_agl2.y = 317;
    a->_weapon->pos_agl2b.x = 1340;
    a->_weapon->pos_agl2b.y = 317;
    a->_weapon->pos_side2.x = 312;
    a->_weapon->pos_side2.y = 626;
    a->_weapon->pos_side2b.x = 1660;
    a->_weapon->pos_side2b.y = 63;
    a->_weapon->pos_up2.x = 1000;
    a->_weapon->pos_up2.y = 623;
    a->_weapon->pos_agl3.x = 150;
    a->_weapon->pos_agl3.y = 317;
    a->_weapon->pos_agl3b.x = 1340;
    a->_weapon->pos_agl3b.y = 317;
    a->_weapon->pos_side3.x = 312;
    a->_weapon->pos_side3.y = 626;
    a->_weapon->pos_side3b.x = 1660;
    a->_weapon->pos_side3b.y = 63;
}

void pose_3(v_var *a, int i, int pose)
{
    pose += 2400;
    while (i != 300) {
        a->_enemy[i].pos_emy.x = 220;
        a->_enemy[i].pos_emy.y = pose;
        pose += 33;
        i += 1;
    }
    a->_weapon->pos_up3.x = 1000;
    a->_weapon->pos_up3.y = 623;
    a->_menu->pose_life.x = 1200;
    a->_menu->pose_life.y = 5;
    a->_menu->pos_win.x = 760;
    a->_menu->pos_win.y = 500;
    a->_menu->pos_lose.x = 750;
    a->_menu->pos_lose.y = 500;
}

void pose_enemy(v_var *a)
{
    int pose = 1200;
    int i = 0;

    while (i != 50) {
        a->_enemy[i].pos_emy.x = 220;
        a->_enemy[i].pos_emy.y = pose;
        pose += 33;
        i += 1;
    }
    pose += 2400;
    while (i != 150) {
        a->_enemy[i].pos_emy.x = 220;
        a->_enemy[i].pos_emy.y = pose;
        pose += 33;
        i += 1;
    }
    pose_3(a, i, pose);
}

void pose(v_var *a)
{
    pose_1(a);
    pose_2(a);
    pose_enemy(a);
}