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



struct Person  init_player(){

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








int main(){
  Person playestruct Person  init_player();
  printf("Player Health is %d and player hunger is %d\n", player.health, player.hunger);
  printf("PLayer coordinates is (%d,%d), and inventory is currently at 0\n", player.coordinates.x, player.coordinates.y);
  printf("Welcome to the game, Player One.\n");

}

