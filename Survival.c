#include <stdio.h>
#define MAX 100
#define MIN 0


//this will be used to define map coordinates
typedef struct Coord { 
	int x;
	int y;
}Coord;


typedef struct Item{
	char name;
	int total;
}Item;



#define MAX_INVENTORY 10
typedef struct Person{
	int health;
	int hunger;
	Coord coordinates;
	Item inventory[MAX_INVENTORY];
	int inventory_count;
}Person;


Person  init_player(){
	//first start by intitializing a Person called player
	Person player;
	player.health = MAX;
	player.hunger = MIN;
	player.coordinates.x = 0;
	player.coordinates.y = 0;
	player.inventory_count = 0;
        
	//tells us that inventory is empty at the start of the game
	for(int i; i < MAX_INVENTORY; i++){
		player.inventory[i].name = '\0';
		player.inventory[i].total = 0;
	}
	return player;
}

 void  new_coordinates(Person *player){
	
	//DECLARES RL VARIABLES;
	char rl;  //stands for right or left
	char ud; // stand for up or down
	
	printf("Would you like to go left or right r/l:  ");
	scanf(" %c", &rl);
	printf("\n");
        
	printf("Would you like to go up or down u/d:  ");
        scanf(" %c", &ud);
	printf("\n");

//	if(rl == 'r'  && ud == 'u'){
//		(*player).coordinates.x += 1;
//		(*player).coordinates.y += 1;
//
//	} else if(rl == 'l' && ud == 'd'){
//		(*player).coordinates.x -= 1;
//		(*player).coordinates.y -= 1;
//
//	} else if(rl == 'l' && ud == 'u'){
//		(*player).coordinates.x -= 1;
//		(*player).coordinates.y += 1;
//
//	} else if(rl =='r'  && ud == 'd'){
//		(*player).coordinates.x += 1;
//		(*player).coordinates.y -= 1;
//      }else{
//		printf("no changes\n");
//	}
        
	switch(rl) {
		case 'r':
			(*player).coordinates.x += 1;
			break;
		case 'l':
			(*player).coordinates.x -= 1;
			break;
		default:
			printf("No change in x coordinates\n");
			break;
	}

	switch(ud) {
		case 'u':
			(*player).coordinates.y += 1;
			break;
		case 'd':
			(*player).coordinates.y -= 1;
			break;
		default:

			printf("No change in y-coordinates\n");
		        break;
	}
	printf("Your new coordinates are (%d,%d)\n",(*player).coordinates.x, (*player).coordinates.y);
}


int main(){
//The following is test code;
  Person player =  init_player();
  printf("Player Health is %d and player hunger is %d\n", player.health, player.hunger);
  printf("PLayer coordinates is (%d,%d), and inventory is currently at 0\n", player.coordinates.x, player.coordinates.y);
  printf("Welcome to the game, Player One.\n");
  new_coordinates(&player);
}
