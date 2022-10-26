#pragma once

// �摜�N���X
class Image {
public:
	static int stageBlock;
	static int makeblock;
	static int notmoveblock;
	static int thorn;
	static int tile;
	static int sky;
	static int coin;
	static int arme;
	static int targetcursor;
	static int ship;
	static int player;

	static int M_block_Resorces ;
	static int block_Resorces ;
	static int easyr_Resorces ;
	static int game_clear_Resorces ;
	static int game_over_Resorces ;
	static int paper_Resorces ;
	static int playerLeft1_Resorces ;
	static int playerLeft2_Resorces ;
	static int playerRight1_Resorces ;
	static int playerRight2_Resorces ;
	static int reachStacker_Resorces;

	static int title;
	static int menu;
	static int cursol;
	static int stage_1;
	static int tyutorial;


	static int tyutorial1;
	static int tyutorial2;
	static int tyutorial3;
	static int tyutorial4;
	static int tyutorial5;
public:
	Image();
	~Image();

	// �摜�̓ǂݍ���
	static void LoadGraph();
};

// �I�[�f�B�I�N���X
//class Audio {
//public:
//	/*static float name;
//
//	static int name;*/
//
//public:
//	static void LoadAudio();
//};




/*static int crear;
	static int gameover;*/

	/*static int number[10];*/
