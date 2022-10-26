#pragma once

#include "Stage.h"

// �V�[��
class Scene {
public:
	int scene = (int)SceneType::title;	// �V�[���̎��
	Stage* stage = new Stage;	// �X�e�[�W�̃C���X�^���X��
	int animation_index1 = 0;
	int animation_index2 = 0;
	int frame = 0;
	int tyutorialseen = 0;
	int crearframe = 0;
	int gameoverframe = 0;
	bool is_reset = false;

	int select = 0;
	int curx = 200;
	int cury = 300;
	int tyutorialx = 200;
	int tyutorialy = 200;
	int stage1x = 400;
	int stage1y = 200;
	int gamestage = 0;

	
public:
	Scene();
	~Scene();

	// �X�V����
	void Update();

	// �`�揈��
	void Draw();

	// title�̍X�V����
	void UpdateTitle();

	//// Menu�̍X�V����
	void UpdateMenu();

	// crear�̍X�V����
	void Updatecrear();

	// gameover�̍X�V����
	void Updategameover();

	// title�̕`��
	void DrawTitle();

	//// Menu�̕`��
	void DrawMenu();

	// crear�̕`��
	void Drawcrear();

	// gameover�̕`��
	void Drawgameover();

	void startcount();

	void tyutorial();
};
