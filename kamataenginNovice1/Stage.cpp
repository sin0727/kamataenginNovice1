#include "Stage.h"
#include <Novice.h>
#include "Calc.h"
#include "InputDevice.h.h"
#include "Resource.h"
#include "Enum.h"

switch (scene)
{
case UFO:

	craneArray.x = cranepos.x / kMAPCHIP_WIDTH;
	craneArray.y = cranepos.y / kMAPCHIP_HEIGHT;

	if (keys[DIK_SPACE]) {
		time += 1;
		if (keys[DIK_SPACE] && time >= 300) {
			time = 0;
			scene = 1;
		}
		else if (preKeys[DIK_SPACE] == 0 && time <= 300) {
			time = 0;
		}
	}

	switch (craneScene)
	{
	case moveCrane:
		if (frameTimerF == true) {
			frameTimer -= 1;
			if (frameTimer == 0) {
				craneTmp.x = cranepos.x - craneSpeed;
				craneArray.x = craneTmp.x / kMAPCHIP_WIDTH;
				frameTimer = 100;

				if (tmpMAP_chiplist[craneArray.y][craneArray.x] == 0) {
					cranepos.x -= craneSpeed;
				}
			}
			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0) {
				craneScene = 1;
			}

		}

		if (keys[DIK_SPACE] == 0 && preKeys[DIK_SPACE] != 0) {
			frameTimerF = true;
		}


		break;
	case descentCrane:

		craneTmp.y = cranepos.y + craneDropSpeed;
		craneArray.y = craneTmp.y / kMAPCHIP_WIDTH;
		if (tmpMAP_chiplist[craneArray.y][craneArray.x] == 0) {
			cranepos.y += craneDropSpeed;

		}
		else if (tmpMAP_chiplist[craneArray.y][craneArray.x] == 1) {
			craneScene = 2;
		}
		else if (tmpMAP_chiplist[craneArray.y][craneArray.x] == 2) {
			tmpMAP_chiplist[craneArray.y][craneArray.x] = 0;
			blockF = true;
			craneScene = 2;
		}
		break;
	case removeCrane:
		craneTmp.y = cranepos.y - craneDropSpeed;
		craneArray.y = craneTmp.y / kMAPCHIP_WIDTH;
		if (tmpMAP_chiplist[craneArray.y][craneArray.x] == 0) {
			cranepos.y -= craneDropSpeed;
		}
		if (tmpMAP_chiplist[craneArray.y][craneArray.x] == 3 && frameTimerF == true) {
			craneScene = 3;
		}
		else if (tmpMAP_chiplist[craneArray.y][craneArray.x] == 3 && frameTimerF == false) {
			craneScene = 4;
		}



		break;

	case drop:
		if (frameTimerF == true) {
			frameTimer -= 1;
			if (frameTimer == 0) {
				craneTmp.x = cranepos.x - craneSpeed;
				craneArray.x = craneTmp.x / kMAPCHIP_WIDTH;
				frameTimer = 100;
				cranepos.x -= craneSpeed;

			}
			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0) {
				frameTimerF = false;


			}


		}
		if (frameTimerF == false) {
			craneTmp.y = cranepos.y + craneDropSpeed + kMAPCHIP_WIDTH;
			craneArray.y = craneTmp.y / kMAPCHIP_WIDTH;



			if (tmpMAP_chiplist[craneArray.y][craneArray.x] == 0) {
				cranepos.y += craneDropSpeed;
			}
			else if (tmpMAP_chiplist[craneArray.y][craneArray.x] != 0) {
				if (blockF == true) {
					tmpMAP_chiplist[craneArray.y - 1][craneArray.x] = 2;
					blockF = false;
				}
				craneScene = 2;
			}
		}


		break;

	case returnCrane:
		if (cranepos.x != 896) {
			cranepos.x += 2;

		}
		else if (cranepos.x == 896) {
			craneScene = 0;
		}

		break;
	}







	/*if (keys[DIK_W] && preKeys[DIK_W] == 0) {
		craneTmp.y = cranepos.y - craneSpeed;
		craneArray. y = craneTmp.y / kMAPCHIP_WIDTH;
		if (tmpMAP_chiplist[craneArray.y][craneArray.x] == 0) {
			cranepos.y -= craneSpeed;
		}
	}
	if (keys[DIK_S] && preKeys[DIK_S] == 0) {
		craneTmp.y = cranepos.y + craneSpeed;
		craneArray.y = craneTmp.y / kMAPCHIP_WIDTH;
		if (tmpMAP_chiplist[craneArray.y][craneArray.x] == 0) {
			cranepos.y += craneSpeed;
		}
	}*/
	/*if (keys[DIK_A] && preKeys[DIK_A] == 0) {
		craneTmp.x = cranepos.x - craneSpeed;
		craneArray.x = craneTmp.x / kMAPCHIP_WIDTH;
		if (tmpMAP_chiplist[craneArray.y][craneArray.x] == 0) {
			cranepos.x -= craneSpeed;
		}
	}
	if (keys[DIK_D] && preKeys[DIK_D] == 0) {
		craneTmp.x = cranepos.x + craneSpeed;
		craneArray.x = craneTmp.x / kMAPCHIP_WIDTH;
		if (tmpMAP_chiplist[craneArray.y][craneArray.x] == 0) {
			cranepos.x += craneSpeed;
		}
	}*/




	break;


case ACTION:
	if (keys[DIK_SPACE]) {
		time += 1;
		if (keys[DIK_SPACE] && time >= 300) {
			time = 0;
			scene = 0;

		}
		else if (preKeys[DIK_SPACE] == 0 && time <= 300) {
			time = 0;
		}
	}

	//頂点
	Vertex pos = {
		player.x / kMAPCHIP_WIDTH    ,player.y / kMAPCHIP_HEIGHT, //左上
		(player.x - 1 + kPlayer_SIZE) / kMAPCHIP_WIDTH, player.y / kMAPCHIP_HEIGHT,//右上
		(player.x - 1 + kPlayer_SIZE) / kMAPCHIP_WIDTH, (player.y - 1 + kPlayer_SIZE) / kMAPCHIP_HEIGHT,//右下
		player.x / kMAPCHIP_WIDTH, (player.y - 1 + kPlayer_SIZE) / kMAPCHIP_HEIGHT,//左下
	};


	pos.leftTop.y = (player.y - tmpSpeed) / kBLOCK_SIZE;
	pos.rightTop.y = (player.y - tmpSpeed) / kBLOCK_SIZE;

	if (isPlayerJump == false && keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0) {
		isPlayerJump = true;


		playerJump = 16;


	}
	if (isPlayerJump == true && playerJump > 0) {
		player.y -= playerJump;
		playerJump -= 2;
	}
	if (tmpMAP_chiplist[pos.leftTop.y][pos.leftTop.x] != NONE || tmpMAP_chiplist[pos.rightTop.y][pos.rightTop.x] != NONE) {

		playerJump = 0;

	}

	//地面の接地面

	pos.leftBottom.y = (player.y + kPlayer_SIZE) / kBLOCK_SIZE;
	pos.rightBottom.y = (player.y + kPlayer_SIZE) / kBLOCK_SIZE;
	if (tmpMAP_chiplist[pos.leftBottom.y][pos.leftBottom.x] != NONE && tmpMAP_chiplist[pos.rightBottom.y][pos.rightBottom.x] != NONE) {
		playerJump = 0;
		playerSpeed.y = 0;
		if (isPlayerJump == true && playerJump <= 0) {
			isPlayerJump = false;
		}
	}
	else if (tmpMAP_chiplist[pos.leftBottom.y][pos.leftBottom.x] != NONE || tmpMAP_chiplist[pos.rightBottom.y][pos.rightBottom.x] != NONE) {
		playerSpeed.y = 0;
		playerJump = 0;
		if (isPlayerJump == true && playerJump <= 0) {
			isPlayerJump = false;
		}
	}

	else if (tmpMAP_chiplist[pos.leftBottom.y][pos.leftBottom.x] == NONE && tmpMAP_chiplist[pos.rightBottom.y][pos.rightBottom.x] == NONE) {
		playerSpeed.y = 2;
	}




	// x座標の反転
	pos.leftTop.x = (player.x - tmpSpeed) / kBLOCK_SIZE;
	pos.leftBottom.x = (player.x - tmpSpeed) / kBLOCK_SIZE;
	pos.rightBottom.x = (player.x + kPlayer_SIZE) / kBLOCK_SIZE;
	pos.rightTop.x = (player.x + kPlayer_SIZE) / kBLOCK_SIZE;
	if (tmpMAP_chiplist[pos.leftTop.y][pos.leftTop.x] != NONE && tmpMAP_chiplist[pos.leftBottom.y][pos.leftBottom.x] != NONE) {
		playerSpeed.x = 1;

	}
	else if (tmpMAP_chiplist[pos.leftTop.y][(player.x - kPlayer_SIZE) / kBLOCK_SIZE] == NONE && tmpMAP_chiplist[(player.y + kPlayer_SIZE - tmpSpeed) / kBLOCK_SIZE][(player.x - tmpSpeed) / kBLOCK_SIZE] != NONE) {
		playerSpeed.x = 1;
	}

	if (tmpMAP_chiplist[pos.rightTop.y][pos.rightTop.x] != NONE && tmpMAP_chiplist[pos.rightBottom.y][pos.rightBottom.x] != NONE) {
		playerSpeed.x = -1;
	}
	else if (tmpMAP_chiplist[pos.rightTop.y][(player.x + kPlayer_SIZE * 2) / kBLOCK_SIZE] == NONE && tmpMAP_chiplist[(player.y + kPlayer_SIZE - tmpSpeed) / kBLOCK_SIZE][(player.x + kPlayer_SIZE + tmpSpeed) / kBLOCK_SIZE] != NONE) {
		playerSpeed.x = -1;
	}

	player.x += playerSpeed.x;
	player.y += playerSpeed.y;


	break;
}



///
/// ↑更新処理ここまで
///

///
/// ↓描画処理ここから
///
for (int i = 0; i < kMAP_SIZE_HEIGHT; i++) {
	for (int j = 0; j < kMAP_SIZE_WIDTH; j++) {
		if (tmpMAP_chiplist[i][j] == 1) {

			Novice::DrawSprite(j * kMAPCHIP_WIDTH, i * kMAPCHIP_HEIGHT, block_Resorces, 1.0f, 1.0f, 0.0f, 0xffffffff);
			//Novice::DrawBox(j * kMAPCHIP_WIDTH, i * kMAPCHIP_HEIGHT, kMAPCHIP_WIDTH, kMAPCHIP_HEIGHT, 0.0f, RED, kFillModeSolid);
		}
		if (tmpMAP_chiplist[i][j] == 2) {
			Novice::DrawSprite(j * kMAPCHIP_WIDTH, i * kMAPCHIP_HEIGHT, M_block_Resorces, 1.0f, 1.0f, 0.0f, 0xffffffff);
			//Novice::DrawBox(j * kMAPCHIP_WIDTH, i * kMAPCHIP_HEIGHT, kMAPCHIP_WIDTH, kMAPCHIP_HEIGHT, 0.0f, GREEN, kFillModeSolid);

		}

	}
}
Novice::DrawBox(player.x, player.y, kPlayer_SIZE, kPlayer_SIZE, 0.0f, BLUE, kFillModeSolid);
Novice::DrawBox(cranepos.x, cranepos.y, kBLOCK_SIZE, kBLOCK_SIZE, 0.0f, WHITE, kFillModeSolid);

Novice::ScreenPrintf(10, 10, "%d", scene);
Novice::ScreenPrintf(10, 30, "%d", time);


