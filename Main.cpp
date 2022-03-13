#include <Siv3D.hpp>
#include<Hamframework.hpp>
#include"Battle.hpp"
#include"Gamedata.hpp"

void Main()
{
	Window::SetTitle(U"リーグオブカルテット");
	Window::Resize(1200, 750);

	SceneManager<String, Gamedata> manager;

	manager.add<Battle>(U"Battle");
	manager.add<Battle2>(U"Battle2");
	manager.add<Battle3>(U"Battle3");
	manager.add<Yellow>(U"Yellow");
	manager.add<Arisu>(U"Arisu");
	manager.add<Donald>(U"Donald");


	//オブジェクト
	TextureAsset::Register(U"blackboard", U"Images/blackboard.png");
	TextureAsset::Register(U"floor", U"Images/floor.png");
	TextureAsset::Register(U"wallR", U"Images/wallRight.jpg");
	TextureAsset::Register(U"wallL", U"Images/wallLeft.jpg");
	TextureAsset::Register(U"wall", U"Images/wall.jpg");
	TextureAsset::Register(U"ground", U"Images/ground.png");
	TextureAsset::Register(U"school", U"Images/school.png");
	TextureAsset::Register(U"tree1", U"Images/tree1.png");
	TextureAsset::Register(U"building", U"Images/building.png");
	TextureAsset::Register(U"wallL", U"Images/wallL.png");
	TextureAsset::Register(U"wallR", U"Images/wallR.png");
	TextureAsset::Register(U"cross", U"Images/cross.png");
	TextureAsset::Register(U"enter", U"Images/enter.jpg");
	TextureAsset::Register(U"space", U"Images/space.png");

	
	//敵
	TextureAsset::Register(U"ワーウルフ", U"Images/Enemy/wolf.png");
	TextureAsset::Register(U"キャロットマン", U"Images/Enemy/carotman.png");
	TextureAsset::Register(U"とげボール", U"Images/Enemy/togebo.png");
	TextureAsset::Register(U"メタルエッグ", U"Images/Enemy/metaruEgg.png");
	TextureAsset::Register(U"ピエロ", U"Images/Enemy/piero.png");
	TextureAsset::Register(U"納豆坊", U"Images/Enemy/natto.png");
	TextureAsset::Register(U"イエロー", U"Images/Enemy/a.png");
	TextureAsset::Register(U"アリス", U"Images / Enemy / majyo.png");
	TextureAsset::Register(U"ドナルド", U"Images/Enemy/piero.png");
	//音
	AudioAsset::Register(U"wall", U"Sound/wall.wav");
	AudioAsset::Register(U"damage", U"Sound/damage.wav");
	AudioAsset::Register(U"カーソル音", U"Sound/カーソル音.mp3");
	AudioAsset::Register(U"セレクト音", U"Sound/セレクト音.mp3");
	AudioAsset::Register(U"キャンセル", U"Sound/キャンセル.mp3");
	AudioAsset::Register(U"fire", U"Sound/fire.wav");
	AudioAsset::Register(U"decide", U"Sound/choice.mp3");
	AudioAsset::Register(U"話しかける", U"Sound/話しかける.mp3");
	AudioAsset::Register(U"Town", U"Sound/town.mp3", AudioLoopTiming(true));
	AudioAsset::Register(U"BattleM", U"Sound/battle.wav", AudioLoopTiming(true));
	AudioAsset::Register(U"break", U"Sound/break.mp3", AudioLoopTiming(true));
	TextManager::Create();
	while (System::Update())
	{
		manager.updateScene();
		manager.drawScene();
	}

}

