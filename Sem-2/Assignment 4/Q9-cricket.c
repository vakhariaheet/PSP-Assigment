/**
 * @file Q9-cricket.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief Write a program to accept batting information of cricket team using structure. It contains player name and runs scored by player. Calculate total runs scored by cricket team.
 * @version 0.1
 * @date 2023-03-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

struct Player {
  char name[20];
  int runs;
};

int main() {
  struct Player team[11];
  int total_runs = 0;
  for (int i = 0; i < 11; i++) {
    printf("Enter Player Name:");
    scanf("%s", team[i].name);
    printf("Enter Runs Scored:");
    scanf("%d", &team[i].runs);
    total_runs += team[i].runs;
  }
  printf("=============================================================\n");
  printf("Total Runs Scored: %d \n", total_runs);
  printf("=============================================================\n");
}