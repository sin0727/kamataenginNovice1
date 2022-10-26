#include "Resource.h"
#include "Novice.h"


/* ������ */
int Image::makeblock = 0;
int Image::notmoveblock = 0;
int Image::thorn = 0;
int Image::tile = 0;
int Image::sky = 0;
int Image::coin = 0;
int Image::stageBlock = 0;
int Image::arme = 0;
int Image::targetcursor = 0;
int Image::ship = 0;
int Image::player = 0;

int Image::M_block_Resorces = 0;
int Image::block_Resorces = 0;
int Image::easyr_Resorces = 0;
int Image::game_clear_Resorces = 0;
int Image::game_over_Resorces = 0;
int Image::paper_Resorces = 0;
int Image::playerLeft1_Resorces =0;
int Image::playerLeft2_Resorces = 0;
int Image::playerRight1_Resorces = 0;
int Image::playerRight2_Resorces = 0;
int Image::reachStacker_Resorces = 0;


int Image::title = 0;
int Image::menu = 0;
int Image::cursol = 0;
int Image::stage_1 = 0;


int Image::tyutorial = 0;

int Image::tyutorial1 = 0;
int Image::tyutorial2 = 0;
int Image::tyutorial3 = 0;
int Image::tyutorial4 = 0;
int Image::tyutorial5 = 0;


Image::Image() {

}
Image::~Image() {

}
// �摜�̓ǂݍ���
void Image::LoadGraph() {
	stageBlock = Novice::LoadTexture("./picter/stage/block0.png");
	makeblock = Novice::LoadTexture("./picter/stage/block1.png");
	notmoveblock = Novice::LoadTexture("./picter/stage/block2.png");
	thorn = Novice::LoadTexture("./picter/stage/block3.png");
	tile = Novice::LoadTexture("./picter/stage/block4.png");
	sky = Novice::LoadTexture("./picter/stage/sky.png");
	coin = Novice::LoadTexture("./picter/stage/coin.png");
	arme = Novice::LoadTexture("./picter/stage/arme.png");
	targetcursor = Novice::LoadTexture("./picter/stage/turgetcurrsol.png");
	ship = Novice::LoadTexture("./picter/stage/ship.png");
	player = Novice::LoadTexture("./picter/stage/mario.png");

	title = Novice::LoadTexture("./Resources/titol.png");
	menu = Novice::LoadTexture("./Resources/sky.png");
	cursol = Novice::LoadTexture("./picter/Red.png");
	stage_1 = Novice::LoadTexture("./picter/1.png");


	tyutorial = Novice::LoadTexture("./picter/tyutorial.png");

	
	M_block_Resorces = Novice::LoadTexture("./Resources/containerBlue.png");
	block_Resorces = Novice::LoadTexture("./Resources/containerBrown.png");
	easyr_Resorces = Novice::LoadTexture("./Resources/easyr.png");
	game_clear_Resorces = Novice::LoadTexture("./Resources/game_clear.png");
	game_over_Resorces = Novice::LoadTexture("./Resources/game_over.png");
	paper_Resorces = Novice::LoadTexture("./Resources/paper.png");
	playerLeft1_Resorces = Novice::LoadTexture("./Resources/playerLeft1.png");
	playerLeft2_Resorces = Novice::LoadTexture("./Resources/playerLeft2.png");
	playerRight1_Resorces = Novice::LoadTexture("./Resources/playerRight1.png");
	playerRight2_Resorces = Novice::LoadTexture("./Resources/playerRight2.png");
	reachStacker_Resorces = Novice::LoadTexture("./Resources/reachStacker.png");




	tyutorial1 = Novice::LoadTexture("./Resources/tyutorial1.png");
	tyutorial2 = Novice::LoadTexture("./Resources/tyutorial2.png");
	tyutorial3 = Novice::LoadTexture("./Resources/tyutorial3.png");
	tyutorial4 = Novice::LoadTexture("./Resources/tyutorial4.png");
	tyutorial5 = Novice::LoadTexture("./Resources/tyutorial5.png");
}

/* �I�[�f�B�I */
//float Audio::name = 0.3f;
//int Audio::name;

//
//// �I�[�f�B�I�̓ǂݍ���
//void Audio::LoadAudio() {
//	/* = Novice::LoadAudio(".//.mp3");*/
//
//}

//int Image::number[10] = {};
//int Image::crear = 0;
//int Image::gameover = 0;
/*crear = Novice::LoadTexture(".//.png");
	gameover = Novice::LoadTexture(".//.png");*/

	// �����̓ǂݍ���
	/*number[0] = Novice::LoadTexture("./Images/UI/Number/Number0.png");
	number[1] = Novice::LoadTexture("./Images/UI/Number/Number1.png");
	number[2] = Novice::LoadTexture("./Images/UI/Number/Number2.png");
	number[3] = Novice::LoadTexture("./Images/UI/Number/Number3.png");
	number[4] = Novice::LoadTexture("./Images/UI/Number/Number4.png");
	number[5] = Novice::LoadTexture("./Images/UI/Number/Number5.png");
	number[6] = Novice::LoadTexture("./Images/UI/Number/Number6.png");
	number[7] = Novice::LoadTexture("./Images/UI/Number/Number7.png");
	number[8] = Novice::LoadTexture("./Images/UI/Number/Number8.png");
	number[9] = Novice::LoadTexture("./Images/UI/Number/Number9.png");*/
