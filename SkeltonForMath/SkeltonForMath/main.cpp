//あ！あああああああああああああああああああ！
//スケルトン！落としちゃったんですか！？
//このスケルトン、落としちゃったんですか？
//僕の授業初めてですか！？なぜスケルトンを落としたんですか？
//はぁ…
//わかりました。もう色々期待しないようにします(´・ω・｀) = 3
//せいぜい単位を落とさないように頑張ってください…
#include<DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR,int) {
	DxLib::ChangeWindowMode(true);
	if (DxLib::DxLib_Init()) {
		return -1;
	}
	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	while (!DxLib::ProcessMessage()) {
		DxLib::ClearDrawScreen();
		DxLib::ScreenFlip();
	}
	DxLib::DxLib_End();
	return 0;
}