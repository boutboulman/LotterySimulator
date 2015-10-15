#pragma once


typedef struct str_ticket {
	int reg_selection[6];
} Ticket;

typedef struct str_draw {
	int reg_balls[6];
	int bonus_balls[1];
} Draw;

Ticket GenerateTicket();

Draw GenerateDraw();

int CheckDrawResult(Ticket t, Draw d);