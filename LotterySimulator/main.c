#include <stdio.h>
#include "standards.h"



int main()
{
	int i;
	int score;
	int total_scores[8] = {0}; // constants make Eddy sad.

	Draw draw;


	int num_trials;
	Ticket ticket = GenerateTicket();

	printf("Welcome to the Lottery Simulator!\n");
	printf("We will use the Monte Carlo method to estimate how (un)likely you are to win some money on the National Lottery.\n");

	printf("How many trial draws of the lottery would you like to run? ");
	scanf("%d", &num_trials);

	for (i = 0; i < num_trials; i++)
	{
		draw = GenerateDraw();
		score = CheckDrawResult(ticket, draw);

		total_scores[score]++;
	}

	printf("\n\n");
	printf("Here are the odds of winning and losing. Mostly losing.\n\n");

	printf("0-2 balls correct: %d/%d = %f\n", total_scores[0] + total_scores[1] + total_scores[2], num_trials, (float)(total_scores[0] + total_scores[1] + total_scores[2]) / num_trials);
	printf("3 balls correct: %d/%d = %f\n", total_scores[3], num_trials, (float)total_scores[3] / num_trials);
	printf("4 balls correct: %d/%d = %f\n", total_scores[4], num_trials, (float)total_scores[4] / num_trials);
	printf("5 balls correct: %d/%d = %f\n", total_scores[5], num_trials, (float)total_scores[5] / num_trials);
	printf("5 balls and the bonus ball correct: %d/%d = %f\n", total_scores[7], num_trials, (float)total_scores[7] / num_trials);
	printf("6 balls correct: %d/%d = %f\n", total_scores[6], num_trials, (float)total_scores[6] / num_trials);



	getchar(); //who knows why i need two
	getchar();
	return 0;

}