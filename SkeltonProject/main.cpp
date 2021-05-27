#include <DxLib.h>

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	ChangeWindowMode(true);
	SetWindowText(L"2016192_ç˘ä—êVëæ");
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);
	

	while (ProcessMessage() != -1)
	{
		ClearDrawScreen();

		ScreenFlip();
	}

	DxLib_End();
	return 0;
}