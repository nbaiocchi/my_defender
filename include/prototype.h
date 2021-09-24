/*
** EPITECH PROJECT, 2020
** prototype.h
** File description:
** t
*/

#ifndef PROTOTYPE_H_
#define PROTOTYPE_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*............... structure ...............*/

typedef struct s_window
{
    sfRenderWindow *window;
    sfEvent event;
    sfVector2i mouse;

    sfSound *clic;
    sfSoundBuffer *bclic;
    sfSound *gun;
    sfSoundBuffer *bgun;
    float volume;
} t_window;

typedef struct s_menu
{
    sfTexture* t_menu;
    sfSprite* s_menu;
    sfIntRect rect_menu;
    sfVector2f pos_menu;
    sfTexture* t_poulpi;
    sfSprite* s_poulpi;
    sfIntRect rect_poulpi;
    sfVector2f pos_poulpi;
    sfSprite* s_poulpi2;
    sfVector2f pos_poulpi2;

    sfTexture* t_intro;
    sfSprite* s_intro;
    sfIntRect rect_intro;
    sfVector2f pos_intro;

    sfTexture* t_text;
    sfSprite* s_text;
    sfIntRect rect_text;
    sfVector2f pos_text;

    sfTexture* t_pause;
    sfSprite* s_pause;
    sfIntRect rect_pause;
    sfVector2f pos_pause;

    sfTexture* t_explain;
    sfSprite* s_explain;
    sfIntRect rect_explain;
    sfVector2f pos_explain;

    sfTexture* t_red;
    sfSprite* s_red;
    sfIntRect rect_red;
    sfVector2f pos_red;

    sfText *score;
    sfFont *font;
    char *str;
    sfVector2f pose_life;
    int sco;

    sfTexture* t_win;
    sfSprite* s_win;
    sfIntRect rect_win;
    sfVector2f pos_win;

    sfTexture* t_lose;
    sfSprite* s_lose;
    sfIntRect rect_lose;
    sfVector2f pos_lose;

    sfMusic *music;
    float volume;
} t_menu;

typedef struct s_statut
{
    int statut;
    int rand;
    int squa_a;
    int sq_a;
    int sq_b;
    int sq_c;
    int sq_d;
    int a;
    int b;
    int c;
    int d;
    int e;

    int aa;
    int bb;
    int cc;
    int dd;
    int ee;

    int aaa;
    int bbb;
    int ccc;
    int ddd;
    int eee;

    int money;

    int win;
} t_statut;

typedef struct s_champ
{
    int size;
    sfTexture* t_choice;
    sfSprite* s_choice;
    sfIntRect rect_choice;
    sfVector2f pos_choice;
} t_champ;

typedef struct s_clock
{
    sfClock *clock1;
    sfClock *clock2;
    sfClock *clock3;
    sfClock *clock4;
    sfClock *clock5;
    sfClock *clock6;
    sfClock *clock7;
    sfClock *clock8;
    sfClock *clock9;
    sfClock *intro;
    sfClock *clock_emy;
    sfTime time;
    float second;
} t_clock;

typedef struct s_weapon
{
    sfTexture* t_agl1;
    sfSprite* s_agl1;
    sfIntRect rect_agl1;
    sfVector2f pos_agl1;
    sfSprite* s_agl1b;
    sfVector2f pos_agl1b;
    sfTexture* t_side1;
    sfSprite* s_side1;
    sfIntRect rect_side1;
    sfVector2f pos_side1;
    sfSprite* s_side1b;
    sfVector2f pos_side1b;
    sfTexture* t_up1;
    sfSprite* s_up1;
    sfIntRect rect_up1;
    sfVector2f pos_up1;

    sfTexture* t_agl2;
    sfSprite* s_agl2;
    sfIntRect rect_agl2;
    sfVector2f pos_agl2;
    sfSprite* s_agl2b;
    sfVector2f pos_agl2b;

    sfTexture* t_side2;
    sfSprite* s_side2;
    sfIntRect rect_side2;
    sfVector2f pos_side2;
    sfSprite* s_side2b;
    sfVector2f pos_side2b;

    sfTexture* t_up2;
    sfSprite* s_up2;
    sfIntRect rect_up2;
    sfVector2f pos_up2;

    sfTexture* t_agl3;
    sfSprite* s_agl3;
    sfIntRect rect_agl3;
    sfVector2f pos_agl3;
    sfSprite* s_agl3b;
    sfVector2f pos_agl3b;

    sfTexture* t_side3;
    sfSprite* s_side3;
    sfIntRect rect_side3;
    sfVector2f pos_side3;
    sfSprite* s_side3b;
    sfVector2f pos_side3b;

    sfTexture* t_up3;
    sfSprite* s_up3;
    sfIntRect rect_up3;
    sfVector2f pos_up3;
} t_weapon;

typedef struct s_enemy
{
    int life;
    int check;
    int a;
    int b;
    int c;
    int d;
    int e;

    sfTexture* t_emy;
    sfIntRect rect_emy;
    sfSprite* s_emy;
    sfVector2f pos_emy;
} t_enemy;

typedef struct v_variable
{
    t_window *_window;
    t_menu *_menu;
    t_statut *_statut;
    t_champ *_champ;
    t_weapon *_weapon;
    t_clock *_clock;
    t_enemy *_enemy;
} v_var;

/*............... my_runner.c ...............*/

/*............... create ...............*/

void create_all(v_var *a);
void pose(v_var *a);
void rect(v_var *a);
void sprite(v_var *a);
void malloc_struct(v_var *a);
void free_all(v_var *a);
void destroy(v_var *a);
void variable(v_var *a);
void my_clock(v_var *a);
char *my_convert_int(int nb);
int music(v_var *a);
int my_putstr(char *str);
void my_putchar(char c);

/*............... wiwdow ...............*/

void open_window(v_var *a);
void my_pool_event(v_var *a);
void menu(v_var *a);
void display(v_var *a);
void champ_select(v_var *a);
void event_mousepress(v_var *a);
void intro(v_var *a);

/*............... weapon ...............*/

void display_green_weapon(v_var *a);
void my_green_weapon(v_var *a);
void pose_weapon_first(v_var *a);
void pose_weapon_second(v_var *a);
void pose_weapon_third(v_var *a);
void display_black_weapon(v_var *a);
void my_black_weapon(v_var *a);
void my_red_weapon(v_var *a);
void display_red_weapon(v_var *a);
void pose_weapon_third2(v_var *a);
void pose_weapon_second2(v_var *a);
void rect_b1(v_var *a);
void rect_b2(v_var *a);
void rect_b3(v_var *a);
void rect_r1(v_var *a);
void rect_r2(v_var *a);
void rect_r3(v_var *a);
void rect_g1(v_var *a);
void rect_g2(v_var *a);
void rect_g3(v_var *a);
void pose_upgrade(v_var *a);
void pose_upgrade_2(v_var *a);
void my_score(v_var *a);

/*............... menu ...............*/

void my_menu(v_var *a);
void display_menu(v_var *a);
void display_champ_select(v_var *a);
void my_champ_select(v_var *a);
void display_pause(v_var *a);
void my_pause(v_var *a);
void pause_menu(v_var *a);
void display_explain(v_var *a);
void my_explain(v_var *a);
void explain(v_var *a);
void check_square(v_var *a);
void my_intro(v_var *a);
void display_intro(v_var *a);

/*............... enemy ...............*/

void sprite_emy(v_var *a);
void display_enemy(v_var *a);
void my_enemy(v_var *a);
void pose_emy(v_var *a);
void shoot_life(v_var *a, int i);
void shoot_life_2(v_var *a, int i);
void shoot_life_3(v_var *a, int i);
void shoot_life_4(v_var *a, int i);
void shoot_life_5(v_var *a, int i);
void my_text(v_var *a);
void cds_upg_b(v_var *a);
void cds_upg(v_var *a);

#endif /* !PROTOTYPE_H_ */
