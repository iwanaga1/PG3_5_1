#include "Command.h"
#include "Player.h"

ICommand::~ICommand() {}

void MoveRightCommand::Execute(player& player) {

	player.MoveRight();
}

void MoveLeftCommand::Execute(player& player) {

	player.MoveLeft();
}
