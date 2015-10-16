#pragma once

#define MAX_MACHINE_SIZE 100
#define MACHINE_SIZE 49
#define REG_SELECTION_SIZE 6
#define REG_DRAW_SIZE 6
#define BONUS_DRAW_SIZE 1

typedef struct str_ticket {
	int reg_selection[REG_SELECTION_SIZE];
} Ticket;

typedef struct str_draw {
	int reg_balls[REG_DRAW_SIZE];
	int bonus_balls[BONUS_DRAW_SIZE];
} Draw;

Ticket GenerateTicket();

Draw GenerateDraw();

int CheckDrawResult(Ticket t, Draw d);