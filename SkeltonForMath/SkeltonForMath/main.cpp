//���I���������������������������������������I
//�X�P���g���I���Ƃ����������ł����I�H
//���̃X�P���g���A���Ƃ����������ł����H
//�l�̎��Ə��߂Ăł����I�H�Ȃ��X�P���g���𗎂Ƃ�����ł����H
//�͂��c
//�킩��܂����B�����F�X���҂��Ȃ��悤�ɂ��܂�(�L�E�ցE�M) = 3
//���������P�ʂ𗎂Ƃ��Ȃ��悤�Ɋ撣���Ă��������c
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