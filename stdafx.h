#pragma once
#pragma once

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers.
#endif

#include <windows.h>
#include "DxDefine.h"



// Handle to the window
HWND hwnd = NULL;

// name of the window (not the title)
LPCTSTR WindowName = L"DirectX12_Begin";

// title of the window
LPCTSTR WindowTitle = L"DX12_Begin";

// width and height of the window
int width = 800;
int height = 600;

// is window full screen?
bool FullScreen = false;



// create a window
bool InitializeWindow(HINSTANCE hInstance, int ShowWnd, int Width, int height, bool fullscreen);

// main application loop
void mainloop();

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);