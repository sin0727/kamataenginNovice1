#pragma once

// �E�B���h�E�̑傫���ƃ|�W�V����
enum class WindowSize {
	WIN_MAX_X = 960,
	WIN_MAX_Y = 640,
	WIN_POS_X = 0,
	WIN_POS_Y = 0,
	POS_MAX_X = 960,
	POS_MAX_Y = 640,
};

// �`�b�v�T�C�Y�ƍő吔
enum class chipSize {
	CELLX = 32,
	CELLY = 32,
	STAGE_MAX_X = 960 / 32,
	STAGE_MAX_Y = 640 / 32,
};

// �V�[���̎��
enum class SceneType {
	title,
	menu,
	tutorial,
	game,
	game_over,
	goal,
};

enum class SelectType {
	tutorial,
	stage1,
};

enum class StageType {
	tutorial,
	game_stage1,
};

enum class tyutorialseen {
	a,
	b,
	c,
	d,
	e,
	f,
};
// �u���b�N�̎�ނƃA�C�e��
enum class Tile : int {
	Stageblock,
	Makeblock,
	Notmoveblock,
	Thorn,
	Tile,
	Coin,

	MAX_TYPE,
};

// �L�����̎��
enum class Item : int {
	/*road = (int)Tile::MAX_TYPE,*/
	player,
	ship,
	arrme,
	armesize = 96,

	MAX_TYPE,
};
