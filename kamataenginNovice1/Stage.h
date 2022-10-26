#pragma once
#include "Enum.h"
#include "Resource.h"

//
const int kSTAGE_WIDTH = 960;
const int kSTAGE_HEIGHT = 640;
const int kMAPCHIP_WIDTH = 32;
const int kMAPCHIP_HEIGHT = 32;
const int kBLOCK_SIZE = 32;
const int kPlayer_SIZE = 24;
const int kMAP_SIZE_WIDTH = kSTAGE_WIDTH / kMAPCHIP_WIDTH;
const int kMAP_SIZE_HEIGHT = kSTAGE_HEIGHT / kMAPCHIP_HEIGHT;
const int kMOVE_BLOCK = 10;

//
int M_block_Resorces = Novice::LoadTexture("./Resources./containerBlue.png");
int block_Resorces = Novice::LoadTexture("./Resources./containerBrown.png");
int easyr_Resorces = Novice::LoadTexture("./Resources./easyr.png");
int game_clear_Resorces = Novice::LoadTexture("./Resources./game_clear.png");
int game_over_Resorces = Novice::LoadTexture("./Resources./game_over.png");
int paper_Resorces = Novice::LoadTexture("./Resources./paper.png");
int playerLeft1_Resorces = Novice::LoadTexture("./Resources./playerLeft1.png");
int playerLeft2_Resorces = Novice::LoadTexture("./Resources./playerLeft2.png");
int playerRight1_Resorces = Novice::LoadTexture("./Resources./playerRight1.png");
int playerRight2_Resorces = Novice::LoadTexture("./Resources./playerRight2.png");
int reachStacker_Resorces = Novice::LoadTexture("./Resources./reachStacker.png");

//マップチップ配列
int MAP_chiplist[kMAP_SIZE_HEIGHT][kMAP_SIZE_WIDTH]
{
	{3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,2,0,0,0,0,0,1,0,0,0,1,0,0,0,0,2,0,2,0,0,1},
	{1,0,1,0,0,1,1,0,2,1,1,0,0,0,1,1,1,0,2,1,1,1,1,1,1,1,1,1,1,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
};
int tmpMAP_chiplist[kMAP_SIZE_HEIGHT][kMAP_SIZE_WIDTH]
{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
};

for (int i = 0; i < kMAP_SIZE_WIDTH; i++) {
	for (int j = 0; j < kMAP_SIZE_HEIGHT; j++) {
		tmpMAP_chiplist[j][i] = MAP_chiplist[j][i];
	}
}

enum Block_done
{
	NONE,
	BLOCK,
	M_BLOCK,
};

enum CHANGE
{
	UFO,
	ACTION
};
int scene = 0;

typedef struct Vector2
{
	int x;
	int y;
};



typedef struct Vertex
{
	Vector2 leftTop;
	Vector2 rightTop;
	Vector2 rightBottom;
	Vector2 leftBottom;


};


//player

Vector2 player = { 128,128 };

Vector2 playerSpeed = { 1,0 };

int tmpSpeed = 2;

int playerJump = 0;

bool isPlayerJump = false;

int time = 0;



//クレーン

int craneScene = 0;
enum craneS
{
	moveCrane,
	descentCrane,
	removeCrane,
	drop,
	returnCrane,

};

Vector2 cranepos = { 896,32 };
Vector2 craneArray = { 0,0 };
Vector2 craneTmp = { 0,0 };
Vector2 craneTmpSpeed = { 0,0 };

int frameTimer = 10;
int frameTimerF = false;
int craneSpeed = 32;
int craneDropSpeed = 2;



//移動ブロック

Vector2 moveBlock[kMOVE_BLOCK] = {};

Vector2 preBox = { 0,0 };

int blockF = false;