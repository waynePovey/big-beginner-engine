#include <windows.h>

int CALLBACK WinMain(
	_In_ HINSTANCE	hInstance,
	_In_ HINSTANCE	hPrevInstance,
	_In_ LPSTR		lpCmdLine,
	_In_ int			nCmdShow)
{
	const auto pClassName = "Big Beginner Engine";

	WNDCLASSEX wc = { 0 };
	wc.cbSize = sizeof(wc);
	wc.style = CS_OWNDC;
	wc.lpfnWndProc = DefWindowProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = nullptr;
	wc.hCursor = nullptr;
	wc.hbrBackground = nullptr;
	wc.lpszMenuName = nullptr;
	wc.lpszClassName = pClassName;
	wc.hIconSm = nullptr;

	RegisterClassEx(&wc);

	HWND hWnd = CreateWindowEx(
		0, pClassName, "Big Beginner Window"
		, WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU
		, 200, 200, 640, 480
		, nullptr, nullptr, hInstance
		, nullptr
	);

	//Show window
	ShowWindow(hWnd, SW_SHOW);


	while (true);

	return 0;
}