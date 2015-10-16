#include "standards.h"
#include <stdlib.h>



int* LoadMachine(int n)
{
	int i;
	int loaded_machine[MAX_MACHINE_SIZE];

	for (i = 0; i < n; i++)
	{
		loaded_machine[i] = i + 1;
	}

	return loaded_machine;
}

Ticket GenerateTicket()
{
	Ticket ticket;
	int i;
	int* loaded_machine = LoadMachine(MACHINE_SIZE);
	int balls_left = MACHINE_SIZE;
	int chosen_ball;


	int divisor = RAND_MAX / 50;
	int mymax = RAND_MAX;

	for (i = 0; i < REG_SELECTION_SIZE; ++i)
	{
		chosen_ball = (rand() % (balls_left));
		ticket.reg_selection[i] = loaded_machine[chosen_ball];
		loaded_machine[chosen_ball] = loaded_machine[balls_left - 1]; //replace the chosen ball with the last ball to fill in the gap
		balls_left--;
	}
	//potentially sort these, but i'm not sure it matters
	return ticket;
}

Draw GenerateDraw() {
	Draw draw;

	draw.reg_balls[0] = 7;
	draw.reg_balls[1] = 13;
	draw.reg_balls[2] = 20;
	draw.reg_balls[3] = 27;
	draw.reg_balls[4] = 39;
	draw.reg_balls[5] = 42;

	draw.bonus_balls[0] = 35;

	return draw;
}

int CheckDrawResult(Ticket t, Draw d) {
	int score = 0;


	return score;
}